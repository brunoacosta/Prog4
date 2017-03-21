#include "../include/DtSpinning.hpp"

DtSpinning::DtSpinning(int cantBicis, int ID, const string nombre, Turno turno){
  Clase(ID, nombre, turno);
  this->cantBicicletas = cantBicis;
}

int DtSpinning::getCantBicicletas(){
  return this->cantBicicletas;
}

DtSpinning :: ~DtSpinning(){} 