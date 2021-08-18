#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {

  char texto[1000];

  gets(texto);

  inverte(texto);

  return(0);
}