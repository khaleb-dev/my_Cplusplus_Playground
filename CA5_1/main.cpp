#include <iostream>

using namespace std;

int main()
{
    int N, result;
    cout << "Hello There!" << endl;
    cout << "Enter any number between 0 and 20:" << endl;
    cin >> N;
    
    do{
    	cout << "Only numbers between 0 and 20 allowed." << endl;
    	cin >> N;
    }
    while(N > 20 || N < 0);
    
    result = N+17;
    cout << N << " + 17 = " << result << endl;

    return 0;
}
