#include <stdio.h>
#include "functions.h"

int main() {

  int n; // número de elementos do vetor
  
  scanf("%d ", &n);

  int v[n];  // criando o vetor de tamanho n informado pelo usuário

  for (int i = 0; i < n; i ++){
    scanf("%d ", &v[i]); // preenchimento do vetor
  }

  int menor_numero = menor(v,n); // chamada da função de selecionar o menor número do vetor

  printf("MENOR = %d\n", menor_numero); // impressão do menor número do vetor

  return(0);
}