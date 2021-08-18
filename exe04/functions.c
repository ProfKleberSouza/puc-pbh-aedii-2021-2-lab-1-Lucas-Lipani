#include <stdio.h>
#include <string.h>
#include "functions.h"

void numero_vogais(char texto[]){

    int n = strlen(texto);
    int contavg[5] = {0,0,0,0,0};

    for(int i = 0; i < n; i++){
        if (texto[i]=='a' || texto[i]=='A')
            contavg[0] ++;
        if (texto[i]=='e' || texto[i]=='E')
            contavg[1] ++;            
        if (texto[i]=='i' || texto[i]=='I')
            contavg[2] ++;
        if (texto[i]=='o' || texto[i]=='O')
            contavg[3] ++;
        if (texto[i]=='u' || texto[i]=='U')
            contavg[4] ++;
    }

    printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d\n", contavg[0], contavg[1], contavg[2], contavg[3], contavg[4]);

}

