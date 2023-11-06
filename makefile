main: main.o Personaje.o Medico.o Ingeniero.o
	g++ -o main main.o Personaje.o Medico.o Ingeniero.o

main.o: main.cpp
	g++ -c main.cpp

Personaje.o: Personaje.cpp Personaje.h
	g++ -c Personaje.cpp

Medico.o: Medico.cpp Medico.h
	g++ -c Medico.cpp

Ingeniero.o: Ingeniero.cpp Ingeniero.h
	g++ -c Ingeniero.cpp

clean:
	rm -rf *.o main
