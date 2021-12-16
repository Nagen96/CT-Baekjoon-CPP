#include <iostream>

int main(void)
{
	int n = 0;
	std::cin >> n;
	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}
}