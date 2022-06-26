#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
   string nombre = "Armando";

   // 3 formas de declarar variables punteros
   // * se usa para declarar variables punteros
   // * es el operador de desreferencia
   string* ptrNombre = &nombre; // recomendada
   // string *ptrNombre = &nombre; 
   // string * ptrNombre = &nombre;

   cout << nombre << "\n";     // valor nombre
   cout << &nombre << "\n";    // direccion de memoria de nombre
   cout << *ptrNombre << "\n"; // valor que guarda en la direccion de memoria
   cout << ptrNombre << "\n";  // misma direccion de memoria de nombre

   *ptrNombre = "Angel";
   cout << *ptrNombre << "\n"; // valor que guarda en la direccion de memoria
   cout << ptrNombre << "\n"; // valor que guarda en la direccion de memoria
   
   // tamano de un puntero
   bool n = true;
   bool* logico = &n; 

   // vemos que todos los punteros ocupan el mismo espacio
   cout << sizeof(ptrNombre) << endl;
   cout << sizeof(logico) << endl;

   // todos los punteros anteriores se guardadn en la memoria stack
   // si queremos guardar un dato en la memoria heap tenemos que reservar un espacio de una manera
   bool* ptrBool = new bool;
   char* ptrChar = new char;
   int* ptrEntero = new int;
   float* ptrFloat = new float;
   double* ptrDouble = new double(32.29); // definicion en una sola linea
   string* ptrString = new string("Hola Mundo"); // definicion en una sola linea

   *ptrBool = true;
   *ptrChar = 'L';
   *ptrEntero = 55;
   *ptrFloat = 32.9;

   cout << *ptrBool << endl;
   cout << *ptrChar << endl;
   cout << *ptrEntero << endl;
   cout << *ptrFloat << endl;
   cout << *ptrDouble << endl;
   cout << *ptrString << endl;

   // borrar espacio reservado por el puntero en la memopria heap
   int* z = new int(5);
   delete z; // borra el espacio ocupado en la memoria heap (probar mas porque da errores)

   // puntero que no apunta a nada
   int* nulo = nullptr; // no se encuentra un uso para cosas simples

   return 0;
}