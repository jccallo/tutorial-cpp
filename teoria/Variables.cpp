#include <iostream>
#include <typeinfo>
using namespace std;

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

	// formas de definir e inicializar una variable
	// 1. tras operador de asignacion
	// 2. entre parentesis
	// 3. enetre llaves

	int numero(7); // inicializacion entre parentesis

	// inicializacion entre llaves
	string frase{"frase"};	 // inicializacion de lista directa
	float flotante = {33.3}; // inicializacion de lista de copia
	int cero{};					 // inicializacion de valor (a cero)

	// solo hay una forma de definir y inicializar una variable por separado
	// se usa unicamente el operador de asignacion =
	float numeroFloat;
	numeroFloat = 33.3;

	// ejemplos de tipos de variables
	int entero = 5;				 // Entero (número entero sin decimales)
	float puntoFlotando = 5.22; // Número de punto flotante con 7 digitos decimales
	double decimal = 5.99;		 // Número de punto flotante con 15 digitos decimales
	double potencia10 = 35e3;	 // "e" o "E" para hacer potencias de 10
	char caracter = 'D';			 // caracter
	char aMayuscula = 65;		 // podemos usar valores ASCII para mostrar ciertos caracteres
	string texto = "Hola";		 // Cadena de texto
	bool esVerdad = false;		 // Booleano (true o false), cuando se imprime sale 1 para true y 0 para false

	cout << entero << " " << puntoFlotando << " " << decimal << " " << potencia10 << " " << caracter << " " << aMayuscula << " " << texto << " " << esVerdad << "\n\n";

	// tamaño de objetos primitivos
	cout << "Tamano de tipo de dato en memoria" << "\n";
	cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
	cout << "char:\t\t" << sizeof(char) << " bytes\n";
	cout << "int:\t\t" << sizeof(int) << " bytes\n";
	cout << "float:\t\t" << sizeof(float) << " bytes\n";
	cout << "double:\t\t" << sizeof(double) << " bytes\n";
	cout << "string:\t\t" << sizeof(string) << " bytes\n\n";

	// obtener el tipo de dato
	cout << "tipo de dato en memoria" << "\n";
   cout << "bool:\t\t" << typeid(esVerdad).name() << endl;
   cout << "char:\t\t" << typeid(caracter).name() << endl;
   cout << "int:\t\t" << typeid(entero).name() << endl;
   cout << "float:\t\t" << typeid(puntoFlotando).name() << endl;
   cout << "double:\t\t" << typeid(decimal).name() << endl;
   cout << "string:\t\t" << typeid(texto).name() << "\n\n";

	return 0;
}