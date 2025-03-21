#include "Reverser.h"
int Reverser::reverseDigit(int value) {
    if (value < 0) return -1;
    return reverseDigitHelper(value, 0);
}
int Reverser::reverseDigitHelper(int value, int result) {
    if (value==0) return result;
    return reverseDigitHelper(value / 10, result * 10 + (value % 10));
}
std::string Reverser::reverseString(std::string characters) {
    if (characters=="") return "";
    if (characters=="null") return "ERROR";
    return reverseString(characters.substr(1)) + characters[0];
}