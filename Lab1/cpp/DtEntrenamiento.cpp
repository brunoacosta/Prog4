#include "../include/DtEntrenamiento.hpp"

DtEntrenamiento::DtEntrenamiento(bool enRambla, int ID, const string nombre, Turno turno){
  Clase(ID, nombre, turno);
  this->enRambla = enRambla;
}

bool DtEntrenamiento::getEsEnRambla(){
  return this->enRambla;
}

DtEntrenamiento::~DtEntrenamiento(){};