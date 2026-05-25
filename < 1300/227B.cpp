// Example program
#include <iostream>

using namespace std;

int main()
{
    int elemNum, currElem, queryNum, index[100001];
    long long result = 0;

    cin >> elemNum;

    for (int i=1; i <= elemNum; i++){
        cin >> currElem;
        index[currElem] = i;
    }

    cin >> queryNum;
    for (int i=1; i <= queryNum; i++){
        cin >> currElem;
        result += index[currElem];
    }

    cout << result << ' ' << (long long)queryNum * (elemNum + 1) - result;
}
