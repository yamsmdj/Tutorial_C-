
#include <iostream>

int main() {
	bool condition = false;
	
	int age = 14;


	std::cout << "En quel année votre mere vous a mis au monde ?" << std::endl;
	std::cin >> age;
	std::cin.ignore();

	std::cout << (age <= 2006 ? "majeur" : "mineur") << std::endl;
	std::cin.ignore();
	return 0;
}