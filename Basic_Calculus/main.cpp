/**
 * This is a simple C++ program that shows how to
 * carry out basic arithmetic operations (+, -, *, /, and %).
 * Designed by Khaleb O'Brien (weird_coder).
 * date: thur 2.4.20
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b, ao, total;
    cout << "Hello there! Welcome to my basic arithmetic calculator" << endl;
    cout << "Please select your operator!" << endl;
    cout << "\nPress 1 for Addition" << endl;
    cout << " \" \"  2 for Subtraction" << endl;
    cout << " \" \"  3 for Multiplication" << endl;
    cout << " \" \"  4 for Division" << endl;
    cout << " \" \"  5 for Modulus" << endl;

    cin >> ao;

    if(ao == 1){
        cout << "Addition module activated!" << endl;
        cout << "Enter the first number to be added: \n" << endl;
        cin >> a;
        cout << "\nEnter the second number to be added: " << endl;
        cin >> b;
        total = a + b;
        cout << "\nThe sum of " << a << " and " << b << " is " << total << endl;
    }
    else if(ao == 2){
        cout << "Subtraction module activated!" << endl;
        cout << "Enter the first number to be subtracted: \n" << endl;
        cin >> a;
        cout << "\nEnter the second number to be subtracted: " << endl;
        cin >> b;
        total = a - b;
        cout << "\nThe difference of " << a << " and " << b << " is " << total << endl;
    }
    else if(ao == 3){
        cout << "Multiplication module activated!" << endl;
        cout << "Enter the first number to be multiplied: \n" << endl;
        cin >> a;
        cout << "\nEnter the second number to be multiplied: " << endl;
        cin >> b;
        total = a * b;
        cout << "\nThe product of " << a << " and " << b << " is " << total << endl;
    }
    else if(ao == 4){
        cout << "Division module activated!" << endl;
        cout << "Enter the first number to be divided: \n" << endl;
        cin >> a;
        cout << "\nEnter the second number to be divided: " << endl;
        cin >> b;
        total = a / b;
        cout << "\nThe quotient of " << a << " and " << b << " is " << total << endl;
    }
    else if(ao == 5){
        cout << "Modulus module activated!" << endl;
        cout << "Enter the first number: \n" << endl;
        cin >> a;
        cout << "\nEnter the second number: " << endl;
        cin >> b;
        total = a % b;
        cout << "\nThe mod of " << a << " and " << b << " is " << total << endl;
    }
    else {
        cout << "Invalid response!!!" << endl;
    }

    return 0;
}
