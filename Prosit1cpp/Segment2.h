#include <cassert>
#include <iostream>
#include <math.h>

#include "Segment2.h"
#include "Point2.h"
#include "Vector2.h"

void test() {
  Point2 o1(1, 1), o2(4, 5), o3(2, 2), o4(3, 2), o10(0,0);
  Vector2 d1(3, 4), d2(3, 4), d3(1, 2), d4(1, 2);
  Segment2 s1(o1, d1), s2(o2, d2), s3(o3, d3), s4(o4, d4);
  IntersectionStatus status;

  status = s1.intersect(s2, o10);
  int testa = o10.getX();
  int testb = o10.getY();
  assert((status == COLINEAR_INTERSECTING && testa == 4 && testb == 5) &&
         "s1 and s2 should be intersecting at (4, 5)");
  status = s1.intersect(s3, o10);
  assert((status == POINT && testa == 2.5 && testb == 3) &&
         "s1 and s3 should be intersecting at (2.5, 3)");
  status = s1.intersect(s4, o10);
  assert((status == NON_INTERSECTING) && "s1 and s4 should not be intersecting and aren't parallel, nor collinear.");
  status = s3.intersect(s4, o10);
  assert((status == PARALLEL_NON_INTERSECTING) && "s1 and s4 should not be intersecting and are parallel.");

  std::cout << "Test completed successfully !" << std::endl;
}

int main() {
  test();

  return EXIT_SUCCESS;
}
