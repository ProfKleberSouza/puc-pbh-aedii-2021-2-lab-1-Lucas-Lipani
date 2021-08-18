#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {

  char frase[1000];
  
  gets(frase);

  numero_vogais(frase);
  
  return(0);
}