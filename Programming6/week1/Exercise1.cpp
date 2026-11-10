#include <iostream>
int main(){
    int priceBeforeTax;
    std::cout << "Enter the price before tax: ";
    std::cin >> priceBeforeTax;
    int taxRate = 7;
    int taxAmount = priceBeforeTax * taxRate / 100;
    int priceAfterTax = priceBeforeTax + taxAmount;
    std::cout << "The price before tax is: " << priceBeforeTax << std::endl;
    std::cout << "The tax amount is: " << taxAmount << std::endl;
    std::cout << "The final total price is: " << priceAfterTax << std::endl;
    return 0;
}