#include <iostream>
#include <vector>

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
    return 0;
}