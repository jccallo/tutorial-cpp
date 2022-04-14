#include <iostream>
using namespace std;

class Persona {                
   protected: // atributos protegidos
      string nombre = "";      
      string apellido = "";

   public: // constructores publicos
      Persona(string nombre, string apellido) { // constructor con parametros
         this->nombre = nombre;     
         this->apellido = apellido;   
      }

   public: // metodos publicos
      void mostrarInformacion() {
         cout << "Mi nombre es " << nombre << " " << apellido << "\n\n";
      }
};

class Empleado: public Persona {   
   public:
      int edad = 0;
      Empleado(string nombre, string apellido, int edad): Persona(nombre, apellido), edad(edad) {
      }
      void mostrarInformacion() {
         cout << "Hola soy " << nombre << " " << apellido << endl;
         cout << "Tengo " << edad << " años de edad" << "\n";
      }
};

int main() {
   Persona persona1("Armando", "Morales"); // unsamos constructor con parametros
   persona1.mostrarInformacion(); // llamamos al metodo de la clase Persona

   Empleado empleado1("Angel", "Alvares", 33);
   empleado1.mostrarInformacion();

   return 0;
}

