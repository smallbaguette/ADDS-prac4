#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <iostream>
#include <vector>

class EfficientTruckloads {
private:
    std::vector<int> lookupTable;
public:
    int numTrucks(int numCrates, int loadSize);
};
#endif