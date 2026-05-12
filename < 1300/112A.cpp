// Example program
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
    string input1, input2;

    cin >> input1 >> input2;

    transform(input1.begin(), input1.end(), input1.begin(), ::tolower);
    transform(input2.begin(), input2.end(), input2.begin(), ::tolower);

    if (input1 > input2){cout << "1";}
    else if (input1 < input2) {cout << "-1";}
    else {cout << "0";}


}
