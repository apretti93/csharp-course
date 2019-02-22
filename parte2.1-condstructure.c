#include <stdio.h>

int main(void) {
  int cod,qtd;
  double price,result;
  scanf("%d %d", &cod, &qtd);
  
  if(cod==1) price=4.00;
  else if(cod==2) price=4.50;
  else if(cod==3) price=5.00;
  else if(cod==4) price=2.00;
  else if(cod==5) price=1.50;
  else printf ("Código não encontrado");
  
  result = price*qtd;

  printf("Total: R$ %.2f", result);
  return 0;
}
