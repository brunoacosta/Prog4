/*#include "Clase.hpp"
#include "DtClase.hpp"
#include "DtEntrenamiento.hpp"
#include "DtSocio.hpp"
#include "DtSpinning.hpp"
#include "Entrenamiento.hpp"
#include "Fecha.hpp"
#include "Inscripcion.hpp"
#include "Socio.hpp"
#include "Spinning.hpp"
*/
//#include ""
//#include ""
#include "include/Fecha.hpp"
//g++ -o main main.cpp Para compilar el make y hacer un ejecutable
//Para lanzar el ejecutable ./make

#include <stdlib.h> //Creo que es una libreria que me deja usar comandos del sistema con "System(COMANDO)" /Stefano
#include <iostream> 
using namespace std;

int main(){
  system("clear");
  bool salir = false;
  char c;
  Fecha fec;
  while(!salir){
    //mostrar menu de opciones
    cout << "Para seleccionar opciones por favor usar numeros solamente." << endl;
    cout << "OPCIONES: " << endl;
    cout << "   Nº1: Opcion 1" << endl;
    cout << "   Nº2: Opcion 2" << endl;
    cout << "   Nº3: Opcion 3" << endl;
    cout << "   Nº4: Opcion 4" << endl;
    cout << "   Nº5: Prueba Fecha" << endl;
    cout << "   Nº0: Salir" << endl;
    int opcion;
    cout << "Seleccione opcion: ";
    cin >> opcion;
    switch (opcion){
      case 0:
        salir = true;
        break;
        
      case 1:
        cout << " Opcion N°1" << endl;
        break;
        
      case 2:
        cout << " Opcion N°2" << endl;
        break;
        
      case 3:
        cout << " Opcion N°3" << endl;
        break;
        
      case 4:
        cout << " Opcion N°4" << endl;
        break;
      case 5:
        cout << " Prueba sobre Fecha" << endl;
        int d, m, a;
        cout << " Ingrese el dia: ";
        cin >> d;
        cout << " Ingrese el mes: ";
        cin >> m;
        cout << " Ingrese el año: ";
        cin >> a;
        fec = Fecha(d, m, a);
        //Imprimir fecha 
        cout << fec.get_dia() << "-" << fec.get_mes() << "-" << fec.get_anio() << endl;
        break;
        
      default:
        cout << " La opcion que ha elegido no es correcta!" << endl;
    }
    if (opcion !=0 ){
      cout << endl;
      cout << "Presione cualquier tecla para continuar." << endl;
      //Esto hace una pause pero si o si tengo q poner un caracter.
      cin >> c;
    }
    system("clear");
  }
}










