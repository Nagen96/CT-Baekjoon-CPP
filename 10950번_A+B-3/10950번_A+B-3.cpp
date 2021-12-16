#include <iostream>

int main()
{
	int T = 0;
	int A, B = 0;
	std::cin >> T;
	for (int i = 0; i < T; i++)
	{
		std::cin >> A >> B;
		printf("%d\n", A + B);
	}
	return 0;
}