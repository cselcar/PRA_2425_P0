#include <iostream>
#include "brazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x_ini, double y_ini, double z_ini):
	x(x_ini), y(y_ini), z(z_ini), sujetandoObj(false){
	}
	double BrazoRobotico::getX() const{
		return x;
	}
	double BrazoRobotico::getY() const{
		return y;
	}
	double BrazoRobotico::getZ() const{
		return z;
	}
	bool BrazoRobotico::estasujetando() const{
		return sujetandoObj;
	}
	void BrazoRobotico::coger(){
		sujetandoObj= true;
	}
	void BrazoRobotico::soltar(){
		sujetandoObj=false;
	}
	void BrazoRobotico::mover(double x_dest, double y_dest, double z_dest){
		x= x_dest;
		y= y_dest;
		z= z_dest;
	}
