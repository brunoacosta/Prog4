#include "Clase.hpp"

class DtSpinning public:DtClase{
  private:
    int cantBicicletas;
  public:
    //Constructor
    DtSpinning(int cantBicis, int ID, const string nombre, Turno turno);
    int getCantBicicletas();
    ~DtSpinning();
};