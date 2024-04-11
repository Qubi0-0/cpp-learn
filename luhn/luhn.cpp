#include "luhn.h"
#include <string>
#include <algorithm>

namespace luhn {
    bool valid(std::string number) {
        int sum = 0;
        number.erase(std::remove(number.begin(), number.end(), ' '), number.end());
        if (number.length() < 2) 
            return false;
        int digit;
        for(std::size_t i=0; i<number.length(); i++) {
            if (!isdigit(number[i]))
                return false;
            digit = (number[i] - '0');
            if (i % 2 == number.length() % 2) {
                digit *= 2;
                if (digit > 9) 
                    digit -=  9;
            } 
            sum += digit;
        }
    return (sum % 10 == 0);
    } 
}  // namespace luhn