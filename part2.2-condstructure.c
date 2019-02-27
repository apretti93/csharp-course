#include <stdio.h>
#include <math.h>


int main(void) {
  double a,b,c,delta,raiz1,raiz2;
  scanf("%lf %lf %lf", &a, &b, &c);
  if (a==0) printf("Impossivel calcular");
  else{
    delta = ((pow(b, 2))-(4*a*c));
    delta = sqrt(delta);
    if (delta>=0){
      raiz1 = (((-b)+(delta))/(2*a));
      raiz2 = (((-b)-(delta))/(2*a));
      printf("X1 = %0.5lf\nX2 = %0.5lf\n", raiz1, raiz2);
    }
    else printf("Impossivel calcular");
  }
  
  return 0;
}
