#include "darts.h"
#include <cmath>

namespace darts {
    int score(float x, float y) {
        if (std::sqrt(x*x + y*y) <= 1)
            return 10;
        else if (std::sqrt(x*x + y*y) <= 5)
            return 5;
        else if (std::sqrt(x*x + y*y) <= 10)
            return 1;
        else
            return 0;
    }
} // namespace darts