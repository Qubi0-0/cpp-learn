#include "collatz_conjecture.h"


namespace collatz_conjecture {
    int steps(int step_num) {
        if (step_num <= 0)
         throw std::domain_error("number must be positive!");

        int iterator = 0;
        while (step_num > 1) {
            iterator ++;
            if (step_num % 2 == 0 )
            step_num /= 2;
            else
            step_num = 3* step_num + 1;
        }
        return iterator;
    }

}  // namespace collatz_conjecture
