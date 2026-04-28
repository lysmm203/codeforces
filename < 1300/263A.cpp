#include <iostream>
#include <stdlib.h>
 
int main()
{
    int currVal; 
    
    for (int row=0; row < 5; row++)
    {
        for (int col=0; col < 5; col++)
        {
            std::cin >> currVal; 
            if (currVal == 1)
            {
                std::cout << (abs(row - 2) + abs(col - 2)); 
            }
               
        }
    }
}