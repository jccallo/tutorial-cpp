#include <iostream>	// importamos la libreria
using namespace std; // usamos un namespace

int main()
{
	/*
		Las variables son contenedores para almacenar valores de datos. 
		int - almacena enteros (números enteros), sin decimales, como 123 o -123
		doble - almacena números de punto flotante, con decimales, como 19,99 o -19,99
		char - almacena caracteres individuales, como 'a' o 'B'. Los valores de char están entre comillas simples
		string - almacena texto, como "Hello World". Los valores de cadena están entre comillas dobles
		bool - almacena valores con dos estados: verdadero o falso
	*/
	int entero = 5; 			// Entero (número entero sin decimales)

	float puntoFlotando = 5.22; // Número de punto flotante con 7 digitos decimales
	double decimal = 5.99; 	// Número de punto flotante con 15 digitos decimales
	double potencia10 = 35e3; 	// "e" o "E" para hacer potencias de 10

	char caracter = 'D'; 	// caracter
	char aMayuscula = 65;            // podemos usar valores ASCII para mostrar ciertos caracteres
	string texto = "Hola"; 	// Cadena de texto
	bool esVerdad = false; 	// Booleano (true o false), cuando se imprime sale 1 para true y 0 para false 

	cout << entero << " " << puntoFlotando << " " << decimal << " " << potencia10 << " " << caracter << " " << aMayuscula << " " << texto << " " << esVerdad;

	return 0; // retornamos el valor de cero
}