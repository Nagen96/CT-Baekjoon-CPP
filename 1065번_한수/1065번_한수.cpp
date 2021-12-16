#include <iostream>

int main()
{
    int _input = 0;
    int _count = 0;

    std::cin >> _input;

    for (int i = 1; i <= _input; i++)
    {
        if (i < 100)
        {
            _count++;
        }
        else if (i < 1000)
        {
            int digit3 = i / 100 % 10;
            int digit2 = i / 10 % 10;
            int digit1 = i % 10;

            int comDif = digit1 - digit2;
            if ((digit2 - digit3) == comDif)
            {
                _count++;
            }
        }
    }
    std::cout << _count << std::endl;
}