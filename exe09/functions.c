#include <stdio.h>
#include "functions.h"

void placar_possiveis_recursivo(char placar[], int pos, int m, int n){
    if (m == 0 && n == 0){
        placar[pos] = '\0';
        printf("%s\n", placar);
    }
    else{
        if(m > 0){
            placar[pos] = 'A';
            placar_possiveis_recursivo(placar, pos + 1, m -1, n);
        }
        if(n > 0){
            placar[pos] = 'B';
            placar_possiveis_recursivo(placar, pos + 1, m, n - 1);
        }
    }
}

void placar_possiveis(int m, int n){
    char placar[(m + n)];
    placar_possiveis_recursivo(placar, 0, m, n);
}
