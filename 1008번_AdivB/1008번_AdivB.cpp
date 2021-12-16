#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a >> b;
	double div = (double)a / b;

	std::cout << std::fixed;
	std::cout.precision(10);
	std::cout << div << std::endl;
}