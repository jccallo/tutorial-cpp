#include <iostream>
using namespace std;

int sumar(int x = 0, int y = 0) // parametros por default
{
   return x + y;
}
void intercambiarValor(int &x, int &y) // pasar por referencia
{
   int z = x;
   x = y;
   y = z;
}

int main()
{
   // esto funciona porque declaramos sumar() anticipadamente arriba
   cout << "La suma sin pasar argumentos: " << sumar() << "\n";
   cout << "La suma de 7 y 12 es: " << sumar(7, 12) << "\n\n";

   int numero1 = 10;
   int numero2 = 20;

   cout << "Antes de intercambiar: " << "numero1 = " << &numero1 << ", numero2 = " << numero2 << "\n";
   intercambiarValor(numero1, numero2);
   cout << "Despues de intercambiar: " << "numero1 = " << numero1 << ", numero2 = " << numero2 << "\n";

   return 0;
}
