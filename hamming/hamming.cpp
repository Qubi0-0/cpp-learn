#include "hamming.h"
#include <stdexcept>

namespace hamming {
    int compute(std::string original_dna, std::string new_dna)
    {
        if (original_dna.length() != new_dna.length())
           throw std::domain_error("Dna's are different lengths!!!!"); 
        int error_score = 0;
        for (size_t i=0; i<original_dna.length(); i++) {
            if (original_dna[i] != new_dna[i]) 
                error_score ++;
        }
        return error_score;
    }

}  // namespace hamming
