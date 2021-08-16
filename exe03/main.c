#include <stdio.h>
#include "functions.h"

int main() {

  int menor,maior,n; // declaração das variáveis
  
  scanf(" %d", &n); // definição do tamanho do vetor

  int v[n]; // declaração do vetor

  for (int i = 0; i < n; i++)
    scanf(" %d", &v[i]); // preenchimento do vetor
  
  // Inicialização das variáveis que guardaram o número maior e menor
  menor = v[0];
  maior = v[0]; 

  menor_maior(v, n, &menor, &maior); // passagem por referência dos valores

  printf("MENOR = %d\nMAIOR = %d\n", menor, maior);

  return(0);
}