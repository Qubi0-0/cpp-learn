#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string word) {
        return std::string(rbegin(word), rend(word));
    }
} 
