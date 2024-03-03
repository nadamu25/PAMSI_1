#include <iostream>
#include <stdlib.h>
#include <time.h>



//uzyskiwanie wiadomosci
std::string get_message(int len) {

	std::string message;
	srand(time(NULL));

	for(int i = 0; i < len; i++) {
		char y = rand();
		message += y;
	}

	return message;
}

//struktura pakietu n wiadomosci
struct package {
	int n;
	std::string pack;
};


int main() {

	//uzyskiwanie wiadomosci
	int len;
	std::string message;

	std::cout << "Podaj dlugosc wiadomosci: ";
	std::cin >> len;
	message = get_message(len);
	std::cout << message << std::endl;

	//dzielenie wiadomosci
	int package_num;
	std::cout << "Podaj ilosc pakietow: ";
	std::cin >> package_num;
	int package_len = len/package_num;
	std::cout << package_len;


	
	return 0;
}
