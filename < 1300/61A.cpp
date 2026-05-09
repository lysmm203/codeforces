// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input1, input2;
    string result;
    cin >> input1 >> input2;

    for (int i=0; i < input1.length(); i++){
        if (input1[i] != input2[i]){result += '1';}
        else {result += '0';}
    }
    cout << result;
}