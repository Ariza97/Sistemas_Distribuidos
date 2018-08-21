#include "Fecha.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>

using namespace std;


int main()
{
	Fecha a,b;
	int i, numero_1, numero_2;

	srand(time(NULL));

	cout<<"Datos enviados por referencia\n";
	//Por referencia
	clock_t c2 = clock();
	for(i =0; i<3000000; i++){
		numero_1 =rand()%51;
		numero_2 =rand()%51;

		int resultado =a.referencia(&numero_1, &numero_2);
		//cout<<"Valor 1: "<<numero_1<<" Valor 2: "<<numero_2<< " Resultado: "<<resultado<<"\n";
	}
	cout<<"Tiempo x referencia a estilo C: "<< (clock()-c2)*1000/1000000<< " ms\n";

return 1;
}
