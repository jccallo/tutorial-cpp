#include <iostream>
#include <string>
using namespace std;

int main() {
   // cin considera un espacio (espacio en blanco, tabuladores, etc.) como un carácter de terminación, 
   // lo que significa que solo puede mostrar una sola palabra.

   // podemos usar la funcion getline() para pasar un string con un espacio
   // no mesclar cin con getline()
   string nombres, apellidos;

   cout << "Escribe tu nombre completo: ";
   getline (cin, nombres);

   cout << "Escribe tus apellidos: ";
   getline (cin, apellidos); 

   cout << "Tu nombre completo es: " << nombres; 
   cout << "Tus apellidos son: " << apellidos;


}