#include <string>
#include <list>
#include <unordered_set> 

namespace allergies {
    class allergy_test {
    public:
        allergy_test(int new_num);
        bool is_allergic_to(std::string allergy);
        std::unordered_set<std::string> get_allergies();

        private:
            std::string binary_score;
            std::string dec_to_bin(int num);
            int find_index(const std::string& target);

    };
}  // namespace allergies;
