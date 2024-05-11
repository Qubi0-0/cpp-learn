#include "sieve.h"

namespace sieve {

const std::vector<int> primes(int n) {
    std::vector<int> prime_nums;
    std::vector<bool> primes(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (primes[p] == true) {
            for (int i = p * p; i <= n; i += p)
                primes[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (primes[p])
            prime_nums.push_back(p);
    return prime_nums;
}

}  // namespace sieve
