
#include <stdio.h>
#include <math.h>
#include "functions.h"

void tabela_verdade_recursivo(char num_bin[],int pos,int bit){
    if (pos == bit){
        num_bin[pos] = '\0';
        printf("%s\n", num_bin);
    }
    else{
        if(pos < bit){
            num_bin[pos] = '0';
            tabela_verdade_recursivo(num_bin, pos + 1, bit);
        }
        if(pos < bit){
            num_bin[pos] = '1';
            tabela_verdade_recursivo(num_bin, pos + 1, bit);
        }
    }
}

void tabela_verdade(int d){
    char num_bin[d];
    tabela_verdade_recursivo(num_bin, 0, d);
}
