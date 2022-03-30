#include "Reverse.h"
#include <iostream>
#include <string>

/* takes a non-negative int value and 
reverses the digits using recursion.
the reversed int is then returned. */
int Reverse::reverseDigit(int value) {
    if(value==0) {
        return value;
    } else {
        rem=value%10;
        sum=sum*10+rem;
        reverseDigit(value/10);
    }
    return sum;
}

/* takes in a string and returns the reversed string. 
must also use recursion. */
std::string Reverse::reverseString(std::string letters) {
    if(letters.length()==0) {
        return letters;
    } else {
        return reverseString(letters.substr(1))+letters[0];
    }
}