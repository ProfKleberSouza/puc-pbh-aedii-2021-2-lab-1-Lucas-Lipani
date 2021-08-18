#include <stdio.h>
#include "functions.h"

int main() {

  int a, b, p;
  
  scanf("%d %d", &a, &b);  // ENTRADA DE DADOS
  
  p = potencia(a, b);  // PROCESSAMENTO - EXECUTANDO A FUNCAO

  printf("%d\n", p);

  return(0);
}