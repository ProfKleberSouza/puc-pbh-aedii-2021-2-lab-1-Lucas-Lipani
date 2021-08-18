#include <stdio.h>
#include <string.h>
#include "functions.h"

void inverte(char texto[]){

    int n = strlen(texto);

    char texto_invertido [n];

    for (int i = 0, j = n - 1; j >= 0; i++, j--){
        texto_invertido [j] = texto[i];
    }
    texto_invertido[n] = '\0';
    
    printf("%s\n", texto_invertido);
}
