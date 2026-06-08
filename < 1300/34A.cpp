// Example program
#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int num, currVal, res1, res2, min = - 1, idx = 1;
    vector<int> hash;

    cin >> num;

    for (int i=0; i < num; i++){
        cin >> currVal;
        hash.push_back(currVal);
    }

    while (idx < num){
        if (min == -1){
            min = abs(hash[idx] - hash[idx - 1]);
            res2 = idx;
            res1 = idx - 1;
        } else{
            if (abs(hash[idx] - hash[idx - 1]) < min){
                min = abs(hash[idx] - hash[idx - 1]);
                res2 = idx;
                res1 = idx - 1;
            }
        }
        idx++;
    }

    if (abs(hash[num-1] - hash[0]) < min){

        min = abs(hash[num-1] - hash[0]);
        res2 = 0;
        res1 = num-1;
    }

    cout << res1 + 1 << ' ' << res2 + 1;
}
