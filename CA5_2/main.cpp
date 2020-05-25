#include <iostream>

using namespace std;

int main()
{
    int oneKilo, numberToBuy, totalPriceNoTax;
    double oneKiloTax, taxPercent, totalTax, grandTotal;
    cout << "Hello There!" << endl;
    cout << "Enter the price for one kilogram of tomatoes (tax exclusive) e.g 520:" << endl;
    cin >> oneKilo;
    cout << "How many kilograms of tomatoes do you want to buy? e.g 200" << endl;
    cin >> numberToBuy;
    cout << "What is the tax (in % unit) for each kilogram? e.g 50" << endl;
    cin >> oneKiloTax;

    // convert the tax value to percentage.
    taxPercent = oneKiloTax/100;
    cout << "The tax unit for one kilogram in percentage is: " << taxPercent <<endl;
    totalTax = taxPercent*numberToBuy;
    cout << "The total tax charged for "<< numberToBuy << " kilograms is: " << totalTax << endl;
    totalPriceNoTax = oneKilo*numberToBuy;
    cout << "The total price without tax is: " << totalPriceNoTax << endl;
    grandTotal = totalPriceNoTax+totalTax;
    cout << "The grand total is: " << grandTotal << endl;

    return 0;
}
