#include <iostream>
using namespace std;

class Persona {                
   public: // atributos publicos
      string nombre;     
      string apellido;    
      int edad;  

   public: // metodos publicos
      void mostrarInformacion();             // metodo sin parametros
      void saludar(string saludo, int anio); // metodo con parametro(s)
};

// definimos el metodo mostrarInformacion
void Persona::mostrarInformacion() {
   cout << "Mi nombre es " << nombre << " " << apellido << endl;
   cout << "Tengo " << edad << " " << "años de edad" << "\n";
}

// definimos el metodo saludar
void Persona::saludar(string saludo, int anio) {
   cout << saludo << " " << anio << endl;
}

int main() {
   
   // creamos o instanciamos un objeto
   Persona persona1;

   // inicializamos los atributos
   persona1.nombre = "Armando";
   persona1.apellido = "Morales";
   persona1.edad = 33;

   // llamamos a los metodos de la clase Persona
   persona1.mostrarInformacion();
   persona1.saludar("Hola", 2022);

   return 0;
}

