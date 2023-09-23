#include <iostream>
#include <practica0.h>

using namespace std;

int main(){
	BrazoRobotico Br = BrazoRobotico(15.5, 20.43, 17.4);

	Br.sujetando();
	Br.coger();
	cout << Br.consultx() << endl;
	cout << Br.consulty() << endl;
	cout << Br.consultz() << endl;
	cout << "0 abierto, 1 cerrado: " consultsujetando() << endl;

	
	return 0;

}
