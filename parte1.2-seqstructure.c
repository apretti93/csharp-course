#include <stdio.h>
//#include <math.h>

int main(void) {
  double ratio,area;
  double M_PI=3.14159;

  scanf ("%lf", &ratio);
  ratio *= ratio;
  area= M_PI*ratio;

  printf ("%0.4lf", area);

  return 0;
}
