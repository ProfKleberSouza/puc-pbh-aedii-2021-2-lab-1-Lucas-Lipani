#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main() {

  bool sinal;
  char texto[1000];
  
  gets(texto);  // ENTRADA DE DADOS

  sinal = is_palindromo(texto);

  if (sinal == 1)
  printf("SIM\n");
  else
  printf("NÃO\n");// SAIDA - IMPRIMINDO O RESULTADO

  return(0);
}