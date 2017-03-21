#include "../include/Inscripcion.hpp" 
#include "../include/Clase.hpp" 
#include "../include/Fecha.hpp"
#include "../include/Socio.hpp"
#include <string>
using namespace std;

// //Constructor
Inscripcion::Inscripcion(const Fecha fec,const Socio *socio,const Clase *clase){
    this->soc = socio;
    this->fecha = fec;
    this->clase = clase;
}

//getters
Fecha Inscripcion::getfecha(){
    return this->fecha;
}

Clase Inscripcion::getclase(){
    return this->clase
}

Socio Inscripcion::getsocio(){
    return this->socio
}

    void setfecha(const Fecha fec){
        this->fecha = fec;      
    }

    void setsocio(Socio *soc){
      this->soc = soc;      
    }

    void setclase(Clase *clac){
      this->clase = clac;
      
    }


//destructor
Inscripcion::~Inscripcion(){
    delete this->soc;
//     delete this->fec;
    delete this->clase;
}
//Revisar si esta bien esto
    



//hay que revisarlo bien
