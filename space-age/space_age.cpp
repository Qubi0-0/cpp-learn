#include "space_age.h"

namespace space_age {
    space_age::space_age(long seconds) {
        this->seconds_=seconds;
    }

    long space_age::seconds() const {
        return seconds_;
    }
    double space_age::on_earth() const{
        return (seconds_ / 3600 / 24.0 / 365.25) / 1.0;
    }
    double space_age::on_mercury() const{
        return (seconds_ / 3600 / 24.0 / 365.25) / 0.2408467;
    }
    double space_age::on_venus() const{
        return (seconds_ / 3600 / 24.0 / 365.25) / 0.61519726;
    }
    double space_age::on_mars() const{
        return (seconds_ / 3600 / 24.0 / 365.25) / 1.8808158;
    }
    double space_age::on_jupiter() const{
        return (seconds_ / 3600 / 24.0 / 365.25) / 11.862615;
    }
    double space_age::on_saturn() const{
        return (seconds_ / 3600 / 24.0 / 365.25) / 29.447498;
    }
    double space_age::on_uranus() const{
        return (seconds_ / 3600 / 24.0 / 365.25) / 84.016846;
    }
    double space_age::on_neptune() const{
        return (seconds_ / 3600 / 24.0 / 365.25) / 164.79132;
    }
}  // namespace space_age
