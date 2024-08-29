#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("O tipo 'char' aceita valores entre %i e %i .\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo 'int' aceita valores entre %i e %i .\n", INT_MIN, INT_MAX);
  printf("O tipó 'double' aceita valores entre %E e %E .\n", DBL_MIN, DBL_MAX);
  return 0;
}
