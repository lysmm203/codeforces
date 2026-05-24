// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int moduloDivisor, count, totalCount = 0, result = 0;

    cin >> moduloDivisor;

    for (int i=0; i < moduloDivisor; i++){
        cin >> count;
        totalCount += count;
    }

    for (int x=1; x <= 5; x++){
        if ((totalCount + x) % (moduloDivisor + 1) != 1) result++;
    }
    cout <<  result;
}
