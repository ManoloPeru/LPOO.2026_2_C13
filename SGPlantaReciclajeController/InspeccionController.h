#pragma once

namespace SGPlantaReciclajeController {
    using namespace System;
    using namespace System::Collections::Generic;
    using namespace SGPlantaReciclajeModel;
    using namespace SGPlantaReciclajeDAO;

    public ref class InspeccionController {
    private:
        InspeccionDAO^ dao;

    public:
        InspeccionController();

        // Guarda la inspección completa (Cabecera + Detalles) de forma atómica
        String^ RegistrarInspeccionCompleta(InspeccionCabecera^ cabecera);

        // Métodos de consulta
        List<InspeccionCabecera^>^ ListarInspecciones();
        List<InspeccionDetalle^>^ ListarDetalles(int inspeccionId);
    };
}