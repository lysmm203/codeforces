// Example program
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int count, result=0;
    string input;
    cin >> count;

    while (count--){
        cin >> input;
        if (input.contains("++")) result++;
        if (input.contains("--")) result--;
    }
    cout << result;

}
