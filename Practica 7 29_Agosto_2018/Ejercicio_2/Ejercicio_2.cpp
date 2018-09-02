#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <string.h>

using namespace std;




int main(){


	/*string cadena("ESCOM");
	cout << cadena.at(4) << endl;*/


	char aCString[] = "hola";
	string stringVariable("hdskj");

	strcpy(aCString, stringVariable.c_str( )); 

	cout << "Esta es la variable" << stringVariable << endl ;

	return 1;
}