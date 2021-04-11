output: main.o Game.o
	g++ main.o Game.o -o output

main.o: main.cpp
	g++ -c main.cpp

Game.o: Game.cpp GameClass.h
	g++ -c Game.cpp

clean:
	rm *.o output
