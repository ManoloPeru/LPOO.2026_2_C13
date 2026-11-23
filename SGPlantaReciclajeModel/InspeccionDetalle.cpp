#include "InspeccionDetalle.h"

using namespace SGPlantaReciclajeModel;

InspeccionDetalle::InspeccionDetalle() {
    this->inspeccionDetalleId = 0;
    this->inspeccionId = 0;
    this->parametro = "";
    this->resultadoParametro = "";
    this->notas = "";
}

InspeccionDetalle::InspeccionDetalle(String^ parametro, String^ resultadoParametro, String^ notas) {
    this->inspeccionDetalleId = 0;
    this->inspeccionId = 0;
    this->parametro = parametro;
    this->resultadoParametro = resultadoParametro;
    this->notas = notas;
}

InspeccionDetalle::InspeccionDetalle(int inspeccionDetalleId, int inspeccionId, String^ parametro, String^ resultadoParametro, String^ notas) {
    this->inspeccionDetalleId = inspeccionDetalleId;
    this->inspeccionId = inspeccionId;
    this->parametro = parametro;
    this->resultadoParametro = resultadoParametro;
    this->notas = notas;
}

int InspeccionDetalle::getInspeccionDetalleId() { return inspeccionDetalleId; }
void InspeccionDetalle::setInspeccionDetalleId(int id) { this->inspeccionDetalleId = id; }

int InspeccionDetalle::getInspeccionId() { return inspeccionId; }
void InspeccionDetalle::setInspeccionId(int id) { this->inspeccionId = id; }

String^ InspeccionDetalle::getParametro() { return parametro; }
void InspeccionDetalle::setParametro(String^ parametro) { this->parametro = parametro; }

String^ InspeccionDetalle::getResultadoParametro() { return resultadoParametro; }
void InspeccionDetalle::setResultadoParametro(String^ resultado) { this->resultadoParametro = resultado; }

String^ InspeccionDetalle::getNotas() { return notas; }
void InspeccionDetalle::setNotas(String^ notas) { this->notas = notas; }

String^ InspeccionDetalle::ToString() {
    return String::Format("[{0}] {1}: {2} | Notas: {3}", inspeccionDetalleId, parametro, resultadoParametro, notas);
}