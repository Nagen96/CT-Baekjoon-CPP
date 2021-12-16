#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int N, X;
	int A;

	std::cin >> N >> X;
	
	int *intArr = new int[X];

	for (int i = 1; i <= N; i++)
	{
		std::cin >> A;
		if (A < X)
		{
			std::cout << A << " ";
		}
	}
}