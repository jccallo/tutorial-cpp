#include <iostream>
using namespace std;

class Persona {                
   public: // atributos publicos
      string nombre;     
      string apellido;    
      int edad; 
      
      Persona() { // constructor publico sin parametros
         nombre = "";     
         apellido = "";    
         edad = 0; 
      }
      Persona(string nombre, string apellido, int edad) { // constructor publico con parametros
         this->nombre = nombre;     
         this->apellido = apellido;    
         this->edad = edad;
      } 

   public: // metodos publicos
      void mostrarInformacion() {
         cout << "Mi nombre es " << nombre << " " << apellido << endl;
         cout << "Tengo " << edad << " " << "años de edad" << "\n";
      }
};

int main() {
   
   Persona persona1("Armando", "Morales", 33); // unsamos constructor con parametros
   Persona persona2; // usamos constructor sin parametros

   // llamamos a los metodos de la clase Persona
   persona1.mostrarInformacion();
   persona2.mostrarInformacion();

   return 0;
}

