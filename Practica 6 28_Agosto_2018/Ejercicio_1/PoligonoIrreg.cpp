#include "PoligonoIrreg.h"
#include <iostream>

using namespace std;

PoligonoIrreg::PoligonoIrreg()
{}

void PoligonoIrreg::anadeVertice(Coordenada coordenada){
	v.push_back(coordenada);
}

void PoligonoIrreg::imprimeVertices(){

	double magnitud; 
	for (i = v.begin(); i != v.end(); i++){
		magnitud = pow(i->obtenerX(),2) + pow(i->obtenerY(),2);
		magnitud =sqrt(magnitud);
		printf("Coordenada x: %4.3f\t y: %4.3f\t Con una magnitud = %4.3f\n" ,i->obtenerX(),i->obtenerY(),magnitud);
	}
	

//	for (int i = 0; i < v.size(); i++)
//	{
//		printf("Coordenada x: %.3f y: %.3f \n",v[i].obtenerX(),v[i].obtenerY());
		//cout<<"Coordenada x: "<<v[i].obtenerX() <<" y: "<<v[i].obtenerY()<< endl;
//	}
}




