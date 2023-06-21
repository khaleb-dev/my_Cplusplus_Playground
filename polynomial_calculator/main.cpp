#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double d, root1, root2;

    cout << "Polynomial Calculator by Miracle Daniel" << endl;
    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;


    d = b * b - 4 * a * c;

    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    
    cout << "***********************************************" << endl;
    cout << "Polynomial = 5x^2 + 6x + 1 = 0 " << root1 << endl;
    cout << "1st root = " << root1 << endl;
    cout << "2nd root = " << root2 << endl;
    cout << "***********************************************" << endl;

    return 0;

}
