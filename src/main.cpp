#include <iostream>
#include <vector>
#include <analytics.hpp>

int main() {
    int numberOfPrices;

    std::cout << "Number of prices to be entered: ";
    std::cin >> numberOfPrices;

    if (!std::cin || numberOfPrices <= 0) {
        std::cout << "Invalid number of prices.\n";
        return 1;
    }

    std::cout << "Enter " << numberOfPrices << " prices:\n";
    std::vector<double> prices(numberOfPrices);
    for(int i =0;i<numberOfPrices;i++){
        std::cout<<"Price "<<i+1<<": ";
        std::cin >> prices[i];
        
        if (!std::cin) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Please enter a number.\n";
            i--;  
        }
        else if (prices[i] <= 0) {
            std::cout << "Price must be positive.\n";
            i--;  
        }
    }


    std::cout << "\nPrices entered:\n";

    for (auto it : prices) {
        std::cout << it << '\n';
    }

    std::cout << "\nMARKET DATA REPORT\n";
    std::cout << "------------------\n";

    std::cout << "Observations: " << prices.size() << '\n';
    std::cout << "Minimum price: " << calculateMinimum(prices) << '\n';
    std::cout << "Maximum price: " << calculateMaximum(prices) << '\n';
    std::cout << "Mean price: " << calculateMean(prices) << '\n';
    std::cout << "Net price change: " << calculateNetPriceChange(prices) << '\n';
    std::cout << "Percent price change: " << calculatePercentagePriceChange(prices) << '\n';
    std::vector<double> returns = calculateSimpleReturns(prices);
    std::cout << "Simple returns:\n";
    for (double currentReturn : returns) {
        std::cout << currentReturn << ", ";
    }
    std::cout << "\n";
    std::cout << "Upward moves: " << countUpwardMoves(prices) << '\n';
    std::cout << "Downward moves: " << countDownwardMoves(prices) << '\n';
    std::cout << "Flat moves: " << countFlatMoves(prices) << '\n';
    std::cout << "Per-period volatility: " << calculatePopStdDev(prices) << '\n';
    return 0;
}