#include "../include/Fecha.hpp"
//#include <iostream.h>

Fecha::Fecha(){}

Fecha::Fecha(int d,int m,int a){
    this->dia = d;
    this->mes = m;
    this->anio = a;
}

int Fecha::get_dia(){
    return this->dia;
}

int Fecha::get_mes(){
    return this->mes;
}

int Fecha::get_anio(){
    return this->anio;
} 

