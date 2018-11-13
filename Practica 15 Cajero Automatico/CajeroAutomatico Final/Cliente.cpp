#include <iostream>
#include <stdlib.h>
#include "Solicitud.h"

using namespace std;

int main(int argc, char *argv[]) {

	Solicitud cliente;
	char *ip = argv[1];
	int puerto = atoi(argv[2]);
	int operacion = atoi(argv[3]);
	int id_mensaje = 1;

	if(operacion == 1)
	{
		char consultas[100] = "Info";
		char *resp = cliente.doOperation(ip, puerto, operacion, consultas, -11);
			cout<<"\t ->"<<resp<<endl;

		char arreglo[100] = "Consulta";
		char *respuesta = cliente.doOperation(ip, puerto, operacion, arreglo, id_mensaje);
            int n = atoi(respuesta);
			cout<<"\t ->Saldo actual: "<<n<<endl;
	}
	else if(operacion == 2)
	{
		char *respuesta;
		char respaux[100];
        int nuevovalor;
		cout << "Ingrese el numero de depositos: ";
		cin >> nuevovalor;
		fflush(stdin);
		char consultas[100] = "Info";
		char *resp = cliente.doOperation(ip, puerto, operacion, consultas, nuevovalor);
			cout<<"\t ->"<<resp<<endl;
		fflush(stdin);
		for(int i = 0; i < nuevovalor; i++ )
		{
			int temp = 1;
			char arreglo[100];
			
			sprintf (arreglo, "%d", temp);
			//strcat(respuesta,'\0');
				resp = cliente.doOperation(ip, puerto, operacion, arreglo, id_mensaje+i);
			//strcat(respuesta,'\0');
			//fflush(stdin);
			//memcpy(respaux ,resp, strlen(resp));
			//fflush(stdin);
            //cout<<"\t ->Saldo temp: " <<respuesta<<endl;
		}
		fflush(stdin);
		cout<<" "<<endl;
		cout<<"\t ->Saldo Final: " <<resp<<endl;
	}

    return 0;
}
