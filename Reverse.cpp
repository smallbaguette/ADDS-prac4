#include "Reverse.h"
#include <iostream>
#include <string>

/* takes a non-negative int value and 
reverses the digits using recursion.
the reversed int is then returned. */
int Reverse::reverseDigit(int value) {

    //if digit is negative, return -1
    if (value < 0) {
        return -1;
    }

    //base class: if single digit, return digit
    if (value < 10) {
        sum = (sum*10) + value; //should be the last step of whole process
    } else {
        sum = (sum*10) + (value%10);
        reverseDigit(value/10);
    }
    return sum;
}

/* takes in a string and returns the reversed string. 
must also use recursion. */
std::string Reverse::reverseString(std::string letters) {

    // base class: if the string length is 0 or 1, return string
    if (letters.length() <= 1) {
        return letters;
    } else {
        return reverseString(letters.substr(1)) + letters[0];
    }
}