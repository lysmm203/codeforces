// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, result = "NO";
    cin >> input;

    if (input.contains("H") || input.contains("Q") || input.contains("9")) {
        result = "YES";
    }

    cout << result;

}
