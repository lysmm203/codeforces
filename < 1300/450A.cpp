// Example program
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int numbers, subtractors, currVal, res;
    
    cin >> numbers >> subtractors; 
    
    queue<pair<int,int>> q; 
    
    for (int i=0; i < numbers; i++){cin >> currVal; q.push({currVal, i});}
    
    while (!q.empty()){
        auto [candy, idx] = q.front();
        q.pop();
        if (candy - subtractors > 0) {q.push({candy - subtractors, idx});} 
        else res = idx + 1; 
    }
    cout << res; 
}
