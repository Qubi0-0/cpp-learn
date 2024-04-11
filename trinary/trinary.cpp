#include "trinary.h"
#include <string>
#include <cmath>

namespace trinary {
    int to_decimal(std::string number) {
        size_t size = number.length();
        int value = 0;
        for (size_t i=0;i<number.length(); i++) {
            if (!isdigit(number[i]))
                return 0;
            value += (number[i] - '0') * pow(3,size - 1 - i);
        }
        return value;
    }
}  // namespace trinary
