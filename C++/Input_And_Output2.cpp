/*
Author :: Solayman Hossain Emon
Aust cse 37th Batch
ID :: 16.01.04.091
*/

#include <iostream>

int main()
{
    int i, t = 0, sum = 0;

    while(std::cin >> i)
    {
        sum += i;
        if(t == 2)
        {
            break;
        }
        t ++;
    }
    std::cout << sum << std::endl;

    return 0;
}
