/*
Declarar un arreglo de números e inicializar,
recorrer ell arreglo y mostralo por pantalla
*/
#include <iostream>

int main()
{
   int numeros[] = {1, 2, 3, 4, 5}, *dir_numeros;

   dir_numeros = numeros;

   for (int i = 0; i < 5; i++)
   {
      std::cout << "El numero: " << numeros[i] << " esta en la direccion de memoria: " << dir_numeros++ << "\n";
   }
   return 0;
}