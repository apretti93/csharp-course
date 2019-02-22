#include <stdio.h>

int main(void) {
  int cod1,num1;
  int cod2,num2;
  double valor1,valor2,total1,total2,resultado;
  
  scanf ("%d %d %lf", &cod1, &num1, &valor1);
  scanf ("%d %d %lf", &cod2, &num2, &valor2);

  total1 = num1*valor1;
  total2 = num2*valor2;
  resultado=total1+total2;
  printf ("VALOR A PAGAR: R$ %0.2lf", resultado);

  return 0;
}
