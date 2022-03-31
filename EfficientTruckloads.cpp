#include "EfficientTruckloads.h"
#include <iostream>
#include <vector>

/* given number of crates and truck's crate limit,
return number of trucks needed */
int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    int pile1, pile2;
    if (numCrates == 0) {
        if (lookupTable.size() == 0) {
            lookupTable.push_back(0);
        }
        if (numCrates == 1 && lookupTable.size() <= 1) {
            lookupTable.push_back(1);
        }
        return numCrates;
    } 

    pile1 = numCrates / 2;
    pile2 = numCrates - pile1;
    lookupTable.push_back((numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize)));
    return lookupTable.at(numCrates);
}