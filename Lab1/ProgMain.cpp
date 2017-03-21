// Ver bien los include al final


void agregarSocio(string ci,string nombre){
  //Chequeo que haya lugar para socios, y que ademas el mismo no exista
  int i = 0;
  bool salir = false;
  string nom_aux;
  string ci_aux;
  while(i < cantsocios && !salir){
    nom_aux = arr_socios[i].getnombre;
    ci_aux = arr_socio[i].getci;
    if( (nom_aux == nombre) && (ci == ci_aux) ){
      salir = true;
    }
    else i++;
    }
  if(salir == true)
    cout << "Ya existe el socio" << endl;//aca en realidad va lo de invalid argument
  else{
    if(cantsocios < MAX_SOCIOS){
      cantsocios++;
      arr_socios[cantsocios] = new Socio;
      arr_socios[cantsocios] = Socio(ci,nombre);
     }
   }
}


void agregarClase(DtClase& clase){
  int idai = clase.getid();
  int i = 0;
  bool salir = false;
  int idact;
  while(i<cantclases && !salir){
    idact = clases[i].getid();
    if(idai == idact)
      salir = true;
    else
      i++;
  }
  if(salir == true)
//     Tirrar el error sdt invalid argument;
    else
      if(cantclases<MAX_CLASES){
        cantclases++;
        clases[cantclases] = new Clase;
//         Clase(int id,const string nombre, Turno turno);
        clases[cantclases] = Clase(clase.getid(),clase.getnombre(),clase.getturno());
      }
      
    }