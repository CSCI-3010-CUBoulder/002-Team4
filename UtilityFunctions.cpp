#include <string>
#include "UtilityFunctions.h"

std::vector<std::string> Split(std::string whole, std::string separator) {
    std::vector<std::string> toReturn;
    int prevLoc = 0;
    for (int i = 0; i < size(whole); i++) {
        if (whole[i] == separator) {
            toReturn.push_back(whole.substr(prevLoc, i-prevLoc));
            prevLoc = i;
        }
    }
    return toReturn;
}
