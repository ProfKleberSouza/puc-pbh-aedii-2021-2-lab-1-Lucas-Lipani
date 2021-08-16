
#include "functions.h"

int menor(int v[], int n){
    int men = v[0];

    for (int i = 0; i < n ; i++){
        if (v[i] < men)
            men = v[i];
    }

    return men;
}
