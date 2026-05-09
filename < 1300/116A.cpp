// Example program
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int stops, entering, leaving, remaining = 0, maxCapacity = 0;
    cin >> stops;

    for (int i=0; i < stops; i++){
        cin >> leaving >> entering;
        remaining += (entering - leaving);
        maxCapacity = max(maxCapacity, remaining);
    }
    cout << maxCapacity;
}
