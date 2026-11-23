#include "InspeccionCabecera.h"

using namespace SGPlantaReciclajeModel;

InspeccionCabecera::InspeccionCabecera() {
    this->inspeccionId = 0;
    this->codigoLote = "";
    this->estacionId = 0;
    this->inspector = "";
    this->fechaInspeccion = DateTime::Now;
    this->resultadoGeneral = "";
    this->detalles = gcnew List<InspeccionDetalle^>();
}

InspeccionCabecera::InspeccionCabecera(String^ codigoLote, int estacionId, String^ inspector, String^ resultadoGeneral) {
    this->inspeccionId = 0;
    this->codigoLote = codigoLote;
    this->estacionId = estacionId;
    this->inspector = inspector;
    this->fechaInspeccion = DateTime::Now; // Por defecto la fecha actual
    this->resultadoGeneral = resultadoGeneral;
    this->detalles = gcnew List<InspeccionDetalle^>();
}

InspeccionCabecera::InspeccionCabecera(int inspeccionId, String^ codigoLote, int estacionId, String^ inspector, DateTime fechaInspeccion, String^ resultadoGeneral) {
    this->inspeccionId = inspeccionId;
    this->codigoLote = codigoLote;
    this->estacionId = estacionId;
    this->inspector = inspector;
    this->fechaInspeccion = fechaInspeccion;
    this->resultadoGeneral = resultadoGeneral;
    this->detalles = gcnew List<InspeccionDetalle^>();
}

int InspeccionCabecera::getInspeccionId() { return inspeccionId; }
void InspeccionCabecera::setInspeccionId(int id) { this->inspeccionId = id; }

String^ InspeccionCabecera::getCodigoLote() { return codigoLote; }
void InspeccionCabecera::setCodigoLote(String^ codigoLote) { this->codigoLote = codigoLote; }

int InspeccionCabecera::getEstacionId() { return estacionId; }
void InspeccionCabecera::setEstacionId(int id) { this->estacionId = id; }

String^ InspeccionCabecera::getInspector() { return inspector; }
void InspeccionCabecera::setInspector(String^ inspector) { this->inspector = inspector; }

DateTime InspeccionCabecera::getFechaInspeccion() { return fechaInspeccion; }
void InspeccionCabecera::setFechaInspeccion(DateTime fecha) { this->fechaInspeccion = fecha; }

String^ InspeccionCabecera::getResultadoGeneral() { return resultadoGeneral; }
void InspeccionCabecera::setResultadoGeneral(String^ resultado) { this->resultadoGeneral = resultado; }

List<InspeccionDetalle^>^ InspeccionCabecera::getDetalles() { return detalles; }
void InspeccionCabecera::setDetalles(List<InspeccionDetalle^>^ listaDetalles) { this->detalles = listaDetalles; }

void InspeccionCabecera::agregarDetalle(InspeccionDetalle^ detalle) {
    if (detalle != nullptr) {
        this->detalles->Add(detalle);
    }
}

String^ InspeccionCabecera::ToString() {
    return String::Format("Lote: {0} | Estación: {1} | Inspector: {2} | Fecha: {3} | Resultado: {4} | Detalles: {5}",
        codigoLote, estacionId, inspector, fechaInspeccion.ToString("dd/MM/yyyy"), resultadoGeneral, detalles->Count);
}