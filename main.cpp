#include <iostream>
#include <stdlib.h>
#include <time.h>



std::string get_message(int len) {

	std::string message;
	srand(time(NULL));

	for(int i = 0; i < len; i++) {
		char y = rand();
		message += y;
	}

	return message;

}

int main() {
	int len;
	std::string message;
	std::cout << "Podaj dlugosc wiadomosci:" << std::endl;
	std::cin >> len;
	message = get_message(len);
	std::cout << message << std::endl;
	
	return 0;
}
