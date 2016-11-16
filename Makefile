Game: GameOfLife.cpp Map.cpp
	g++ GameOfLife.cpp Map.cpp -o $@ -Wall -Wextra

all: clean Game run
	
clean:
	rm ./Game

run:
	./Game