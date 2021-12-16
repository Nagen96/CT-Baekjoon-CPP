#include <iostream>

int main()
{
	int T;
	int A;
	int B;
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::cin >> T;

	for (int i = 1; i <= T; i++)
	{
		std::cin >> A >> B;
		std::cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << "\n";
	}
}