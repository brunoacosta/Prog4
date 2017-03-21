//#include "Clase.hpp"
#include <string>
class Clase;

using namespace std;

class DtClase{
  private:
    int id;
    string nombre;
    Turno turno;
  public:
    DtClase(int id, const string nombre, Turno turno);
    int getId();
    string getNombre();
    Turno getTurno();
    ~DtClase();
};