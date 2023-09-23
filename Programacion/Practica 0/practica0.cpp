#include <iostream>
#include "practica0.h"

using namespace std;

//Constructor
BrazoRobotico::BrazoRobotico(double xx, double yy, double zz){
	x = xx;
	y = yy;
	z = zz;
	sujetando = false;
}

void BrazoRobotico::coger(){
	sujetando = true;
}

void BrazoRobotico::soltar(){
	sujetando = false;
}

void BrazoRobotico::mover(double xx, double yy, double zz){
	x = xx;
	y = yy;
	z = zz;
}

double BrazoRobotico::consultx(){
	return x;
}

double BrazoRobotico::consulty(){
	return y;
}

double BrazoRobotico::consultz(){
	return z;
}

bool BrazoRobotico::consultsujetando(){
	return sujetando;
}

