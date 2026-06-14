// Example program
#include <iostream>
#include <string> 

using namespace std;

int main()
{
    
    // 114114
    string input; 
    cin >> input; 
    
    if (input == "1" || input == "14" || input == "144") {cout << "YES"; return 0; }
    
    int idx = 0; 
    
    while (idx < input.length() - 2){
    
        if (input[idx] != '1') {cout << "NO"; return 0;}
        
        if (input[idx+1] == '4' && input[idx+2] == '4'){idx+=3;}
        else if (input[idx+1] == '4') {idx+=2;}
        else if (input[idx+1] == '1'){idx++;}
        else {cout << "NO"; return 0; }
    }
    if (idx == input.length()) {cout << "YES"; return 0;}
    
    
    string substr = input.substr(idx, input.length() - idx);
    if (substr == "1" || substr == "11" || substr == "111" || substr == "14" || substr == "144") {cout << "YES";}
    else{cout << "NO";}
    
    
}

// more succinct solution:
// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{


    string input;
    cin >> input;
    int i = 0;

    while (i < input.length()){
        if (input[i] != '1') {cout << "NO"; return 0;}
        if (input.substr(i, 3) == "144") i += 3;
        else if (input.substr(i, 2) == "14") i += 2;
        else i++;
    }
    cout << "YES";

}


