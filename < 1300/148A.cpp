// Example program
#include <iostream>
#include <set>

using namespace std;


int main()
{
    int multiple1, multiple2, multiple3, multiple4, count, result = 0;
    cin >> multiple1 >> multiple2 >> multiple3 >> multiple4 >> count;

    for (int i=1; i <= count; i++){
        if (i % multiple1 == 0 ||
        i % multiple2 == 0 ||
        i % multiple3 == 0 ||
        i % multiple4 == 0
        ) {result++;}
    }
    cout << result;

}
