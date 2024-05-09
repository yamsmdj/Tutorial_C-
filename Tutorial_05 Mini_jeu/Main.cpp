

#include <ctime>
#include <iostream>

int main()
{
	std::srand(time(nullptr));

	int max_try = 6;
	int mystery_number = std::rand() % 100;
	int numero = 0;



	while (max_try != 0)
	{
	std::cout << "Veuillez entre un numero" << std::endl;
	std::cin >> numero;

		max_try --;

		if (numero == mystery_number)
		{
		std::cout << "Bravo, vous avez trouvez le nombre mystere !";
		break;
		}
		else if (numero > mystery_number && max_try != 0)
		{
			std::cout << "Nombre trop grand , Il vous reste : " << max_try << "chances" << std::endl;
		}
		else if (numero < mystery_number && max_try != 0)
		{
			std::cout << "Nombre trop petit , Il vous reste : " << max_try << "chances" << std::endl;
		}
		else if (max_try == 0)
		{
			std::cout << "Dommage ta perdu le chiffre etait : " << mystery_number << std::endl;
			break;
		}

	}

	
	
	return 0;
}