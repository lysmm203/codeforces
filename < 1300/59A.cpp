#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string result;
    cin >> result;

    int capitalCount = 0;

    for (int i=0; i < result.length(); i++){
        if (result[i] < 97){capitalCount++;}
    }

    // more than half is small letter
    if (result.length() / 2 >= capitalCount){
        transform(result.begin(), result.end(), result.begin(), ::tolower);
    } else{
        transform(result.begin(), result.end(), result.begin(), ::toupper);
    }

    cout << result;
}