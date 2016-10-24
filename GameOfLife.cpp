#include "GameOfLife.h"

using namespace std;

int main() {
  static bool WORLD[HEIGHT][LENGHT];
  static int VOISINS[HEIGHT][LENGHT];
  Map map = Map::Map((bool*)WORLD, (int*)VOISINS);
  while (true) {
    usleep(REFRESH);
    map.update();
    map.display();
  }
}
