#include <iostream>
using namespace std;

int binaryToDecimal(string n);

int main()
{
    int option = 0;
    do{
        cout << "Please, select an option from the menu below:" << endl;
        cout << "Press 1 for Binary to Decimal." << endl;
        cout << "Press 2 for Base 5 to Decimal." << endl;
        cout << "Press 3 for Octal to Decimal." << endl;
        cout << "Press 4 for Hexadecimal to Decimal." << endl;
        cout << "Press 0 to exit the program" << endl;

        cin >> option;

        switch(option){
            case 1:{
                string b;
                cout << "Enter a Binary number:" << endl;
                cin >> b;
                cout << binaryToDecimal(b) << endl;
                break;
            }

            case 2:{
                string b;
                cout << "Enter a number in Base 5:" << endl;
                cin >> b;

                break;
            }

            case 3:{
                string b;
                cout << "Enter a number in Base 8 (Octal):" << endl;
                cin >> b;

                break;
            }

            case 4:{
                string b;
                cout << "Enter a number in Base 16 (Hexadecimal):" << endl;
                cin >> b;

                break;
            }

            default :
                cout << "Invalid option selected, please select an option from the list below." << endl;
                break;
        }
    }
    while(option != 0);

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
