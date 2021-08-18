#include <stdbool.h>
#include <string.h>
#include "functions.h"

bool is_palindromo(char texto[]){

    int n = strlen(texto), l = 0;
        if (n == 1)
            return true;

    char texto_invertido [n];

    for (int i = 0, j = n -1 ; j >= 0; i++, j--){
        texto_invertido [j] = texto[i];
    }

    texto_invertido[n] = '\0';

    if ( strcmp(texto,texto_invertido) == 0 )
        return true;
    else
        return false;
}
