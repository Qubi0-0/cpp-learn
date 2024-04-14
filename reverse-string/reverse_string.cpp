#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string word) {
        std::string reversed;
        for (int i=word.length() -1; i >= 0; i--) {
            reversed.push_back(word[i]);
        }
        return reversed;
    }
}  // namespace reverse_string
