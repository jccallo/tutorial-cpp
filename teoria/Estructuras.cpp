#include <iostream>
using namespace std;

struct Alumno
{
   string nombre;       // sin valor de inicializacion (malo)
   int edad{};          // inicializacion por default
   double sueldo{12.5}; // inicializacion explicita

   // lo mejor es que se inicialize las variables
   // por default o explitamente en la definicion de la estructura
};

int main()
{
   // no recomendada
   Alumno alumno1;
   alumno1.nombre = "Armando";
   alumno1.edad = 33;

   cout << alumno1.nombre << "\n";
   cout << alumno1.edad << "\n";
   cout << alumno1.sueldo << "\n";

   // se llama inicializacion agregada (recomendada)
   Alumno alumno2{"Angel", 30}; // inicializamos todos en orden de aparicion
   // Alumno alumno2{"Angel"}; // se puede inicializar solo parte de las variables miembros
   // Alumno alumno2{}; // explicita > default > sin valor

   cout << alumno2.nombre << "\n";
   cout << alumno2.edad << "\n";
   cout << alumno2.sueldo << "\n";

   return 0;
}