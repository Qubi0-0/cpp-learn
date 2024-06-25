#include "etl.h"
#include <cctype>


namespace etl {
    std::map<char, int> transform(std::map<int, std::vector<char>> old) {
        std::map<char, int> new_map;

        for (const auto& [key, vec] : old) {
            for (char letter : vec) {
                new_map.emplace(std::tolower(letter), key);
            }
        }
        return new_map;
    }

}  // namespace etl
