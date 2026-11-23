#include "InspeccionController.h"

namespace SGPlantaReciclajeController {

    InspeccionController::InspeccionController() {
        dao = gcnew InspeccionDAO();
    }

    String^ InspeccionController::RegistrarInspeccionCompleta(InspeccionCabecera^ cabecera) {
        // Validaciones
        if (cabecera == nullptr) return "La inspección es nula.";
        if (String::IsNullOrWhiteSpace(cabecera->getCodigoLote())) return "El código de lote es obligatorio.";
        if (cabecera->getDetalles()->Count == 0) return "Debe agregar al menos un parámetro a inspeccionar.";

        try {
            // 1. Iniciar Transacción
            dao->iniciarTransaccion();

            // 2. Insertar Cabecera
            int idGenerado = dao->registrarCabecera(cabecera);
            if (idGenerado <= 0) {
                throw gcnew Exception("No se pudo obtener el ID de la inspección generada.");
            }

            // 3. Insertar Detalles
            for each (InspeccionDetalle ^ detalle in cabecera->getDetalles()) {
                dao->registrarDetalle(idGenerado, detalle);
            }

            // 4. Commit
            dao->confirmarTransaccion();

            // Asignar el ID generado al objeto
            cabecera->setInspeccionId(idGenerado);
            return "";
        }
        catch (Exception^ ex) {
            // 5. Rollback en caso de error
            dao->revertirTransaccion();
            return "Error al registrar la inspección: " + ex->Message;
        }
    }

    List<InspeccionCabecera^>^ InspeccionController::ListarInspecciones() {
        return dao->listarInspecciones();
    }

    List<InspeccionDetalle^>^ InspeccionController::ListarDetalles(int inspeccionId) {
        return dao->listarDetalles(inspeccionId);
    }
}