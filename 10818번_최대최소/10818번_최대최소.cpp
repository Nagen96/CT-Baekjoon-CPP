#include <iostream>
#include <vector>

int main()
{
	int NCount;
	int max = 0;
	int min = 0;
	int N;

	std::cin >> NCount;

	int i = 0;
	while (i++ < NCount && std::cin >> N)
	{
		if (i == 1)
		{
			max = N;
			min = N;
		}
		else
		{
			if (N > max)
			{
				max = N;
			}
			if (N < min)
			{
				min = N;
			}
		}
	}
	std::cout << min << " " << max << std::endl;
}