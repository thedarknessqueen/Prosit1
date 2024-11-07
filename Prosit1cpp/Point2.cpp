#include "Point2.h"

void Point2 :: Point2() {
  oa = this->getOrigin();
  ob = r.getOrigin();  
}
Point2 :: Point2_add() {
    Point2 result;
    
    result.x = p->x + r->x;
    result.y = p->y + r->y;
    
    return result;
}
float Point2 :: Point2_getX() {
    return p->x;
}
float Point2 :: Point2_getY() {
    return p->y;
}
/*void Point2 :: Point2_init(Point2 *p) {
    p->x = 0;
    p->y = 0;
}

void Point2 :: Point2_init_with_xy(Point2 *p, float x, float y) {
    p->x = x;
    p->y = y;
}
*/
/*
float Point2 :: Point2_getX(int) {
    return p;
}
float Point2 :: Point2_getY(int) {
    return p;
}
*/

/*
void Point2 :: Point2_setX(Point2 *p, float x) {
    p->x = x;
}

void Point2 :: Point2_setY(Point2 *p, float y) {
    p->y = y;
}

void Point2 :: Point2_print(const Point2 *p) {
    printf("{%f, %f}\n", p->x, p->y);
}
*/

/*Vector2 :: Point2_sub(Point2 *r, const Point2 *p) {
    Vector2 result;
    
    result.x = r->x - p->x;
    result.y = r->y - p->y;
    
    return result;
}*/
