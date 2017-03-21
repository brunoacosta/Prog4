#include "../include/Spinning.hpp" 
#include "../include/Clase.hpp" 


Spinning :: Spinning(int CantBici,Turno t,const string nombre,int id){
    Clase(id,nombre,t);
    this->CantBicicletas = cantBici;
}

virtual int Spinning::cupo(){
    return this->CantBicicletas;
}

DtSpinning getData(){
  DtSpinning data = new DtSpinning(/*PARAMETROS*/);
  return data;
}

Spinning::~Spinning(){
}
