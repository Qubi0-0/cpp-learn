#pragma once
#include <string>
#include <array>


namespace kindergarten_garden {
    enum Plants {
        clover,
        grass,
        violets,
        radishes
    };

    std::array<kindergarten_garden::Plants, 4> plants(std::string plants, std::string child);

} // namespace kindergarten_garden
 