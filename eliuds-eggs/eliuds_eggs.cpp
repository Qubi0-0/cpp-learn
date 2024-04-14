#include "eliuds_eggs.h"
#include <string>
#include <algorithm>

namespace chicken_coop {
    int positions_to_quantity(int amount) {
        int dec_amount = 0;
        std::string binary = dec_to_bin(amount);
        for( char c : binary) {
            if (c == '1') {
                dec_amount ++;
            }
        }
        return dec_amount;
    }

    std::string dec_to_bin(int n) {
        std::string binary;
        for(int i = 31; i >= 0; i--) {
            int k = n >> i;
            if(k & 1)
                binary += "1";
            else
                binary += "0";
        }
        return binary;
    }

}  // namespace chicken_coop
