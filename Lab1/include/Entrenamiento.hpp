#include "Clase.hpp"
#include "DtEntrenamiento.hpp"


class Entrenamiento :public Clase{
private:
    int cantPersonas;
    bool enRambla; //Cambiar /Stefano
public:
    Entrenamiento(bool enRambla, int ID, const string nombre, Turno turno, int cantPersonas);
    bool esEnRambla(); //Esto es un getter!
    int cantidadPersonas();
    DtEntrenamiento getData();
    virtual int cupo();
    void ~Entrenamiento();
};


//Los DT no los ibamos a usar en el main? Cuando tenemos q devolver algo cargar un DT Y mostrar eso en vez de trabajar con los objetos?. Stefano