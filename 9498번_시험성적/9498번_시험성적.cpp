#include <iostream>

int main()
{
	int score = 0;

	std::cin >> score;

	if (score <= 100 && score >= 90)
	{
		std::cout << "A" << std::endl;
	}
	else if (score < 90 && score >= 80)
	{
		std::cout << "B" << std::endl;
	}
	else if (score < 80 && score >= 70)
	{
		std::cout << "C" << std::endl;
	}
	else if (score < 70 && score >= 60)
	{
		std::cout << "D" << std::endl;
	}
	else
	{
		std::cout << "F" << std::endl;
	}

	return 0;
}