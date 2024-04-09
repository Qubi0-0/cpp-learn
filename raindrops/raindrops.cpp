#include "raindrops.h"
#include <string>


namespace raindrops {
    std::string convert (int number) {
        std::string answer;
        bool flag = false;
        if (number % 3 == 0) {
            answer += "Pling";
            flag = true;
        } 
        if (number % 5 == 0) {
            answer += "Plang";
            flag = true;
        } 
        if (number % 7 == 0) {
            answer += "Plong";
            flag = true;
        } 
        if (flag == false ){
            return std::to_string(number);
        } 
        else {
            return answer;
        }
    }
}  // namespace raindrops
