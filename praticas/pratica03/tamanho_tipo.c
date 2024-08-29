#include <stdio.h>
int main(){
  printf("O tipo 'int' ocupa %lu byte(s) na memoria.\n", sizeof(int));
  printf("O tipo 'duble' ocupa %lu byte(s) na memoria.\n", sizeof(double));
  printf("O tipo 'float' ocupa %lu bayt(s) na memoria.\n", sizeof(float));
  printf("O tipo 'void'ocupa %lu byte(s) na memoria.\n", sizeof(void));
  
  return 0;
}