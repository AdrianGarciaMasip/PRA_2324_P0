#include <iostream>

using namespace std;

//Constructor
BrazoRobotico::BrazoRobotico(int _x, int _y, int _z){
	x = _x;
	y = _y;
	z = _z;
	sujetando = false;
}

void BrazoRobotico::coger(){
	sujetando = true;
}

void BrazoRobotico::soltar(){
	sujetando = false;
}

void BrazoRobotico::mover(double _x, double _y, double _z){
	x = _x;
	y = _y;
	z = _z;
}

double BrazoMecanico::consultx(){
	return x;
}

double BrazoMecanico::consulty(){
	return y;
}

double BrazoMecanico::consultz(){
	return z;
}

bool BrazoMecanico::consultsujetando(){
	return sujetando;
}

