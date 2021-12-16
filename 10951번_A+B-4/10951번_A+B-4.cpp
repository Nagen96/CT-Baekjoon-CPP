#include <iostream>

int main()
{
	int A;
	int B;
	
	while (scanf("%d %d", &A, &B) != EOF)
	{
		std::cout << A + B << "\n";
	}
}