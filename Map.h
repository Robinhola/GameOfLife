#ifndef MAP_H
#define MAP_H

#include <iostream>

#define LENGHT 80  // 150
#define HEIGHT 39  // 45
#define PURITY 3

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
