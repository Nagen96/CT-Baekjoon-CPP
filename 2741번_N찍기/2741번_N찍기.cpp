﻿#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N;

	std::cin >> N;

	for (int i = 1; i <= N; i++)
	{
		std::cout << i << "\n";
	}
}