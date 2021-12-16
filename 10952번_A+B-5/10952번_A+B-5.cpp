#include <iostream>

int main()
{
	int A;
	int B;

	while (true)
	{
		std::cin >> A >> B;
		if (A == 0 && B == 0)
		{
			break;
		}
		else
		{
			std::cout << A + B << "\n";
		}
	}
}