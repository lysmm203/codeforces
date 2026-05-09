// Example program
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int count, result = 0;
    int min, max, currVal;
    cin >> count;

    for (int i=0; i < count; i++){
        cin >> currVal;
        if (i == 0){
            min = currVal;
            max = currVal;
            continue;
        }

        if (currVal > max)
        {
            max = currVal; result++;
        }
        if (currVal < min)
        {
            min = currVal; result++;
        }
    }
    cout << result;

}
