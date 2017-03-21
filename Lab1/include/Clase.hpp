#ifndef _Clase // Agregue esto porq vi en un error q decia q el enum Turno estaba agregado multiples veces
#define _Clase //Esto lo q hace basicamente es hacer q vea q si ya esta agregado q no lo agregue o algo asi
//la verdad q no lo entendi muy bien pero hay q ponerlo jajajja 
//Esto solo lo puse aca en los otros me imagino q va pero no lo he puesto     /Stefano

#include "Socio.hpp"
#include <string>


using namespace std;

enum Turno {Maniana, Tarde, Noche};

class Clase{
    private:
         int id, tope;
         string nombre; //???
         Turno turno; //manana, tarde, noche
//        DtClase clase;
         Inscripcion *inscripcion[50]; //Array de tamaño 50
    public:
        //Constructores
        Clase();
        Clase(int id,const string nombre, Turno turno);
         //Setters
        void setId(int id);
        void setNombre(const string nombre);
        void setTurno(Turno turno);
        //Esto va o no va? /Stefano
        void inscribirSocio(const Socio soc, const Fecha fecha, const Spinning spini); //esto no se si va . bruno
        //Getters
        int getId();
        string getNombre();
        Turno getTurno();
        DtClase getData();
        virtual int cupo() = 0;
        //Destructor
        ~Clase();
};

#endif