#include <stdexcept>  // for std::domain_error

namespace triangle {
    enum flavor{
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(double a, double b, double c) {
        if (a <= 0 || b <= 0 || c <= 0) {
            throw std::domain_error("Sides must be positive");
        }
        if (a + b <= c || a + c <= b || b + c <= a) {
            throw std::domain_error("Not a valid triangle");
        }
        if (a == b && b == c) {
            return equilateral;
        }
        if (a == b || b == c || a == c) {
            return isosceles;
        }
        return scalene;
    }
}