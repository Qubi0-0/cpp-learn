#include "prime_factors.h"

namespace prime_factors {
    const std::vector<int> of(int num) {
        std::vector<int> prime_factors;
        int divider = 2;
        while (num > 1) {
            if (num % divider == 0) {
                num /= divider;
                prime_factors.push_back(divider);
            }
            else {
                divider ++;
            }
        }
        return prime_factors;
    }
}  // namespace prime_factors
