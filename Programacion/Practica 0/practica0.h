#include <iostream>

using namespace std;

class BrazoRobotico{
	private:
		double x, y, z;
		bool sujetando;
	public:
		BrazoRobotico();
		BrazoRobotico(double, double, double);
		void coger();
		void soltar();
		double consultx();
		double consulty();
		double consultz();
		bool consultsujetando();
		void mover(double, double, double);

};
