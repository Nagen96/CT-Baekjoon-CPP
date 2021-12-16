#include <iostream>

int main()
{
    int _count;
    std::cin >> _count;

    for (int i = 0; i < _count; i++)
    {
        int n;
        std::cin >> n;

        int int1 = 0;
        int int0 = 1;
        int intTmp = 0;
        
        for (int j = 0; j < n; j++)
        {
            intTmp = int1;
            int1 = int0 + int1;
            int0 = intTmp;
        }
        std::cout << int0 << " " << int1 << std::endl;
    }
}