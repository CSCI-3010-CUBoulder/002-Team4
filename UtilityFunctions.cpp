#include "UtilityFunctions.h"

int RemoveTwos(int original){
    int res = original;
    bool isInteger = true;

    while(isInteger){
        //Check to see if it's still int.
        if((res / 2) != int(res/2)){
            std::cout << res/2 << std::endl;
            std::cout << "Here" << std::endl;
            isInteger = false;
            break;
        }
        else{
            res = res / 2;
            std::cout << res << std::endl;
        }
        if(res == 1){
            return res;
            break;
        }
    }

    return res;
}