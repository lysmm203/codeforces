// Example program
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<int,int>> hash;
    int res = 0, x, y, count;

    cin >> count;

    for (int i=0; i < count; i++){
        cin >> x >> y;
        hash.push_back({x,y});
    }


    for (auto& outer : hash){
        bool left = false, right = false, up = false, down = false;
        for (auto& inner : hash){
            if (outer.first == inner.first){
                if (outer.second < inner.second) right = true;
                if (outer.second > inner.second) left = true;
            }

            if (outer.second == inner.second){
                if (outer.first < inner.first) up = true;
                if (outer.first > inner.first) down = true;
            }
        }
        if (left && right && up && down) res++;
    }
    cout << res;

}
