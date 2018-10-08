#include <stdio.h>
#include <stdlib.h>
#include "SocketDatagrama.h"
#include "PaqueteDatagrama.h"

int main(int argc, char const *argv[])
{
    unsigned int numeroPrimo = atoi(argv[1]);
    //printf("%d", numeroPrimo);
    unsigned int contador =0;
    int rodrigo =0, aidee =0;

    unsigned int num[3];
    char ipRod[] = "10.100.66.153";
    char ipAidee[] = "10.100.74.158";

    //Rodrigo
    SocketDatagrama socket;
    num[0] = numeroPrimo;
    num[1] = 2;
    num[2] = numeroPrimo/2; 
    int *resRod; //Debe recibir O o 1    
    PaqueteDatagrama paqRod((char *)num, 3*sizeof(unsigned int),ipRod,7200);
    socket.envia(paqRod);


   //Aidee
    num[0] = numeroPrimo;
    num[1] = (numeroPrimo/2)+1;
    num[2] = numeroPrimo-1;
    int *resAidee; //Debe recibir O o 1
    PaqueteDatagrama paqAidee((char *)num,3 * sizeof(int),ipAidee,7200);
    socket.envia(paqAidee);


    //Primera Respuesta
    PaqueteDatagrama paqRes1(sizeof(int));
    socket.recibe(paqRes1);
    resRod = (int *)paqRes1.obtieneDatos();
    std::cout << "Respuesta Rod: " << *resRod << std::endl;
    //Segunda Respuesta
    PaqueteDatagrama paqRes2(sizeof(int));
    socket.recibe(paqRes2);
    resAidee = (int *)paqRes2.obtieneDatos();
    std::cout << "Respuesta Aidee: " << *resAidee << std::endl;



    if(resRod == 0 && resAidee == 0){
        std::cout << "No es primo " << *resAidee << std::endl;
    }
    else{
        std::cout << "Es primo " << *resAidee << std::endl;
    }

    return 0;
}
