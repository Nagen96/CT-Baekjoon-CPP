#include <iostream>

int main()
{
	int h, m = 0;
	std::cin >> h >> m;
	if (h == 0 && m < 45)
	{
		h = 23;
		m = m + 15;
	}
	else if (m < 45)
	{
		h -= 1;
		m = m + 15;
	}
	else
	{
		m -= 45;
	}
	printf("%d %d", h, m);
	return 0;
}