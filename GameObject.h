//GameObject
//Defines Game Object, that can move  (Later it can be defined if its a player, enemy or something else)

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <stdint.h>

struct GameObject {
  int x;
  int y;
  int width;
  int height;
  uint16_t color; 
  int type;       
};

#endif
