// Example program
#include <iostream>
#include <stdlib.h>
int main()
{
    std::string result;
    std::string input;

    std::getline(std::cin, input);

    for (int i=0; i < input.length(); i++)
    {
        if (input[i] == '.'){result += '0';}
        else {
            if (input[i + 1] == '.'){result += '1';}
            else{result += '2';}
            i++;
        }
    }

    std::cout<<result;
}