# GameOfLife

## Introduction

  The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician 
  John Horton Conway in 1970.

  The "game" is a zero-player game, meaning that its evolution is determined by its initial state, requiring 
  no further input. One interacts with the Game of Life by creating an initial configuration and observing 
  how it evolves.

## How to play

  In order to build, write in terminal:
  
    make
    
  To play, write:
  
    make run
    
  To clean:
  
    make clean
    
  To clean, build and run:
  
    make all
  
## Rules

  The universe of the Game of Life is an infinite two-dimensional orthogonal grid of square cells, each of 
  which is in one of two possible states, alive or dead, or "populated" or "unpopulated" (the difference may 
  seem minor, except when viewing it as an early model of human/urban behavior simulation or how one views a
  blank space on a grid). Every cell interacts with its eight neighbours, which are the cells that are horizontally,
  vertically, or diagonally adjacent. At each step in time, the following transitions occur:

    Any live cell with fewer than two live neighbours dies, as if caused by under-population.
    Any live cell with two or three live neighbours lives on to the next generation.
    Any live cell with more than three live neighbours dies, as if by over-population.
    Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.

  The initial pattern constitutes the seed of the system. The first generation is created by applying the above rules 
  simultaneously to every cell in the seed—births and deaths occur simultaneously, and the discrete moment at which this 
  happens is sometimes called a tick (in other words, each generation is a pure function of the preceding one). The rules 
  continue to be applied repeatedly to create further generations.
