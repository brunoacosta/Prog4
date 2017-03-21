#include "../include/Entrenamiento.hpp" 
#include "../include/Clase.hpp" 
 
Entrenamiento::Entrenamiento(bool enRambla, int ID, const string nombre, Turno turno, int cantPersonas){
  Clase(ID, nombre, turno);
  this->enRambla = enRambla;
  this->cantPersonas = cantPersonas;
}

bool Entrenamiento::esEnRambla() {
  return this->rambla;
}

int Entrenamiento::cantidadPersonas() {
  return this->cantPersonas
}

DtEntrenamiento getData(){
  DtEntrenamiento data = new DtEntrenamiento(/*PARAMETROS*/);
  return data;
}

virtual int Entrenamiento::cupo() {      //int virtual Entrenamiento::cupo -->Revisar. Stefano
  if (this->rambla)
      return 20;
  else
      return 10;
}

Entrenamiento::~Entrenamiento(){
}
