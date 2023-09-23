all: practica0main

BrazoRobotico.o: practica0.cpp practica0.h
	g++ -c practica0.cpp

main.o: practica0main.cpp practica0.h
	g++ -c practica0main.cpp

main: main.o BrazoRobotico.o
	g++ -o practica0main main.o BrazoRobotico.o

clean: 
	rm -f*.o practica0main

test: all
	./practica0main
