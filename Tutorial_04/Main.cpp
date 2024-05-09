
#include <iostream>;

int main()
{
	int table = 0;
	std::cin >> table;
	std::cin.ignore();

	for (int i = 0; i <= 10; ++i)
	{
		std::cout << i * table << std::endl;
	}

	std::cin.ignore();
	return 0;
}