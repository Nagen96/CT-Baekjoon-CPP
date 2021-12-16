#include <iostream>
#include <string.h>

static int _lp = 0;
static int _rp = 0;
static int _loopcount = 0;
static std::string _tmpText;

int main()
{
	std::cin >> _loopcount;

	for (int i = 0; i < _loopcount; i++)
	{
		std::cin >> _tmpText;
		for (int j = 0; j < _tmpText.length(); j++)
		{
			if (_lp >= _rp)
			{
				if (_tmpText[j] == 40)
				{
					_lp++;
				}
				else if (_tmpText[j] == 41)
				{
					_rp++;
				}
			}
		}
		if (_lp == _rp)
		{
			std::cout << "YES" << std::endl;
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
		_lp = _rp = 0;
	}

	return 0;
}