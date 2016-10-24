all: clean Game

Game: GameOfLife.cpp Map.cpp
	g++ GameOfLife.cpp Map.cpp -o $@ -Wall -Wextra
	
clean:
	rm ./Game
