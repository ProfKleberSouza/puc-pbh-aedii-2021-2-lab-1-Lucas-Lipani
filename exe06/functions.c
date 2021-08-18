
#include "functions.h"

int potencia (int x, int n){

    int potencia = 1;

    for (int i = 0; i < n; i++)
    potencia *= x;
    
    return potencia;
}
