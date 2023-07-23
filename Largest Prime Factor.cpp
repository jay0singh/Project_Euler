#include <iostream>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    int i = 2;
    
    while(i < n){
        if(n % i == 0)  //If N is divisible by i then divide and reduce the number since the multiples of that
                        //number wont be the largest "Prime" Number
        {
            n = n / i;
        }
        else{
            i++; //If N is not divisible by i then increasing the value of i to check in the next step.
        }
    }
    cout << n; //The orginal number is reduced to a number which is divisible any longer.

    return 0;
}