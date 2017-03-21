#include "Clase.hpp"
#include "DtSpinning.hpp"


class Spinning :public Clase{
    private:
        int cantBicicletas;
    public:
        Spinning(int CantBici, Turno t, string nombre, int id);
        virtual int cupo();
        DtSpinning getData();
        ~Spinning ();
};
