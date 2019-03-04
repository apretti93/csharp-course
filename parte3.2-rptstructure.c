#include <stdio.h>

int main(void) {
  int N, i, inAux=0,outAux=0;
  scanf("%d", &N);
  while(N--){
    scanf("%d", &i);
    if (i>=10 && i<=20) inAux++;
    else outAux++;
  }
  printf("%d in\n%d out\n", inAux,outAux);
  return 0;
}
