#include <iostream>
#include <unistd.h>
#include <thread>
#include <atomic>

using namespace std;

void funcion1(int valor, int n, atomic<int>& variable){
	for(int i = 0; i < n; i++){
		variable++;	
	}
	sleep(1);
}

void funcion2(int valor, int n, atomic<int>& variable){
	for(int i = 0; i < n; i++){
		variable--;	
	}
	sleep(1);
}

int main(int argc, char *argv[]){
	int n = atoi(argv[1]);
	atomic<int> var_local(0);

	thread th1(funcion1, 5, n, ref(var_local)), th2(funcion2, 10, n, ref(var_local));
	cout << "Proceso principal espera que los hilos terminen\n";
	th1.join();
	th2.join();
	cout << "Valor de la variable local " << var_local << endl;
	cout << "El hilo principal termina\n";
	exit(0);
}