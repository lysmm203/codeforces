// Example program
#include <iostream>

using namespace std;

int main()
{
    //if it's greater than half, it's just even. otherwise, it's just odd
    long long range, index;
    cin >> range >> index;

    if (index > (range + 1) / 2){
        // even case
        index -= (range + 1) / 2;
        cout << 2 + (2 * (index - 1));


    } else{
        // odd case
        cout << 1 + (2 * (index - 1));
    }
}