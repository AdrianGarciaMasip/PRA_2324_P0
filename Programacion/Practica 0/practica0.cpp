#include <iostream>
#include "practica0.h"

using namespace std;

//Constructor
BrazoRobotico::BrazoRobotico(double xx, double yy, double zz, bool sujetando){
	this->xx = xx;
	this->yy = yy;
	this->zz = zz
	this->sujetando = sujetando;
}

void BrazoRobotico::coger(){
	sujetando = true;
}

void BrazoRobotico::soltar(){
	sujetando = false;
}

void BrazoRobotico::mover(double x, double y, double z){
	xx += x;
	yy += y;
	zz += z;
}

double BrazoRobotico::consultx(){
	return xx;
}

double BrazoRobotico::consulty(){
	return yy;
}

double BrazoRobotico::consultz(){
	return zz;
}

bool BrazoRobotico::consultsujetando(){
	return sujetando;
}

