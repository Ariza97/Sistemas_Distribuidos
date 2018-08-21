#include "Fecha.h"
#include <iostream>
using namespace std;


Fecha::Fecha( )
{

}

int Fecha::parametros(int fecha1, int fecha2){
	if(fecha1 > fecha2)
		return 0;
	else if(fecha1 == fecha2)
		return 1;
	else
		return -1;
}

int Fecha::referencia(int &fecha1, int &fecha2){
	if(fecha1 > fecha2)
		return 0;
	else if(fecha1 == fecha2)
		return 1;
	else
		return 1;
}


/*
void Fecha::inicializaFecha(int dd, int mm, int aaaa)
{
  anio = aaaa;
  mes = mm;
  dia = dd;
    return;
}

void Fecha::muestraFecha()
{
  cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
    return;
}

bool leapyr(int aaaa){

}
*/