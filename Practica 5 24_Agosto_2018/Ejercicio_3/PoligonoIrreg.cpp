#include "PoligonoIrreg.h"
#include <iostream>

using namespace std;

PoligonoIrreg::PoligonoIrreg()
{}

void PoligonoIrreg::anadeVertice(Coordenada coordenada){
	v.push_back(coordenada);
	contadorvertices++;
}

void PoligonoIrreg::anadeVerticeRecerve(Coordenada coordenada){
	v.reserve(v.size()+1);
	v[v.size()-1] =coordenada;

	contadorvertices++;
}


void PoligonoIrreg::imprimeVertices(){
	

	for (int i = 0; i < v.size(); i++)
	{
		cout<<"Coordenada x: "<<v[i].obtenerX() <<" y: "<<v[i].obtenerY()<< endl;		
	}
}


int PoligonoIrreg::contadorvertices=0;

int PoligonoIrreg::getContadorVertices(){
	cout<< "Valor de la static: "<<contadorvertices<<endl;
	return contadorvertices;
}


