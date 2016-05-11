// Functions.cpp

#include <cstdlib>

void CharArrayToUppercase(char* text, std::size_t len){
	for (size_t i = 0; i < len; i++){
		if (text[i] >= 97 && text[i] <= 122 ){
			text[i] -= 32;
		}	
	}
}

void CharArrayToLowercase(char* text, std::size_t len){
	for (size_t i = 0; i < len; i++){
		if (text[i] >= 65 && text[i] <= 90 ){
			text[i] += 32;
		}	
	}
}