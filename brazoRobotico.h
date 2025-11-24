#include <iostream>
#define BRAZOROBOTICO_H

class BrazoRobotico{
	private:
		double x;
		double y;
		double z;
		bool sujetandoObj;
	public:
		BrazoRobotico(double x_ini, double y_ini, double z_ini);
		double getX() const;
		double getY() const;
		double getZ() const;
		bool estasujetando() const;
		void coger();
		void soltar();
		void mover(double x_dest, double y_dest, double z_dest);
};
