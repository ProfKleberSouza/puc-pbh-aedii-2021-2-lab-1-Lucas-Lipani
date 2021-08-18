#include <stdio.h>
#include "functions.h"

int main() {

  int a, b, madc;
  
  scanf("%d %d", &a, &b);  // ENTRADA DE DADOS

  madc = mdc(a, b);  // PROCESSAMENTO - EXECUTANDO A FUNCAO

  printf("MDC = %d\n", madc);  // SAIDA - IMPRIMINDO O RESULTADO

  return(0);
}