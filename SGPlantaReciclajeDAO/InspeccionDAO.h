#pragma once
#include "BaseDAO.h"

namespace SGPlantaReciclajeDAO {
    using namespace System::Collections::Generic;
    using namespace System::Data::SqlClient;
    using namespace SGPlantaReciclajeModel;

    public ref class InspeccionDAO : public BaseDAO {
    public:
        InspeccionDAO();

        // Inserta la cabecera usando el SP y devuelve el ID generado
        int registrarCabecera(InspeccionCabecera^ cabecera);

        // Inserta un detalle usando el SP
        void registrarDetalle(int inspeccionId, InspeccionDetalle^ detalle);

        // Lista todas las InspeccionCabeceras
        List<InspeccionCabecera^>^ listarInspecciones();

        // Lista los detalles de una inspección específica
        List<InspeccionDetalle^>^ listarDetalles(int inspeccionId);
    };
}