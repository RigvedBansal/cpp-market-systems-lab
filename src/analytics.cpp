#include "analytics.hpp"

double calculateMinimum(const std::vector<double>& prices){
    double minimum = prices[0];

    for (double price : prices) {
        if (price < minimum) {
            minimum = price;
        }
    }

    return minimum;
}

double calculateMaximum(const std::vector<double>& prices){
    double maximum = prices[0];

    for (double price : prices) {
        if (price > maximum) {
            maximum = price;
        }
    }

    return maximum;
}