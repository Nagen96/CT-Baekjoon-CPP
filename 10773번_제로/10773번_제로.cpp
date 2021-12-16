#include <iostream>
#include <random>
#include <stack>

int main()
{
	int _loopCount;
	int _sum = 0;
	int _stackSize;
	std::stack<int> st;
	while (true)
	{
		std::cin >> _loopCount;
		if (1 <= _loopCount && _loopCount <= 100000)
		{
			break;
		}
	}
	for (int i = 0; i < _loopCount; i++)
	{
		int intTmp;
		while (true)
		{
			std::cin >> intTmp;
			if (0 <= intTmp && intTmp <= 1000000) { break; }
		}
		if (st.empty() && (intTmp == 0))
		{
			i--;
			break;
		}
		else
		{
			if (intTmp == 0) { st.pop(); }
			else { st.push(intTmp); }
		}
	}
	_stackSize = st.size();
	for (int i = 0; i < _stackSize; i++)
	{
		int intTmp = st.top();
		_sum += intTmp;
		st.pop();
	}
	std::cout << _sum << std::endl;
}