#include "analytics.hpp"
#include <cmath>

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

std::vector<double> calculateSimpleReturns(const std::vector<double>& prices) {
    std::vector<double> returns;

    if (prices.size() < 2) {
        return returns;
    }

    returns.reserve(prices.size() - 1);

    for (std::size_t i = 1; i < prices.size(); i++) {
        double currentReturn =
            (prices[i] - prices[i - 1]) / prices[i - 1];

        returns.push_back(currentReturn);
    }

    return returns;
}

double calculatePopStdDev(const std::vector<double>& prices) {
    std::vector<double> returns = calculateSimpleReturns(prices);

    if (returns.empty()) {
        return 0.0;
    }

    double mean = calculateMean(returns);
    double sum = 0.0;

    for (double currentReturn : returns) {
        double difference = currentReturn - mean;
        sum += difference * difference;
    }

    double variance = sum / returns.size();

    return std::sqrt(variance);
}