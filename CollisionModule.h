//CollisionModule
//Module for checking if two objects collided

#ifndef COLLISION_MODULE_H
#define COLLISION_MODULE_H

#include "GameObject.h"

// Object vs Object
bool CheckCollision(GameObject a, GameObject b);

// Object vs Point
bool CheckCollision(GameObject a, int pointX, int pointY);

// Point vs Area 
bool CheckCollision(int areaX, int areaY, int areaWidth, int areaHeight, int pointX, int pointY);

#endif
