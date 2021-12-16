#include <iostream>

int main()
{
	int a;
	int b;
	int bDigit[3];

	std::cin >> a >> b;

	bDigit[0] = b % 10; 
	bDigit[1] = b / 10 % 10;
	bDigit[2] = b / 100 % 10;

	std::cout << a * bDigit[0] << std::endl;
	std::cout << a * bDigit[1] << std::endl;
	std::cout << a * bDigit[2] << std::endl;
	std::cout << a * b << std::endl;
}