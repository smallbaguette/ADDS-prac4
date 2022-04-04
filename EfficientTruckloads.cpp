#include "EfficientTruckloads.h"
#include <iostream>

int lookupTable[100000000];

/* given number of crates and truck's crate limit,
return number of trucks needed */
int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {

    int pile1, pile2;

    //base class: if numCrates <= loadSize, return 1
    if (numCrates == 0) {
        return 0; 
    }
    if (numCrates <= loadSize) {
        return 1;
    }
    
    if (lookupTable[numCrates] != 0) {
        return lookupTable[numCrates];
    } else {
        pile1 = numCrates / 2;
        pile2 = numCrates - pile1;
    }
    return lookupTable[numCrates] = numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
}