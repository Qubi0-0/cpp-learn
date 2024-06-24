#include "nth_prime.h"
#include <vector>
#include <stdexcept>

namespace nth_prime {
    long nth(long num) {
        if (num < 1) {
            throw std::domain_error("Requested prime number is out of range");
        }

        std::vector<int> primes;
        for (int candidate = 2; primes.size() < static_cast<size_t>(num); ++candidate) {
            bool isPrime = true;
            for (int prime : primes) {
                if (candidate % prime == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                primes.push_back(candidate);
            }
        }

        return primes[num - 1];
    }
}  // namespace nth_prime