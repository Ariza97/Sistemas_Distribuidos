#include "SocketDatagrama.h"
#include "PaqueteDatagrama.h"

using namespace std;

int main()
{
    SocketDatagrama socket(7200);
    unsigned int *num;
    int aux = 0;
    while (1) {
        //número a evaluar(num[0]), inicion(num[1]), final(num[2])
        PaqueteDatagrama paq(sizeof(num)*3);
        socket.recibe(paq);
        num = (unsigned int *)paq.obtieneDatos();
        int res;
        //cout << num[0] <<"+" << num[1] << "=" << res << endl;
        for(int i = num[1]; i < num[2] + 1; i++){
            if(num[0] % i == 0){
                aux++;
            }
        }
        if(aux != 2){
            cout << "El numero: " << num[0] << " evaluado en el intervalo: " << num[1] << " a " << num[2] << " no es primo" << endl;
            res = 0;
        }
        else{
            cout << "El numero: " << num[0] << " evaluado en el intervalo: " << num[1] << " a " << num[2] << " es primo" << endl;
            res = 1;
        }
        PaqueteDatagrama paq1((char *) &res,sizeof(int),paq.obtieneDireccion(),paq.obtienePuerto());
        socket.envia(paq1);
    }
    return 0;
}

//1 = primo
//0 = no primo