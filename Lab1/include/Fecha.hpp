//#include <string>
//using namespace std;
/*
enum dias {1..31};
enum meses {1..12};
enum años {1900..INT_MAX};*/
//Puede que esto este mal, haya que usar enteros y preguntar antes de que cada valor sea seteado
class  Fecha{
    private:
      int dia;
      int mes;
      int anio;
    public:
      Fecha();      
      Fecha(int d, int m, int a);//Inicializar Fecha
      //Hay que definir estas cosas en alguna parte
      int get_dia();//Obtener dia
      int get_mes();//obtener mes
      int get_anio();//Obtener año
};




