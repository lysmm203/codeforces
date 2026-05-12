// Example program
#include <iostream>
#include <set>

using namespace std;


int main()
{
    int count, currVal;
    float result = 0.0f;

    cin >> count;

    for (int i=0; i < count; i++){
        cin >> currVal;
        result += currVal;
    }
    cout << result / count;
}
