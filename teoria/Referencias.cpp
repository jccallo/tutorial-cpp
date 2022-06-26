#include <iostream>
using namespace std;

int main()
{
	string nombre = "Armando"; // defino e inicializo
	string &name = nombre;		// agrego prefijo & para que guarde una referencia a la variable nombre

	cout << nombre << "\n";	 // imprime el valor de la variable nombre
	cout << &nombre << "\n"; // imprime la direcion de memoria de la variable nombre
	cout << name << "\n";	 // imprime el valor de la variable a la que hace referencia
	cout << &name << "\n";	 // imprime el valor de la variable a la que hace referencia

	return 0;
}