#include <stdio.h>

int main(){
                              //ENTRADA
int numero;
  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &numero);

 //Processamento
 //numero = nuemro + 1;
  int incremento = numero;
  incremento++;//++incremento
  int pre_incremento = ++incremento;
  int pos_incremento = incremento++;

  int decremento = numero;
  decremento--;//--decremento
  int pre_decremento = --decremento;
  int pos_decremento = decremento--;
  //sainda
  printf("Incremento de %i eh %i\n",numero, incremento);
  printf("Pre-incremento de %i eh %i\n",numero , pre_incremento);
  printf("Pos-incremento de %i eh %i\n",numero, pos_incremento);
  printf("Decremento de %i eh %i\n",numero, decremento);
  printf("Pre-decremento de %i eh %i\n",numero , pre_decremento);
  printf("Pos-decremento de %i eh %i\n",numero, pos_decremento);
  
  return 0;
}