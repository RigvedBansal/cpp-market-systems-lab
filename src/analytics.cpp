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

double calculateMean(const std::vector<double>& prices){
    double sum = 0;

    for (double price : prices) {
        sum += price;
    }

    return sum/prices.size();
}

double calculateNetPriceChange(const std::vector<double>& prices){
    return prices.back() - prices.front();
}
double calculatePercentagePriceChange(const std::vector<double>& prices){
    return (calculateNetPriceChange(prices)/prices.front()) * 100;
}

int countUpwardMoves(const std::vector<double>& prices) {
    int count = 0;

    for (std::size_t i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]) {
            count++;
        }
    }

    return count;
}

int countDownwardMoves(const std::vector<double>& prices) {
    int count = 0;

    for (std::size_t i = 1; i < prices.size(); i++) {
        if (prices[i] < prices[i - 1]) {
            count++;
        }
    }

    return count;
}

int countFlatMoves(const std::vector<double>& prices) {
    int count = 0;

    for (std::size_t i = 1; i < prices.size(); i++) {
        if (prices[i] == prices[i - 1]) {
            count++;
        }
    }

    return count;
}