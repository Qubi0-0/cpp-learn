#include "protein_translation.h"
#include <vector>
#include <string>


namespace protein_translation {
    std::vector<std::string> proteins(std::string sequence) {
        std::vector<std::string> result;
    // int seq_num = sequence.length() / 3;
        for(size_t i=0;i<sequence.length();i+=3) {
            std::string codon = sequence.substr(i, 3);
            if (codon == "AUG") {
                result.emplace_back("Methionine");
            } else if (codon == "UUU" || codon == "UUC") {
                result.emplace_back("Phenylalanine");
            } else if (codon == "UUA" || codon == "UUG") {
                result.emplace_back("Leucine");
            } else if (codon == "UCU" || codon == "UCC" || codon == "UCA" || codon == "UCG") {
                result.emplace_back("Serine");
            } else if (codon == "UAU" || codon == "UAC") {
                result.emplace_back("Tyrosine");
            } else if (codon == "UGU" || codon == "UGC") {
                result.emplace_back("Cysteine");
            } else if (codon == "UGG") {
                result.emplace_back("Tryptophan");
            } else {
                break;
            }
        }
        return result;
    }
}  // namespace protein_translation

// | Codon              | Protein       |
// | :----------------- | :------------ |
// | AUG                | Methionine    |
// | UUU, UUC           | Phenylalanine |
// | UUA, UUG           | Leucine       |
// | UCU, UCC, UCA, UCG | Serine        |
// | UAU, UAC           | Tyrosine      |
// | UGU, UGC           | Cysteine      |
// | UGG                | Tryptophan    |
// | UAA, UAG, UGA      | STOP          |