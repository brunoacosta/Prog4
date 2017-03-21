#include <string>
using namespace std;

class DtSocio {
    private:
        int CI;
        string nombre;
    public:
        DtSocio(int CI, const string nombre);
        int get_CI();
        string get_nombre();
        DtSocio::~DtSocio();
        
};


