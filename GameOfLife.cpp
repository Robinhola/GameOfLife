#include "GameOfLife.h"

using namespace std;

int main() {
  static bool WORLD[HEIGHT][LENGTH];
  static int VOISINS[HEIGHT][LENGTH];
  Map map = Map::Map((bool*)WORLD, (int*)VOISINS);
  while (true) {
    usleep(REFRESH);
    map.update();
    map.display();
  }
}
