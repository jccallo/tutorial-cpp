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
         cout << "Tengo " << edad << " " << "años de edad" << "\n";
      }
      void saludar(string saludo, int anio) { // metodo con parametro(s)
         cout << saludo << " " << anio << endl;
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
   persona1.saludar("Hola", 2022);

   return 0;
}

