#include <iostream>
#include "brazoRobotico.h"
using namespace std;

int main(){
	BrazoRobotico brazo(0, 0, 0);	
	cout << "Posición inicial: " << brazo.getX() << "," << brazo.getY() << "," << brazo.getZ() << "\n";

	brazo.mover(3.4, 2.7, 7.0);
	cout << "Nueva posición: " << brazo.getX() << "," << brazo.getY() << "," << brazo.getZ() << "\n";

	brazo.coger();
	cout << "Está sujetando un objeto?" << (brazo.estasujetando() ?  "Sí" : "No") << endl;

return 0;	
}
