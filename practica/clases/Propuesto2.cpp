#include <iostream>
using namespace std; 

class Persona {
   private:
      string nombre;
      int edad;

   public:
      Persona(): nombre(""), edad(0) {
      }
      
      void inicializar() {
         cout << "Ingrese el nombre: ";
         cin >> nombre;

         cout << "Ingrese la edad: ";
         cin >> edad;
      }
      void imprimirDatos() {
         cout << endl;
         cout << "Nombre: " << nombre << endl;
         cout << "Edad: " << edad << endl;
      }
      void esMayorEdad() {
         if (edad >= 18) {
            cout << "Es mayor de edad" << endl;
         } else {
            cout << "No es mayor de edad" << endl;
         }
      }
};

int main()
{
   Persona persona1;
   persona1.inicializar();
   persona1.imprimirDatos();
   persona1.esMayorEdad();

	return 0;
}


