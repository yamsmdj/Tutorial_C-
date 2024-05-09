
#include <iostream>

int main() 
{
	int age = 0, b = 0;
	
	std::cout << "Enter a then b : " << std::endl;
	std::cin >> age;
	std::cout << "Now  b : ";
	std::cin >> b;
	std::cout << "Voici votre deux chiffre : " << age << "," << b << std::endl;
	std::cout << "Voici votre chiffre additionner : " << age + b << std::endl;
	std::cin.ignore();


	return 0;
}