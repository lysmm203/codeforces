// Example program
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int rowCount, int1, int2, int3;
    int result = 0;
    cin >> rowCount;
    for (int i=0; i < rowCount; i++){
        cin >> int1 >> int2 >> int3;
        if (int1 + int2 + int3 >= 2) result++;
    }
    cout << result;
}
