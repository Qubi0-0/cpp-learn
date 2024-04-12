#include "hexadecimal.h"
#include <string>
#include <map>
#include <cmath>

namespace hexadecimal {

    std::map<char,int> hex_to_dec {
        {'f', 15},
        {'e', 14},
        {'d', 13},
        {'c', 12},
        {'b', 11},
        {'a', 10},
        {'9', 9},
        {'8', 8},
        {'7', 7},
        {'6', 6},
        {'5', 5},
        {'4', 4},
        {'3', 3},
        {'2', 2},
        {'1', 1},
        {'0', 0}
    };

    int convert(std::string hex) {
        int dec_num = 0;
        for (size_t i=0; i<hex.length(); i++) {
            if (hex_to_dec.find(hex[i])!=hex_to_dec.end())
                dec_num += hex_to_dec[hex[i]] * std::pow(16, hex.length() - 1 - i);
            else 
                return 0;
        }
        return dec_num;
    }
}  // namespace hexadecimal