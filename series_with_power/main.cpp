#include <iostream>

using namespace std;

int main()
{
    cout << "Program to compute the value of series, given, P = (1)^2 + (3)^2 + (5)^2 + ... + (25)^2" << endl;
    cout << endl;

    double sum = 0;
    string sol_a, sol_b;

    for(int i = 1; i <= 25; i++){
        sol_a = sol_a + "(" + to_string(i) + ")^2 ";
        sol_b = sol_b + to_string(i*i);

        // keep appending a “+” until we get to 25
        if(i < 25){
            sol_a = sol_a + "+ ";
            sol_b = sol_b + " + ";
        }
        sum += i*i;

        i = i+2-1;
    }

    // prints solution and final answer
    cout << "P = " << sol_a << endl;
    cout << "P = " << sol_b << endl;
    cout << "P = " << sum << endl;

    return 0;
}
