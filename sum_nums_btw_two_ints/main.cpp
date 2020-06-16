/**
 * This program will take 2 numbers from user and add all number between them.
 * I will work even if the greater value is given first or the smaller value given first.
 */
#include <iostream>

using namespace std;

int main()
{
    int number1, number2, smaller, bigger, total = 0;

    cout << "Enter first number" << endl;
    cin >> number1;
    cout << "Enter second number" << endl;
    cin >> number2;

    if(number1 > number2){
        bigger = number1;
        smaller = number2;
    }
    else {
        bigger = number2;
        smaller = number1;
    }

    for(int i = smaller; i<=bigger; i++) {
        total = total + i;
    }
    cout << "Sum of numbers between " << number1 << " and " << number2 << " is " << total << endl;

    return 0;
}
