// Example program
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;

    cout << (set<char>(s.begin(), s.end()).size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");

}