#include <iostream>

using namespace std;

int main()
{
    bool a = 0;
    bool b = 1;
    bool c = 0;

    // !A
    if(!a){
        cout << "!A = true (1)" << endl;
    }
    else {
        cout << "!A = false (0)" << endl;
    }

    // !A || B
    if(!a || b){
        cout << "!A || B = true (1)" << endl;
    }
    else {
        cout << "!A || B = false (0)" << endl;
    }

    // A || C
    if(a || c){
        cout << "A || C = true (1)" << endl;
    }
    else {
        cout << "A || C = false (0)" << endl;
    }

    // !(!B && !C)
    if(!(!b && !c)){
        cout << "!(!B && !C) = true (1)" << endl;
    }
    else {
        cout << "!(!B && !C) = false (0)" << endl;
    }

    return 0;
}
