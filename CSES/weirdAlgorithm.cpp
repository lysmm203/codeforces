// Example program
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long input;
    cin >> input;

    cout << input << ' ';

    while (input != 1){
        if (input % 2 == 0){
            input /= 2;
        } else{
            input = input * 3 + 1;
        }
        cout << input << ' ';
    }
}