
// class Clase;

#include <string>
#include "Clase.hpp"
#include "Fecha.hpp"
#include "Socio.hpp"
using namespace std;

class Inscripcion{
private:
    Fecha fecha;//Aca saco la fecha del .h fecha
    Socio *soc;//Puntero a socio
    Clase *clase;//puntero a clase
public:
    //Constructor
    Inscripcion(const Fecha fec, const Socio *socio, const Clase *clase);
    //Donde fec, socio y clase son punteros a las respectivas clases
    //Getters
    Fecha getfecha();//Retorna la fecha de la inscripcion
    Socio getsocio();//Retorna el socio en la inscripcion
    Clase getclase();//Retorna la clase a la que refiere la inscripcion
     //setters
    void setfecha(const Fecha fec);
    void setsocio(Socio *soc);
    void setclase(Clase *clac);
    //Destructor
    ~Inscripcion();
    
};

// #include "Clase.hpp"
