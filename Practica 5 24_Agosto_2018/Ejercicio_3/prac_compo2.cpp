#include "Coordenada.h"
#include "PoligonoIrreg.h"
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;




int main( )
{
	vector <PoligonoIrreg> poligonoIrreg(1);

		for(int j=0; j<rand();j++){
			poligonoIrreg[j].anadeVerticeRecerve(Coordenada(1,1));
		}

	poligonoIrreg[poligonoIrreg.size()-1].getContadorVertices();


/*	PoligonoIrreg poligonoIrreg;


	poligonoIrreg.anadeVertice(Coordenada(1,1));
	poligonoIrreg.imprimeVertices();
/*
	Rectangulo rectangulo1(2,3,5,1);
	double ancho, alto;
	
	cout << "Calculando el área de un rectángulo dadas sus coordenadas en un plano cartesiano:\n";

	rectangulo1.imprimeEsq();
		alto = rectangulo1.obtieneSupIzq().obtenerY() -
		rectangulo1.obtieneInfDer().obtenerY();

		ancho = rectangulo1.obtieneInfDer().obtenerX() -
		rectangulo1.obtieneSupIzq().obtenerX();

	cout << "El área del rectángulo es = " << ancho*alto << endl;

*/
	return 0;
}	