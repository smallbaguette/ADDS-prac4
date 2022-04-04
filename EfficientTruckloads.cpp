#include "EfficientTruckloads.h"
#include <iostream>

int lookupTable[100000000];

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    int pile1, pile2;

    if (numCrates == 0) {
        return 0; 
    } else if (numCrates <= loadSize) {
        return 1;
    } else {
        if (lookupTable[numCrates] != 0) {
            return lookupTable[numCrates];
        } else {
            pile1 = numCrates / 2;
            pile2 = numCrates - pile1;
        }
    }
    return lookupTable[numCrates] = numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
}