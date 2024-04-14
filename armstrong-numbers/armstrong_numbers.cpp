#include "armstrong_numbers.h"
#include <string>
#include <cmath>


namespace armstrong_numbers {
    bool is_armstrong_number(int input) {
        int result = 0;
        int number = input;
        int input_len = std::to_string(input).length();
        while (input > 0) {
            int digit = input % 10;
            result += pow(digit, input_len);
            input /= 10;
        }
        return result == number;
    }
}  // namespace armstrong_numbers
