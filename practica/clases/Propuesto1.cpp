#include <iostream>
using namespace std; 

class Caja {
   private:
      int ancho;
      int alto;
      int profundidad;

   public:
      Caja(): ancho(0), alto(0), profundidad(0) {
      }
      Caja(int ancho, int alto, int profundidad): ancho(ancho), alto(alto), profundidad(profundidad) {
      }

      int calcularVolumen() {
         return ancho * alto * profundidad;
      }
};

int main()
{
   Caja cajita1;
   Caja cajita2(3, 4, 5);

   cout << "Volumen de cajita1: " << cajita1.calcularVolumen() << endl;
   cout << "Volumen de cajita2: " << cajita2.calcularVolumen() << endl;

	return 0;
}


