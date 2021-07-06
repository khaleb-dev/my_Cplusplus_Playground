#include <iostream>
using namespace std;

int getFibs(int n)
{
    int x = 0, y = 1, z;
    if(n == 0) {
        return x;
    }
    for(int i = 2; i <= n; i++) {
        z = x + y;
        x = y;
        y = z;
    }
    return y;
}

int main()
{
    cout << "Caleb's CSC102 Assessment" << endl;
    cout << endl;
    cout << "Program to display the first twenty terms of the Fibonacci series." << endl;
    cout << endl;

    cout << "The first twenty terms of the Fibonacci series are :" << endl;

    for(int j=0; j <= 20; j++) {
        cout << getFibs(j) << ", ";
    }
    cout << endl;

    return 0;
}
