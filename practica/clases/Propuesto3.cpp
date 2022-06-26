#include <iostream>
using namespace std; 

class Triangulo {
   private:
      int lado1;
      int lado2;
      int lado3;

   public:
      Triangulo(): lado1(0), lado2(0), lado3(0) {
      }
      
      void inicializar() {
         cout << "Ingrese el lado1: ";
         cin >> lado1;

         cout << "Ingrese el lado2: ";
         cin >> lado2;
         
         cout << "Ingrese el lado3: ";
         cin >> lado3;
      }
      void ladoMayor() {
         cout << endl;
         if (lado1 > lado2 && lado1 > lado3) {
            cout << "Lado mayor: " << lado1 << endl;
         } else if (lado2 > lado1 && lado2 > lado3) {
            cout << "Lado mayor: " << lado2 << endl;
         } else {
            cout << "Lado mayor: " << lado3 << endl;
         }
      }
      void esEquilatero() {
         if (lado1 == lado2 && lado1 == lado3) {
            cout << "El triangulo es equilatero" << endl;
         } else {
            cout << "El triangulo no es equilatero" << endl;
         }
      }
};

int main()
{
   Triangulo triangulo1;
   triangulo1.inicializar();
   triangulo1.ladoMayor();
   triangulo1.esEquilatero();

	return 0;
}


