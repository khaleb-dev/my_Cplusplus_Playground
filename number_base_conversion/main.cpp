#include <iostream>
using namespace std;

int binaryToDecimal(string n);

int main()
{
    int o = 0;
    cout << "Please, select an option from the menu below:" << endl;
    cout << "Press 1 for Binary to Decimal." << endl;
    cout << "Press 2 for Base 5 to Decimal." << endl;
    cout << "Press 3 for Octal to Decimal." << endl;
    cout << "Press 4 for Hexadecimal to Decimal." << endl;

    cin >> o;

    switch(o){
        case 1:
            string b;
            cout << "Enter a Binary number:" << endl;
            cin >> b;
            cout << binaryToDecimal(b) << endl;

        //case 2:
    }

    return 0;
}

binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1'){
            dec_value += base;
        }
        base = base * 2;
    }

    return dec_value;
}
