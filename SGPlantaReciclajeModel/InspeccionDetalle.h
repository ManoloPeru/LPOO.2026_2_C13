#pragma once

namespace SGPlantaReciclajeModel {
    using namespace System;

    public ref class InspeccionDetalle {
    private:
        int inspeccionDetalleId;
        int inspeccionId;
        String^ parametro;
        String^ resultadoParametro;
        String^ notas;

    public:
        // Constructores
        InspeccionDetalle();
        InspeccionDetalle(String^ parametro, String^ resultadoParametro, String^ notas);
        InspeccionDetalle(int inspeccionDetalleId, int inspeccionId, String^ parametro, String^ resultadoParametro, String^ notas);

        // Getters y Setters
        int getInspeccionDetalleId();
        void setInspeccionDetalleId(int id);

        int getInspeccionId();
        void setInspeccionId(int id);

        String^ getParametro();
        void setParametro(String^ parametro);

        String^ getResultadoParametro();
        void setResultadoParametro(String^ resultado);

        String^ getNotas();
        void setNotas(String^ notas);

        String^ ToString() override;
    };
}