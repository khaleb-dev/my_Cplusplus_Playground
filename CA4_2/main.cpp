#include <iostream>

using namespace std;

int main()
{
    int x=10, y=5;

    cout << "x value  y value  expression  results" << endl;
    cout << x<<"  \t | "<<y<<" \t  | x=y+3     | x=" << y+3 << endl;
    cout << x<<"  \t | "<<y<<" \t  | x=y-2     | x=" << y-2 << endl;
    cout << x<<"  \t | "<<y<<" \t  | x=y*5     | x=" << y*5 << endl;
    cout << x<<"  \t | "<<y<<" \t  | x=y/y     | x=" << x/y << endl;
    cout << x<<"  \t | "<<y<<" \t  | x=y%y     | x=" << x%y << endl;

    return 0;
}
