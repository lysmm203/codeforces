// Example program
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string input1, input2, input3, result = "YES";
    map<char, int>hash;

    cin >> input1 >> input2 >> input3;

    for (char c : input1){
        hash[c]++;
    }

    for (char c : input2){
        hash[c]++;
    }

    for (char c : input3){
        hash[c]--;
    }

    for (auto& [key, value] : hash){
        if (value != 0) result = "NO";
    }

    cout << result;

}
