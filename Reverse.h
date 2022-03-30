#ifndef REVERSE_H
#define REVERSE_H

#include <iostream>
#include <string>

class Reverse {
private:
    int sum=0;
public:
    int reverseDigit(int value);
    std::string reverseString(std::string letters);
};
#endif