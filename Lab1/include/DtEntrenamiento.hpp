#include "Clase.hpp"

class DtEntrenamiento public:DtClase{
  private:
    bool enRambla;
  public:
    DtEntrenamiento(bool enRambla, int ID, const string nombre, Turno turno); //Aca en el DataType va lo de la clase? 
    bool getEsEnRambla();
    DtEntrenamiento::~DtEntrenamiento();
};