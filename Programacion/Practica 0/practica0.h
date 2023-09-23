#include <iostream>

using namespace std;

class BrazoRobotico{
	private:
		double xx, yy, zz;
		bool sujetando;
	public:
		BrazoRobotico(double xx, double yy, double zz, bool sujetando);
		void coger();
		void soltar();
		double consultx();
		double consulty();
		double consultz();
		bool consultsujetando();
		void mover(double x, double y, double z);

};
