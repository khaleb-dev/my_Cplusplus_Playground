#include <iostream>
using namespace std;

int main()
{
    cout << "Destiny's CSC102 Assessment" << endl;
    cout << endl;
    cout << "Program to calculate the factorial of any number." << endl;
    cout << endl;
    int number, product = 1;
    cout << "Enter any positive number to get it's factorial:" << endl;
    cin >> number;
    for (int i = 1; i <= number; i++) {
        product *= i;
    }

    cout << endl;
    cout << "The factorial of " << number << " is: "<< product;

    return 0;
}
