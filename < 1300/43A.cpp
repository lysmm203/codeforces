// Example program
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int num;
    cin >> num;
    string currVal, res;
    unordered_map<string, int> hash;


    while (num--){
        cin >> currVal;
        hash[currVal]++;
        if (hash[currVal] > hash[res]){
            res = currVal;
        }
    }
    cout << res;
}
