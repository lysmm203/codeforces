// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input1, input2;
    cin >> input1 >> input2;

    if (input1.length() != input2.length()) {cout << "NO"; return 0;}

    int idx1 = 0;
    int idx2 = input2.length() - 1;

    while (idx1 < input1.length()){
        if (input1[idx1] != input2[idx2]) {cout << "NO"; return 0;}
        idx1++;
        idx2--;
    }

    cout << "YES";

}
