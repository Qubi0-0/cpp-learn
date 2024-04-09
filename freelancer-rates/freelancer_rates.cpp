// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath> // Include the <cmath> library for std::ceil and std::floor
// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    
    return hourly_rate * 8;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    return  before_discount - (before_discount * 0.01 * discount );
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
int monthly_rate (double hourly_rate, double discount) {
    double monthly_before = hourly_rate * 8.0 * 22.0;
    return std::ceil(monthly_before - (monthly_before * 0.01 * discount));
}




int days_in_budget(int budget, double hourly_rate, double discount) {
    double days = budget / ((hourly_rate - (0.01 * discount * hourly_rate)) * 8);
    
    return std::floor(days); // Use std::floor to round down the number of days
}