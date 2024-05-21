#include "doctor_data.h"

namespace heaven {
        Vessel::Vessel(std::string name, int generation, star_map::System current_system) {
            this->name = name;
            this->generation = generation;
            this->current_system = current_system;
            this->busters = 0;
        }
        Vessel::Vessel(std::string name, int generation) {
            this->name = name;
            this->generation = generation;
            this->current_system = star_map::System::Sol;
            this->busters = 0;
        }
        Vessel Vessel::replicate(std::string name) {
            return Vessel(name, this->generation + 1);
        }
        void Vessel::make_buster() {
            this->busters ++;
        }
        bool Vessel::shoot_buster() {
            return this->busters > 0 ? this->busters-- : false;
        }
        std::string get_older_bob(Vessel vessel_1, Vessel vessel_2) {
            return vessel_1.generation < vessel_2.generation ? vessel_1.name : vessel_2.name;
        }
        bool in_the_same_system(Vessel vessel_1, Vessel vessel_2) {
            return vessel_1.current_system == vessel_2.current_system;
        }
} // namespace heaven