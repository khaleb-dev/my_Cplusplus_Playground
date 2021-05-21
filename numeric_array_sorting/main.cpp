#include <iostream>

using namespace std;

int main()
{
    int hold, c[5], i, j;
    cout << "Enter values for each index" << endl;

    for(int i = 0; i < 5; i++){
        cin >> c[i];
    }

    cout << "\nHere are the elements in the array" << endl;

    for(int j = 0; j < 5; j++){
        cout << c[j] << ", ";
    }

    cout << endl;

    cout << "\nSorting in progress..." << endl;

    for (i = 0; i < 5; i++){
        for (j = i+1; j < 5; j++) {
            if(c[i] > c[j]){
                hold = c[i];
                c[i] = c[j];
                c[j] = hold;
            }
        }
    }

    cout << "\nArray sorted in assending order:" << endl;

    for(i = 0; i < 5; i++){
        cout << c[i] << ", ";
    }

    cout << "\n\nArray sorted in dessending order:" << endl;

    for(i = 4; i >= 0; i--){
        cout << c[i] << ", ";
    }

    return 0;
}
