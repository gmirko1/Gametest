//CollisionModule
//Used for detecting collisions (with other objects, a point or an area)

#include "CollisionModule.h"

// Object vs Object
bool CheckCollision(GameObject a, GameObject b) {
  return (a.x < b.x + b.width &&
          a.x + a.width > b.x &&
          a.y < b.y + b.height &&
          a.y + a.height > b.y);
}

// Object vs Point
bool CheckCollision(GameObject a, int pointX, int pointY) {
  return (pointX >= a.x &&
          pointX <= a.x + a.width &&
          pointY >= a.y &&
          pointY <= a.y + a.height);
}

// Point vs Area
bool CheckCollision(int areaX, int areaY, int areaWidth, int areaHeight, int pointX, int pointY) {
  return (pointX >= areaX &&
          pointX <= areaX + areaWidth &&
          pointY >= areaY &&
          pointY <= areaY + areaHeight);
}
