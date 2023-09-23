#include <iostream>
#include "practica0.h"

using namespace std;

int main(){
	BrazoRobotico Br(0.0, 0.0, 0.0, false);
	Br.mover(12.23, 32.14, 20.02);
	Br.coger();
	
	return 0;

}
