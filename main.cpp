#include <iostream>
#include "UtilityFunctions.h"

int main(int argc, char const *argv[]) {
    std::vector<std::string> toPrint = Split("Test Test 123!!!", " ");
    for (size_t i = 0; i < toPrint.size(); i++) {
        std::cout << toPrint[i] << '\n';
    }
    return 0;
}
