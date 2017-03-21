#include "../include/Socio.hpp"

#include <string>

using namespace std;


Socio::Socio(const string nom, const string ci){
     this->CI = ci;
     this->nombre = nom;
}


string Socio::getCI(){
    return this->CI;
}

string Socio::getNombre(){
    return this->nombre;
}

DtSocio getData(){
  DtSocio data = new DtSocio(this->CI, this->nombre);
  return data;
}

void Socio::setNombre(const string nombre){
    this->nombre = nombre;
}


void Socio::setCI(const string CI){
    this->CI = CI;
}

Socio::~Socio(){
    
}
