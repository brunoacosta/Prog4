#include "DtSocio.hpp"
#include <string>
using namespace std;


class Socio{
    private:
        string CI;
        string nombre;
    public:
        //Constructores
        Socio(const string CI, const string nombre);
        //Getters
        string getCI();
        string getNombre();
        DtSocio getData();
        //Setters
        void setNombre(const string nombre);
        void setCI(const string CI);
        //Destructor
        ~Socio();
}; //a esto le faltan cosas, hay que ver bien que onda con las relaciones que hay entre clases Bruno :/
