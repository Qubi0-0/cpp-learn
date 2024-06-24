#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {
    const std::map<char, int> count(std::string sequence) {
    std::map<char, int> sequence_map = {{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
    for (char letter: sequence) {
        auto it = sequence_map.find(letter);
        if (it != sequence_map.end())
            sequence_map.find(letter)->second ++;
        else
           throw std::invalid_argument("Missmatched nucleotide!");
    }

    return sequence_map;
    }

}  // namespace nucleotide_count
