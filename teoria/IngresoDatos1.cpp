#include <iostream> 
using namespace std;

int main() {
	
   //  suma de dos numero ingresados por teclado
   double numero1, numero2, resultado;

   cout << "Ingrese el primer numero: ";
   cin >> numero1;

   cout << "Ingrese el segundo numero: ";
   cin >> numero2;

   resultado = numero1 + numero2;

   cout << "La suma es " << resultado;

	return 0;
}