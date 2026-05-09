// Example program
#include <iostream>
#include <string>
#include <set>

using namespace std;

// take the input as a string
// remove all plus
// sort
// insert plus in even indices


int main()
{
    string input;
    cin >> input;

    char count[4] = {0};

    for (int i=0; i < input.length(); i+=2){
        count[input[i] - '0']++;
    }

    string result;

    for (int i=0; i < 4; i++){
        if (count[i] == 0){continue;}
        for (int j=0; j < count[i]; j++){
            if (!result.empty()) {result += '+';}
            result += char(i + '0');
        }
    }

    cout << result;

}
