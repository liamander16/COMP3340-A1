#include "HammeringDist.h"

int main(int args, char* argc[]){
    HammeringDist hamr;
    std::string a, b;
    int result;

    //Request user input for the first binary string
    std::cout << "Enter a binary String: ";
    std::cin >> a;

    //Request user input for the second binary string
    std::cout << std::endl << "Enter another binary string: ";
    std::cin >> b;

    result = hamr.calculate(&a, &b);

    std::cout << "Number of steps required: " << result << std::endl;

    hamr.readFile("C:/Users/limmy/OneDrive/Desktop/COMP3340-A1/src/data/USPresidency.csv");

    return 0;
}
