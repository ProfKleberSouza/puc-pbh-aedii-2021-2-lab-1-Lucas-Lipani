
#include "functions.h"

int mdc(int x, int y){

    int mdc = 0;

    if (x > y){
        for (int i = y; i > 0; i--){
            if (x % i == 0 && y % i == 0){
                mdc = i;
                break;
            }
        }
    }
    else if (y > x){
        for (int i = x; i > 0; i--){
            if (x % i == 0 && y % i == 0){
                mdc = i;
                break;
            }
        }
    }
    else if (y == x)
    mdc = y;

    return (mdc);
}
