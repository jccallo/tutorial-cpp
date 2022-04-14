#include <iostream>
using namespace std;

class Persona {                
   public: // atributos publicos
      string nombre;     
      string apellido;    
      int edad;  

   public: // metodos publicos
      void mostrarInformacion() {
         cout << "Mi nombre es " << nombre << " " << apellido << endl;
         cout << "Tengo " << edad << " " << "años de edad";
      }    
};

int main() {
   
   // creamos o instanciamos un objeto
   Persona persona1;

   // inicializamos los atributos
   persona1.nombre = "Armando";
   persona1.apellido = "Morales";
   persona1.edad = 33;

   // imprimimos por consola
   persona1.mostrarInformacion();

   return 0;
}

