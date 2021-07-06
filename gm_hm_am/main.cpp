#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Miracle's CSC102 Assessment" << endl;
    cout << endl;
    cout << "Program to calculate the arithmetic, geometric, and harmonic mean of any set of numbers." << endl;
    cout << endl;

    int n;
    cout << "Input the value for n (number of terms)" << endl;
    cin >> n;

    double xi[n], xi_sum = 0, xBar, xi_product = 1, xProduct, p, xi_sum_inverse, hBar;
    cout << "Input values for each of the " << n << " terms" << endl;
    for(int i=0; i<n; i++){
        cin >> xi[i];
        xi_sum += xi[i];
        xi_product *= xi[i];
        xi_sum_inverse += (double) 1/xi[i];
    }
    cout << endl;

    // solve for Arithmetic mean
    xBar = xi_sum/n;
    cout << "The Arithmetic mean = " << xBar << "\n" << endl;

    // solve for Geometric mean
    p = (double) 1/n;
    xProduct = pow(xi_product,p);
    cout << "The Geometric mean = "<< xProduct << "\n" << endl;

    // solve for Harmonic mean
    hBar = n/xi_sum_inverse;
    cout << "The Harmonic mean = "<< hBar << endl;

    return 0;
}
