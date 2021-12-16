#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int T;
	int A;
	int B;

	std::cin >> T;
	for (int i = 0; i < T; i++)
	{
		std::cin >> A >> B;
		std::cout << A + B << "\n";
	}
}