#include <iostream>
#include <unistd.h>
#include <thread>

using namespace std;

int aux = 0;
void funcion1(int valor, int n){
	for(int i = 0; i < n; i++){
		aux++;	
	}
	sleep(1);
}

void funcion2(int valor, int n){
	for(int i = 0; i < n; i++){
		aux--;	
	}
	sleep(1);
}

int main(int argc, char *argv[]){
	int n = atoi(argv[1]);
	thread th1(funcion1, 5, n), th2(funcion2, 10, n);

	cout << "Proceso principal espera que los hilos terminen\n";
	th1.join();
	th2.join();
	cout << "Valor de la variable global " << aux << endl;
	cout << "El hilo principal termina\n";
	exit(0);
}