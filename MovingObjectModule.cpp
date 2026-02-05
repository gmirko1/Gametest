//MovingObjectModule
// Draws the object on the screen. It can also move the object

#include "MovingObjectModule.h"
#include "DisplayModule.h"  

void DrawObject(GameObject obj) {
    tft.fillRect(obj.x, obj.y, obj.width, obj.height, obj.color);
}

void MoveObject(GameObject* obj, int dx, int dy) {
    tft.fillRect(obj->x, obj->y, obj->width, obj->height, BLACK);
    obj->x += dx;
    obj->y += dy;
    DrawObject(*obj);
}
