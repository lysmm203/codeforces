// Example program
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{
    int leftInput, rightInput, rows, left=0, right=0, leftZeroes=0, rightZeroes=0;

    cin >> rows;

    for (int i=0; i < rows; i++){
        cin >> leftInput >> rightInput;
        left += leftInput;
        right += rightInput;
    }

    leftZeroes = rows - left;
    rightZeroes = rows - right;

    cout << min(left, leftZeroes) + min(right, rightZeroes);
}
