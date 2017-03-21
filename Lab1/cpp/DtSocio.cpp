#include "../include/DtSocio.hpp"
#include <iostream.h>

DtSocio::DtSocio(int CI, const string nombre){
  this->CI = CI;
  this->nombre = nombre;
}

int DtSocio::get_CI() {
    return this->CI;
}

string DtSocio::get_nombre() {
    return this->nombre;
}

DtSocio::~DtSocio(){}