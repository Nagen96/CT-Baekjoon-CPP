#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N;

	std::cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int count = 0;
		while (count < N)
		{
			if (count < N - i)
			{
				std::cout << " ";
			}
			else
			{
				std::cout << "*";
			}
			count++;
		}
		std::cout << "\n";
	}
}