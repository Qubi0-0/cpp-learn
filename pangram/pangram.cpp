#include "pangram.h"
#include <cctype>
#include <algorithm> 


namespace pangram {
    bool is_pangram(std::string phrase) {
        if (phrase.length() == 0 || phrase.length() < 27)
            return false;
        std::string lower_case;
        std::transform(phrase.begin(), phrase.end(), std::back_inserter(lower_case),
                       [](unsigned char c) { return std::tolower(c); });
        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
        for (char letter : alphabet) {
            if (lower_case.find(letter) == std::string::npos) {
                return false; // Letter not found, not a pangram
            }
        }
        return true;
    }
}  // namespace pangram
