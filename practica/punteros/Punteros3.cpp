/*
Pedir al humano la cantidad de numeros a ingresar y validar que sea mayor o igual a 1.
Pedir al humano que ingrese cada uno de los elementos.
Buscar el número más pequeño y mostrarlo.
*/
#include <iostream>

int main()
{
   int cantidadElementos;

   regresa:
   std::cout << "Cuanto elementos quieres (mayor a 0):";
   std::cin >> cantidadElementos;
   if (cantidadElementos < 1)
   {
      std::cout << "Solo mayor a 1, el numero " << cantidadElementos << " es menor\n";
      goto regresa;
   }

   int numeros[cantidadElementos], *dir_numeros, menor = 999999;

   for (int i = 0; i < cantidadElementos; i++)
   {
      std::cout << "Numero " << i + 1 << ":";
      std::cin >> numeros[i];
   }

   dir_numeros = numeros;

   for (int i = 0; i < cantidadElementos; i++)
   {
      if (*dir_numeros < menor)
      {
         menor = *dir_numeros;
      }
      dir_numeros++;
   }

   std::cout << "El numero menor: " << menor << "\n";

   return 0;
}