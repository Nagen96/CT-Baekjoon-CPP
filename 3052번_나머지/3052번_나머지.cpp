#include <iostream>

int main()
{
	int n;
	int ia[42] = { 0 };
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> n;
		ia[n % 42]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if (ia[i] != 0)
		{
			count++;
		}
	}
	std::cout << count << std::endl;
}