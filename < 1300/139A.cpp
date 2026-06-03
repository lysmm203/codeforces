// Example program
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int pageNumber, res, index = 0;
    int pages[7];

    cin >> pageNumber;

    for (int i=0; i < 7; i++) {
        cin >> pages[i];
    }

    for (int i=0; pageNumber > 0; i = (i + 1) % 7){
        pageNumber -= pages[i];
        res = i + 1;
    }

    cout << res;
}
