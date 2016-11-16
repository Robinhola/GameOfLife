#ifndef MAP_H
#define MAP_H

#include <iostream>

#define LENGTH 80  
#define HEIGHT 39  	
#define PURITY 3  // on startup, an average of 1 out of 3 cells becomes alive

// VOISINS means neighbours in French

class Map {
 public:
  Map(bool *MAP, int *VOISINS, int purity = PURITY);
  void update();
  void display();
  bool *getMap() const;
  int *getVoisins() const;

 private:
  bool *map;
  int *voisins;
  void generateMap(int = PURITY);
  void computeVoisins();
  void incrementeVoisins(int x, int y);
};

#endif
