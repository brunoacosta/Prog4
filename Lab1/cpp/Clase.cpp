#include "../include/Inscripcion.hpp" 
#include "../include/Clase.hpp"
#include "../include/DtClase.hpp"
// #include "../include/Ins cripcion.hpp" 

Clase::Clase(){
    this->tope = 0; //Hay que crear el almacenamiento aca? Stefano
    for(int i=0;i<50;i++)
      this->inscripcion[i] = NULL;
}

Clase::Clase(int id,const string nombre, Turno turno){
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
    this->tope = 0;
    for(int i=0;i<50;i++)
      this->inscripcion[i] = NULL;
}

void Clase::setId(int id){
    this->id = id;
}

void Clase::setNombre(const string nombre){
    this->nombre = nombre;
}

void Clase::setTurno(Turno turno){
    this->turno = turno;
}

int Clase::getId(){
    return this->id;
}

string Clase::getNombre(){
    return this->nombre;
}

Turno Clase::getTurno(){
    return this->turno;
}

DtClase getData(){
  DtClase data = new DtClase(this->id, this->nombre, this->turno);
  return data;
}
/*
virtual int Clase::cupo(){ //Esto iria? porq como es abstracta no lleva metodo, ahora... como no tiene codigo ya significa q no tiene metodo? Stefano
    
}*/

Clase::~Clase(){
  
}

