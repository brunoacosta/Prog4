#include "../include/DtClase.hpp"
#include "../include/Clase.hpp"


DtClase::DtClase(int id, const string nombre, Turno turno){
  this->id = id;
  this->nombre = nombre;
  this->turno = turno;
}

int DtClase::getId(){
  return this->id;
}

string DtClase::getNombre(){
  return this->nombre;
}

Turno DtClase::getTurno(){
  return this->turno;
}

DtClase::~DtClase(){}