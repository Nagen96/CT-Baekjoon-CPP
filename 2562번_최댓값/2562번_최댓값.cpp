#include <iostream>

int main()
{
	int count = 1;
	int intTmp;
	int max;

	for (int i = 1; i <= 9; i++)
	{
		std::cin >> intTmp;
		if (i == 1)
		{
			max = intTmp;
		}
		else
		{
			if (intTmp > max)
			{
				max = intTmp;
				count = i;
			}
		}
	}
	std::cout << max << std::endl;
	std::cout << count << std::endl;
}