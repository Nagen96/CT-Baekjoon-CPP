#include <iostream>

int main()
{
	int A = 0;
	int B = 0;

	std::cin >> A;
	std::cin >> B;

	if (A > B)
	{
		std::cout << ">";
	}
	else if (A < B)
	{
		std::cout << "<";
	}
	else
	{
		std::cout << "==";
	}
	
	return 0;
}