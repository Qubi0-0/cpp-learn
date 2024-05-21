#pragma once

#include<string>

namespace star_map {
    enum System {
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
} // namespace star_map

namespace heaven {
    class Vessel {
        private:

        public:
        std::string name;
        int generation;
        star_map::System current_system;
        int busters;
        Vessel(std::string name, int number, star_map::System current_system);
        Vessel(std::string name, int number);
        heaven::Vessel replicate(std::string name);
        void make_buster();
        bool shoot_buster();

    };
    std::string get_older_bob(Vessel vessel_1, Vessel vessel_2);
    bool in_the_same_system(Vessel vessel_1, Vessel vessel_2);
} // namespace heaven


