all: clean Game run

Game: GameOfLife.cpp Map.cpp
	g++ GameOfLife.cpp Map.cpp -o $@ -Wall -Wextra
	
clean:
	rm ./Game

run:
	./Game