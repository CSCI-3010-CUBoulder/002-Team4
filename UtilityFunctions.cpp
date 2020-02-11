#include "UtilityFunctions.h"

std::vector<std::string> Split(std::string whole, std::string separator) {
    std::vector<std::string> toReturn;
    int prevLoc = 0;
    for (size_t i = 0; i < whole.size(); i++) {
        if (whole.substr(i, 1) == separator || i == whole.size()-1) {
            toReturn.push_back(whole.substr(prevLoc, i-prevLoc));
            prevLoc = i+1;
        }
    }
    return toReturn;
}
