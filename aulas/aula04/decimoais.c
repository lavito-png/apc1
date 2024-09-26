#include <stdio.h>

int main(){
  float nota=0.0f;
  printf("DIGITE UMA NOTA DE 0 A 10\n");
  
  int deu_certo = scanf("%f",&nota);
  // printf("A NOTA DIGITADA FOI %f\n", nota);
  printf("VOCE DEIGITOU : %.1f\n", nota);

  double pi = 0.0;
  printf("ENTRE COM O VALOR DE PI\n");
  deu_certo = scanf("%lf", &pi);

  printf("VOCE DIGITOU:%.10f\n", pi);

  return 0;
}