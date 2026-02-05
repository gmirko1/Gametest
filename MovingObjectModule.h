//MovingObjectModule
//Used drawing Game Objects (from GameObject.cpp) and moving them

#ifndef MOVING_OBJECT_MODULE_H
#define MOVING_OBJECT_MODULE_H

#include <stdint.h>
#include "GameObject.h"

// Object Types
#define OBJECT_PLAYER 0
#define OBJECT_ENEMY  1

void DrawObject(GameObject obj);
void MoveObject(GameObject* obj, int dx, int dy);

#endif
