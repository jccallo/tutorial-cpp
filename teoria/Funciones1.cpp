#include <iostream>
using namespace std;

int sumar(int x, int y); // declaracion anticipada de sumar() (usando un prototipo de funcion)
int sumar(int, int);     // otra forma de declararla pero no es recomendable
void saludar(void); // funcion sin parametros, pero no es recomendable poner void dentro

int main()
{
   // esto funciona porque declaramos sumar() anticipadamente arriba
   cout << "La suma de 7 y 12 es: " << sumar(7, 12) << "\n"; 
   return 0;
}

int sumar(int x, int y) // definimos el cuerpo de la funcion
{
   return x + y;
}
void saludar(void) // definimos el cuerpo de la funcion saludar()
{
   cout << "Hola Mundo!\n";
}