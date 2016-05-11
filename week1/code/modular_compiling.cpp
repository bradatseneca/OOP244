//Modular Code
#include <iostream>

#include "functions.hpp"


int main(){

	char text[80]{"Hello. My name is Brad"};

	std::cout << text << "\n\n";

	CharArrayToLowercase(text, sizeof(text));
	std::cout << text << "\n\n";

	CharArrayToUppercase(text, sizeof(text));
	std::cout << text << "\n\n";
}