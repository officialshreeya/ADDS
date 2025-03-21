#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"
int main() {
    //4Truckloads
    Truckloads T;
    int n1 = 17, n2 = 4;
    std::cout << "Number of trucks: " << T.numTrucks(n1, n2) << std::endl;
    //4Reverser
    Reverser myReverser;
    int rev_i = myReverser.reverseDigit(12234);
    std::cout << "Reversed int: " << rev_i << std::endl;
    std::string reversedStr = myReverser.reverseString("Worlddd");
    std::cout << "Reversed string: " << reversedStr << std::endl;
    return 0;
}
