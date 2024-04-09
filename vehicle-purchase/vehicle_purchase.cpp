#include "vehicle_purchase.h"

namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        // TODO: Return true if you need a license for that kind of vehicle.
        if (kind == "car" || kind == "truck") {
            return true;
        }
        else {
            return false;
        }
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        std::string ending = " is clearly the better choice.";
        if (option1 < option2) {
            return option1 + ending;
        } 
        else {
            return option2 + ending;
        }
    }
    /* 
    For a rough estimate, assume if the vehicle is less than 3 years old, it costs 80% of the original price it had when it was brand new.
    If it is at least 10 years old, it costs 50%.
    If the vehicle is at least 3 years old but less than 10 years, it costs 70% of the original price.
    */
    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        if (age >= 10) {
            return original_price * 0.5;
        }
        else if (age < 3) {
            return original_price * 0.8;
        }
        else {
            return original_price * 0.7;
        }
        
    }

}  // namespace vehicle_purchase