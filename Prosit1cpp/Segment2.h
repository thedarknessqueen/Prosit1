#pragma once

#include "Point2.h"
#include "Vector2.h"
#include <iostream>


float da, db;

enum IntersectionStatus {
  POINT,
  COLINEAR_INTERSECTING,
  COLINEAR_NON_INTERSECTING,
  PARALLEL_NON_INTERSECTING,
  NON_INTERSECTING
};

class Segment2 {
private:
  /*A COMPLETER*/
public:
  /*A COMPLETER*/
  
  IntersectionStatus intersect(Segment2 r, Point2 &p);
};
