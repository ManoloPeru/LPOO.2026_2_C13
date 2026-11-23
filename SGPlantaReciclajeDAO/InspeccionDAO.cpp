#include "InspeccionDAO.h"

namespace SGPlantaReciclajeDAO {

    InspeccionDAO::InspeccionDAO() : BaseDAO() {}

    // ============================================================
    // CREATE: Cabecera (Usa SP con parámetro OUTPUT)
    // ============================================================
    int InspeccionDAO::registrarCabecera(InspeccionCabecera^ cabecera) {
        int idGenerado = 0;
        try {
            // Asumimos que la transacción ya fue iniciada por el Controller
            SqlCommand^ comando = gcnew SqlCommand("usp_CreateInspeccion", this->getObjConexion(), this->getObjTransaccion());
            comando->CommandType = CommandType::StoredProcedure;

            comando->Parameters->AddWithValue("@CodigoLote", cabecera->getCodigoLote());
            comando->Parameters->AddWithValue("@EstacionId", cabecera->getEstacionId());
            comando->Parameters->AddWithValue("@Inspector", cabecera->getInspector());
            comando->Parameters->AddWithValue("@ResultadoGeneral", cabecera->getResultadoGeneral());
            comando->Parameters->AddWithValue("@FechaInspeccion", cabecera->getFechaInspeccion());

            // Parámetro de Salida (OUTPUT)
            SqlParameter^ paramId = gcnew SqlParameter("@InspeccionId", SqlDbType::Int);
            paramId->Direction = ParameterDirection::Output;
            comando->Parameters->Add(paramId);

            comando->ExecuteNonQuery();

            if (paramId->Value != nullptr && paramId->Value != DBNull::Value) {
                idGenerado = Convert::ToInt32(paramId->Value);
            }
        }
        catch (SqlException^ ex) {
            throw gcnew Exception("Error en SP CreateInspeccion: " + ex->Message);
        }
        return idGenerado;
    }

    // ============================================================
    // CREATE: Detalle (Invocado iterativamente)
    // ============================================================
    void InspeccionDAO::registrarDetalle(int inspeccionId, InspeccionDetalle^ detalle) {
        try {
            SqlCommand^ comando = gcnew SqlCommand("usp_AddInspeccionDetail", this->getObjConexion(), this->getObjTransaccion());
            comando->CommandType = CommandType::StoredProcedure;

            comando->Parameters->AddWithValue("@InspeccionId", inspeccionId);
            comando->Parameters->AddWithValue("@Parametro", detalle->getParametro());
            comando->Parameters->AddWithValue("@ResultadoParametro", detalle->getResultadoParametro());
            comando->Parameters->AddWithValue("@Notas", detalle->getNotas());

            comando->ExecuteNonQuery();
        }
        catch (SqlException^ ex) {
            throw gcnew Exception("Error en SP AddInspeccionDetail: " + ex->Message);
        }
    }

    // ============================================================
    // READ: Listar Cabeceras
    // ============================================================
    List<InspeccionCabecera^>^ InspeccionDAO::listarInspecciones() {
        List<InspeccionCabecera^>^ lista = gcnew List<InspeccionCabecera^>();

        // Nota: Debes crear el SP usp_QueryAllInspecciones o usar SQL directo
        String^ sSql = "SELECT InspeccionId, CodigoLote, EstacionId, Inspector, FechaInspeccion, ResultadoGeneral FROM InspeccionCabecera";

        try {
            abrirConexion();
            SqlCommand^ comando = gcnew SqlCommand(sSql, this->getObjConexion());
            SqlDataReader^ reader = comando->ExecuteReader();

            while (reader->Read()) {
                InspeccionCabecera^ cab = gcnew InspeccionCabecera(
                    Convert::ToInt32(reader["InspeccionId"]),
                    reader["CodigoLote"]->ToString(),
                    Convert::ToInt32(reader["EstacionId"]),
                    reader["Inspector"]->ToString(),
                    Convert::ToDateTime(reader["FechaInspeccion"]),
                    reader["ResultadoGeneral"]->ToString()
                );
                lista->Add(cab);
            }
            reader->Close();
            cerrarConexion();
        }
        catch (Exception^ ex) {
            Console::WriteLine("Error al listar inspecciones: " + ex->Message);
            if (this->getObjConexion()->State == ConnectionState::Open) cerrarConexion();
        }
        return lista;
    }

    // ============================================================
    // READ: Listar Detalles por Inspección
    // ============================================================
    List<InspeccionDetalle^>^ InspeccionDAO::listarDetalles(int inspeccionId) {
        List<InspeccionDetalle^>^ lista = gcnew List<InspeccionDetalle^>();
        String^ sSql = "SELECT InspeccionDetalleId, Parametro, ResultadoParametro, Notas FROM InspeccionDetalle WHERE InspeccionId = @id";

        try {
            abrirConexion();
            SqlCommand^ comando = gcnew SqlCommand(sSql, this->getObjConexion());
            comando->Parameters->AddWithValue("@id", inspeccionId);

            SqlDataReader^ reader = comando->ExecuteReader();
            while (reader->Read()) {
                InspeccionDetalle^ det = gcnew InspeccionDetalle(
                    Convert::ToInt32(reader["InspeccionDetalleId"]),
                    inspeccionId,
                    reader["Parametro"]->ToString(),
                    reader["ResultadoParametro"]->ToString(),
                    reader["Notas"]->ToString()
                );
                lista->Add(det);
            }
            reader->Close();
            cerrarConexion();
        }
        catch (Exception^ ex) {
            Console::WriteLine("Error al listar detalles: " + ex->Message);
            if (this->getObjConexion()->State == ConnectionState::Open) cerrarConexion();
        }
        return lista;
    }
}