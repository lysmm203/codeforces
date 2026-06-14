// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int digitNum, currVal, zeroCount = 0, fiveCount = 0;
    string res;
    cin >> digitNum;

    for (int i=0; i < digitNum; i++){
        cin >> currVal;
        if (currVal == 0) {zeroCount++;}
        else {fiveCount++; }
    }

    int usedFive;
    usedFive = (fiveCount / 9) * 9;

    if (zeroCount == 0){
        cout << "-1";
    } else if (usedFive == 0)
        cout << "0";
    else {
        cout << string(usedFive, '5') << string(zeroCount, '0');
    }
}