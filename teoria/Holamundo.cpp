#include <iostream>	// importamos la libreria para trabajar con objetos de entrada y salida "cout" y "cin"
using namespace std; // usamos un namespace, si lo omitimos tendriamos que utilizar std::cout por ejemplo

/*
	esto es un
	Comentario de
	multiples lineas
*/
// esto es un comentario de una sola linea

int main()
{
	// objeto cout para imprimir texto
	// "<<" se usa para pasar parametros, y se uniran colo lo sigte parametro que se le pase
	cout << "Hola Mundo! \n";		  // usamos el caracter \n para insertar una nueva linea, es la mas usada
	cout << "Mi nombre es" << endl; // otra forma de insertar una nueva linea con el manipulador "endl"
	cout << "Armando Morales";

	cin.get(); // detiene el flujo
	return 0;  // retornamos el valor de cero
				  // implicitamente se hace este retorno, asi que no es necesario ponerlo
}
