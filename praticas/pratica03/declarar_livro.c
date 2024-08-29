#include <stdio.h>

// ISBN: 000000000000;
// Paginas: 000;
// Preco: 0000.00;
// Publicado: 0000;

// printf("ISBN: 000000000000\n");
// printf("Paginas: 000\n");
// printf("Preco: 0000.00\n");
// printf("Publicado: 0000\n");


int main() {
  
  long ISBN = 182504573019 ;
  printf("ISBN : %li\n", ISBN);

  short int Paginas = 635 ;
  printf("Num.Paginas : %i\n", Paginas);

  float preco = 69.50 ;
  printf("Preco : %.2f\n", preco);

  short int publicado = 1969 ;
  printf("Publicado : %i\n", publicado); 
  return 0;
}
