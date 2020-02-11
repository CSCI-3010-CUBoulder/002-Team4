#include "UtilityFunctions.h"

std::vector<std::string> Split(std::string whole, std::string separator) {
    std::vector<std::string> toReturn;
    int prevLoc = 0;
    for (size_t i = 0; i < whole.size(); i++) {
        if (whole.substr(i, 1) == separator) {
            toReturn.push_back(whole.substr(prevLoc, i-prevLoc));
            prevLoc = i+1;
        } else if (i == whole.size()-1) {
            toReturn.push_back(whole.substr(prevLoc, whole.size()-i))
        }
    }
    return toReturn;
}

// Sums all numbers in a vector and returns the resulting value
int Sum(std::vector<int> nums)
{
  int SUM = 0;
  for (int i = 0; i <= (int) nums.size() - 1; i++)
  {
    SUM = SUM + nums[i];
  }
  return SUM;
}
