#include <iostream>

int main()
{
	int n = 0;
	int sum = 0;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}