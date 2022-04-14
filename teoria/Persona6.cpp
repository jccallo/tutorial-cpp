#include <iostream>
using namespace std;

class Persona {                
   public: // atributos publicos
      string nombre = "";      
      string apellido = "";       
      int edad = 0; 
      double sueldo = 0.0; 

      Persona() { // constructor sin parametros
      }
      Persona(string nombre, string apellido, int edad) { // constructor con parametros
         this->nombre = nombre;     
         this->apellido = apellido;    
         this->edad = edad;
      } 
      Persona(string nombre, string apellido, double sueldo) { // otro constructor con parametros
         this->nombre = nombre;     
         this->apellido = apellido;   
         this->sueldo = sueldo;
      }

   public: // metodos publicos
      void mostrarInformacion() {
         cout << "Mi nombre es " << nombre << " " << apellido << endl;
         cout << "Tengo " << edad << " años de edad" << "\n";
         cout << "Mi sueldo es " << sueldo << " soles" << "\n\n";
      }
};

int main() {
   Persona persona1; // usamos constructor sin parametros
   Persona persona2("Armando", "Morales", 33); // unsamos constructor con parametros
   Persona persona3("Angel", "Alvarado", 33.3); // usamos otro constructor con parametros
   // llamamos a los metodos de la clase Persona
   persona1.mostrarInformacion();
   persona2.mostrarInformacion();
   persona3.mostrarInformacion();

   return 0;
}

