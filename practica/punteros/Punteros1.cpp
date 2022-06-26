#include <iostream>
using namespace std;

int main()
{
   int numero, *dir_numero;

   std::cout << "Humano ingresa un numero: ";
   std::cin >> numero;
   dir_numero = &numero;

   if (*dir_numero % 2 == 0)
   {
      std::cout << "El numero " << *dir_numero << " es PAR\n";
   }
   else
   {
      std::cout << "El numero " << *dir_numero << " es IMPAR.\n";
   }

   std::cout << "Esta es la direccion de memoria " << dir_numero << "\n";
}