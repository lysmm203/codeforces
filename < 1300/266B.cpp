// Example program
#include <iostream>
#include <string>

int main()
{
    std::string result;
    int strLen, timeCount;

    std::cin >> strLen >> timeCount >> result;

    while (timeCount--){
        for (int i=0; i < strLen; i++)
        {
            if (result[i] == 'B' && result[i+1] == 'G')
            {
                std::swap(result[i], result[i+1]);
                i++;
            }
        }
    }

    std::cout << result;

}