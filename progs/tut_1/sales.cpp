#include <iostream>

int main() {
    double sales = 95000;

    const double STATE_TAX  = 1 - (0.04); // Easier to read
    const double COUNTY_TAX = 1 - (0.02);

    const double PRICE = sales * STATE_TAX * COUNTY_TAX;
    std::cout << "Final Price: " << PRICE << std::endl;
}