#include <iostream>
using namespace std;

class Persona {                
   private: // atributos privados
      string nombre = "";      
      string apellido = "";       
      int edad = 0;

   public: // constructores publicos
      Persona(string nombre, string apellido, int edad) { // constructor con parametros
         this->nombre = nombre;     
         this->apellido = apellido;    
         this->edad = edad;
      } 

   public: // metodos publicos
      void mostrarInformacion() {
         cout << "Mi nombre es " << nombre << " " << apellido << endl;
         cout << "Tengo " << edad << " años de edad" << "\n\n";
      }
      string getNombre() { // Getter
         return nombre;
      }
      void setNombre(string nombre) { // Setter
         this->nombre = nombre;
      }
};

int main() {
   Persona persona1("Armando", "Morales", 33); // unsamos constructor con parametros

   // llamamos a los metodos de la clase Persona
   persona1.mostrarInformacion();

   // cout << persona1.nombre; // arroja error ya que es privado
   cout << persona1.getNombre() << endl; // metodo para acceder al atributo privado nombre
   persona1.setNombre("Angel");
   cout << persona1.getNombre() << endl; // metodo para acceder al atributo privado nombre

   return 0;
}

