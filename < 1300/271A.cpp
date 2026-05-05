#include <set>
#include <iostream>
#include <string>
using namespace std;
bool checkUniqueDigits(int year){
    set<int> hash; 

    while (year > 0)
    {
        hash.insert(year % 10);
        year /= 10; 
    }    
    return hash.size() == 4; 
}
int main()
{
    int result; 
    cin >> result; 

    while (true)
    {
        if(checkUniqueDigits(++result)){cout << result << endl; break;}
    }

}