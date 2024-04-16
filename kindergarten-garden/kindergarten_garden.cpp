#include "kindergarten_garden.h"
#include <array>
#include <string> 
#include <sstream>


namespace kindergarten_garden {
    
    std::string children = "ABCDEFGHIJKL"; // Letters of all children`s names
    std::array<kindergarten_garden::Plants, 4> plants(std::string plants, std::string child) {
        std::istringstream stream(plants);
        std::string first_row, second_row, child_flowers;

        std::getline(stream, first_row, '\n');     
        std::getline(stream, second_row, '\n');

        size_t child_index = children.find(child[0]);
        if (child_index != std::string::npos) {
            child_flowers = first_row.substr(child_index * 2, 2) + second_row.substr(child_index * 2, 2);
        }

        std::array<kindergarten_garden::Plants, 4> result;
        int idx = 0;
        for (char plant : child_flowers) {
            switch (plant)
            {
            case 'C':
                result[idx] = Plants::clover;
                idx ++;
                break;
            case 'G':
                result[idx] = Plants::grass;
                idx ++;
                break;
            case 'R':
                result[idx] = Plants::radishes;
                idx ++;
                break;  
            case 'V':
                result[idx] = Plants::violets;
                idx ++;
                break;          
            default:
                break;
            }
        }
        return result;
    }  // namespace kindergarten_garden
}

// grass, clover, radishes, and violets.

// There are 12 children in the class:
// - Alice, Bob, Charlie, David,
// - Eve, Fred, Ginny, Harriet,
// - Ileana, Joseph, Kincaid, and Larry.