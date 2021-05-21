#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int h, s, b, c;
    cout << "How many numbers do you want to generate?" << endl;
    cin >> s;
    int a[s];

    cout << "\nGenerating numbers randomly and storing them in array..." << endl;
    // this will generate and populate the array with random numbers
    srand((unsigned) time(0)); // using current time, we make sure that the numbers generated are different
    for(int i = 0; i < s; i++){
        a[i] = (rand() % 50) + 1;
    }
    // this will display all the random numbers in the array
    for(int p = 0; p < s; p++){
        cout << a[p] << ", ";
    }
    cout << endl;

    cout << "\n-----===== Now sorting numbers in array =====-----" << endl;
    // this algorithm will sort the numbers
    for (b = 0; b < s; b++){
        for (c = b+1; c < s; c++) {
            if(a[b] > a[c]){
                h = a[b];
                a[b] = a[c];
                a[c] = h;
            }
        }
    }

    cout << "\nArray sorted in ASCENDING order:" << endl;
    for(b = 0; b < s; b++){
        cout << a[b] << ", ";
    }
    cout << endl;

    cout << "\n\nArray sorted in DESCENDING order:" << endl;
    for(b = s-1; b >= 0; b--){
        cout << a[b] << ", ";
    }
    cout << endl;

    return 0;
}
