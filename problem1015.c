#include <stdio.h>
#include <math.h>
int main() {
  double x1, x2, y1, y2, distance;

  scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
  distance = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 1 / 2.0);

  printf("%0.4f\n", distance);

  return 0;
}
