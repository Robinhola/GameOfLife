#include "Map.h"

using namespace std;

Map::Map(bool *MAP, int *VOISINS, int purity) : map(MAP), voisins(VOISINS) {
  cout << "creation" << endl;
  generateMap(purity);
}

bool *Map::getMap() const { return map; }

int *Map::getVoisins() const { return voisins; }

void Map::generateMap(int purity) {
  bool *map = this->getMap();
  srand(time(NULL));
  for (int i = 0; i < LENGTH * HEIGHT; i++) map[i] = rand() % purity == 0;
}

void Map::computeVoisins() {
  int *voisins = this->getVoisins();
  bool *map = this->getMap();
  for (int i = 0; i < LENGTH * HEIGHT; i++) voisins[i] = 0;
  for (int y = 0; y < HEIGHT; y++)
    for (int x = 0; x < LENGTH; x++)
      if (map[y * LENGTH + x]) this->incrementeVoisins(x, y);
}

void Map::incrementeVoisins(int x, int y) {
  int *voisins = this->getVoisins();
  {
    if (x - 1 >= 0) voisins[(y)*LENGTH + x - 1]++;
    if (x + 1 < LENGTH) voisins[(y)*LENGTH + x + 1]++;
  }
  if (y - 1 >= 0) {
    voisins[(y - 1) * LENGTH + x]++;
    if (x - 1 >= 0) voisins[(y - 1) * LENGTH + x - 1]++;
    if (x + 1 < LENGTH) voisins[(y - 1) * LENGTH + x + 1]++;
  }
  if (y + 1 < LENGTH) {
    voisins[(y + 1) * LENGTH + x]++;
    if (x - 1 >= 0) voisins[(y + 1) * LENGTH + x - 1]++;
    if (x + 1 < LENGTH) voisins[(y + 1) * LENGTH + x + 1]++;
  }
}

void Map::update() {
  this->computeVoisins();
  bool *map = this->getMap();
  int *voisins = this->getVoisins();
  for (int i = 0; i < LENGTH * HEIGHT; i++)
    map[i] = (voisins[i] == 2 && map[i]) || voisins[i] == 3;
}

void Map::display() {
  bool *map = this->getMap();
  cout << endl;
  for (int y = 0; y < HEIGHT; y++) {
    cout << endl;
    for (int x = 0; x < LENGTH; x++) {
      if (map[(y)*LENGTH + x])
        cout << ".";
      else
        cout << " ";
    }
  }
}