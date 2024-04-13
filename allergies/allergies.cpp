#include "allergies.h"
#include <string>
#include <list>
#include <algorithm>
#include <unordered_set> 

namespace allergies {
    std::list<std::string> allergy_types = {
            "eggs",
            "peanuts",
            "shellfish",
            "strawberries",
            "tomatoes",
            "chocolate",
            "pollen",
            "cats"
            };

    allergy_test::allergy_test(int new_num) {
        binary_score = dec_to_bin(new_num);
    }

    bool allergy_test::is_allergic_to(std::string allergy) {
         int index = find_index(allergy);
         if (index >= 0 && binary_score[index] == '1') {
            return true;
         }
         return false;
    }

    std::unordered_set<std::string> allergy_test::get_allergies() {
        std::unordered_set<std::string> result; 
        auto it = allergy_types.begin();
        for (size_t i=0; i<8; i++, it++) {
            if (binary_score[i] == '1') {
                result.insert(*it);
            }
        }
        return result;
    }

    std::string allergy_test::dec_to_bin(int n) {
        std::string binary;
        for(int i = 31; i >= 0; i--) {
            int k = n >> i;
            if(k & 1)
                binary += "1";
            else
                binary += "0";
        }
        std::reverse(binary.begin(), binary.end());
        return binary;
    }

    int allergy_test::find_index(const std::string& target) {
        int index = 0;
        for (auto& str : allergy_types) {
            if (str == target) {
                return index;
            }
            ++index;
        }
        return -1; 
    }
    
}  // namespace allergies
