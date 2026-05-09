// Example program
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<int> hash;
    int input;

    for (int i=0; i < 4; i++){
        cin >> input;
        hash.insert(input);
    }
    cout << 4 - hash.size();
}