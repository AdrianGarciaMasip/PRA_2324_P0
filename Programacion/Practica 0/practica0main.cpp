#include <iostream>
#include "practica0.h"

using namespace std;

int main(){
	BrazoRobotico Br(0.0, 0.0, 0.0, false);
	Br.coger();
	Br.mover(15.5, 20.43, 17.22);
	
	return 0;

}
