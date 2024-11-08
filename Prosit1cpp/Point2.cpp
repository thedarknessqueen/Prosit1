#include "Point2.h"
#include "Vector2.h"
#include "Segment2.h"

Point2 :: Point2() {//je sais pas ce que ca fait mais ca marche
  this->x =oa;
  ob = r.y;  
}
Point2 :: add() {
    Point2 result;
    
    result.x = p->x + r->x;
    result.y = p->y + r->y;
    
    return result;
}
int Point2 ::getX(int x) {
    return p->x;
}
int Point2 ::getY(int y) {
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
