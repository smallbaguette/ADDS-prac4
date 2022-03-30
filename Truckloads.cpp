#include "Truckloads.h"
#include <iostream>

/* given number of crates and truck's crate limit,
return number of trucks needed */
int Truckloads::numTrucks(int numCrates, int loadSize) {
    int pile1, pile2;

    //base class: if numCrates <= loadSize, return 1
    if (numCrates <= loadSize) {
        return 1;
    } else {
        pile1 = numCrates / 2;
        pile2 = numCrates - pile1;
        return numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
    }
}