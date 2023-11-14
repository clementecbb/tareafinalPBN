EXE = main
COMP = g++
FLAGS = -Wall

main: main.o Personaje.o Medico.o Ingeniero.o
	$(COMP) -o main main.o Personaje.o Medico.o Ingeniero.o

main.o: main.cpp
	$(COMP) -c main.cpp

Personaje.o: Personaje.cpp Personaje.h
	$(COMP) -c Personaje.cpp

Medico.o: Medico.cpp Medico.h
	$(COMP) -c Medico.cpp

Ingeniero.o: Ingeniero.cpp Ingeniero.h
	$(COMP) -c Ingeniero.cpp

clean:
	rm -rf *.o main

run: scr $(EXE)
	./$(EXE)
	
all: scr clean $(EXE)

scr:
	clear
