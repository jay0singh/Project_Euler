#include <iostream>

using namespace std;

int main()
{
    long long int n, first = 1, second = 2, nthTerm, sum = 0;
    while(first <= 4000000){
        nthTerm = first + second;
        cout << first << " ";
        if(first % 2 == 0) {
            sum = sum + first;
        }
        first = second;
        second = nthTerm;
    }
    cout << endl << endl;
    cout << sum;
    return 0;
}