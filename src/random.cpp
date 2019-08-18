#include "inc/random.h"
#include <stdlib.h>

double uniform(float low, float up){
    if (low >= up){
        return NULL;
    }
    long int temp, num;
    temp = rand() * rand();
    num = temp % ((int)((up - low)*10000000)) + low*10000000 +1;
    return (double)num/10000000;
}

int randint(int low, int up){
    if (low >= up){
        return NULL;
    }
    return rand()%(up - low) + low +1;
}
