// Example program
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int cityNum, currVal, minVal = INT_MAX, minIdx, minCount = 0;
    cin >> cityNum;


    for (int i=1; i < cityNum+1; i++){
        cin >> currVal;
        if (currVal < minVal){
            minVal = currVal;
            minIdx = i;
            minCount = 1;
        } else if (currVal == minVal){
            minCount++;
        }
    }

    if (minCount == 1){cout << minIdx;}
    else {cout << "Still Rozdil";}

}
