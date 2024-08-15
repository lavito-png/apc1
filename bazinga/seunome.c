#include <stdio.h>

int main() {
  char nome[100];

  printf("Qual é o seu nome? ");
  scanf("%s", nome);

  printf("Seu nome é %s\n", nome);

  return 0;
}