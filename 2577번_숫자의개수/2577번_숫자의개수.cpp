#include <iostream>
#include <string>

int main()
{
	int A;
	int B;
	int C;
	int mul;
	int count[10] = { 0 };
	std::string str;

	std::cin >> A;
	std::cin >> B;
	std::cin >> C;

	mul = A * B * C;
	str = std::to_string(mul);

	for (int i = 0; i < str.length(); i++)
	{
		
		switch (str[i])
		{
		case '0':
			count[0]++;
			break;
		case '1':
			count[1]++;
			break;
		case '2':
			count[2]++;
			break;
		case '3':
			count[3]++;
			break;
		case '4':
			count[4]++;
			break;
		case '5':
			count[5]++;
			break;
		case '6':
			count[6]++;
			break;
		case '7':
			count[7]++;
			break;
		case '8':
			count[8]++;
			break;
		case '9':
			count[9]++;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << count[i] << std::endl;
	}
}