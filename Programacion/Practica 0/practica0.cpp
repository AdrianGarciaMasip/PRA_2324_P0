#include <iostream>

using namespace std;

class BrazoRobotico{
	private:
		float x, y, z;
		bool sujetando;
	public:
		BrazoRobotico(double X, double Y, double Z, bool sujetando);
		void coger();
		void soltar();
		void mover(double, double, double);


};

//Constructor
BrazoRobotico::BrazoRobotico(int _x, int _y, int _z, bool _sujetando){
	x = _x;
	y = _y;
	z = _z;
	sujetando = _sujetando;
}

void BrazoRobotico::coger(){
	sujetando = true;
}

void BrazoRobotico::soltar(){
	sujetando = false;
}

void BrazoRobotico::mover(double xx, double yy, double zz){

}

