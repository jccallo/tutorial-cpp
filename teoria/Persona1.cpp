#include <iostream>
using namespace std;

class Persona {                
   public: // modificador de acceso
      string nombre;     
      string apellido;    
      int edad;      
};

int main() {
   
   // creamos o instanciamos un objeto
   Persona persona1;

   // inicializamos los atributos
   persona1.nombre = "Armando";
   persona1.apellido = "Morales";
   persona1.edad = 33;

   // imprimimos por consola
   cout << "Mi nombre es " << persona1.nombre << " " << persona1.apellido << endl;
   cout << "Tengo " << persona1.edad << " " << "años de edad";

   return 0;
}

