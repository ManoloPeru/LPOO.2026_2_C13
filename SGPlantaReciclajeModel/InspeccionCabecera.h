#pragma once
#include "InspeccionDetalle.h"

namespace SGPlantaReciclajeModel {
    using namespace System;
    using namespace System::Collections::Generic;

    public ref class InspeccionCabecera {
    private:
        int inspeccionId;
        String^ codigoLote;
        int estacionId;
        String^ inspector;
        DateTime fechaInspeccion;
        String^ resultadoGeneral;
        List<InspeccionDetalle^>^ detalles;

    public:
        // Constructores
        InspeccionCabecera();
        InspeccionCabecera(String^ codigoLote, int estacionId, String^ inspector, String^ resultadoGeneral);
        InspeccionCabecera(int inspeccionId, String^ codigoLote, int estacionId, String^ inspector, DateTime fechaInspeccion, String^ resultadoGeneral);

        // Getters y Setters
        int getInspeccionId();
        void setInspeccionId(int id);

        String^ getCodigoLote();
        void setCodigoLote(String^ codigoLote);

        int getEstacionId();
        void setEstacionId(int id);

        String^ getInspector();
        void setInspector(String^ inspector);

        DateTime getFechaInspeccion();
        void setFechaInspeccion(DateTime fecha);

        String^ getResultadoGeneral();
        void setResultadoGeneral(String^ resultado);

        List<InspeccionDetalle^>^ getDetalles();
        void setDetalles(List<InspeccionDetalle^>^ listaDetalles);

        // Auxiliar para agregar detalles
        void agregarDetalle(InspeccionDetalle^ detalle);

        String^ ToString() override;
    };
}