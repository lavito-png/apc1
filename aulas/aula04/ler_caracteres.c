#include<stdio.h>

int main(){
  // char tecla ='\0';                                   //caractere nulo

  // printf("DIGITE UMA TECLA: \n");
  // int deu_certo = scanf("%c", &tecla);
  // getchar();                                         //limpa o buffer do teclado
  // printf("A TECLA DIGITADA EH:%c\n", tecla);

  // printf("DIGITE UMA TECLA: \n");
  // int deu_certo1 = scanf("%c", &tecla);  
  // getchar();
  // printf("A TECLA DIGITADA EH:%c\n", tecla);

  char nome[35];
  printf("DIGITE SEU NOME: ");
  int deu_certo = scanf("%[^\n]s", nome);
  printf("Ola %s\n", nome);
  
  return 0;
}