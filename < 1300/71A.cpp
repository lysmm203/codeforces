// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string currString;
    int lineCount;

    cin >> lineCount;

    while (lineCount--){
        cin >> currString;
        if (currString.length() <= 10) {cout << currString << endl;}
        else{cout << currString[0] << currString.length() - 2 << currString[currString.length() -1] << endl;}
    }
}