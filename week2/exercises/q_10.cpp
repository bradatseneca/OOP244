#include <iostream>

#include "person.h"


int main(){
	int input;
	std::cout << "How many people would you like to enter into the address book? ";
	std::cin >> input;+

	Person* people = new Person[input];

	for (int i = 0; i < input; ++i){
		std:cout << "\nEnter a person #"<< i " name. ";
		char input[80];
		std::cin >> input
		strcpy(people[i].name, input);
		std:cout << "\nEnter thier email. ";		
		std::cin >> input
		strcpy(people[i].email input);
		std:cout << "\nEnter thier address ";		
		std::cin >> input
		strcpy(people[i].address, input);
		std:cout << "\nEnter thier phone number ";		
		char phone[15];
		std::cin >> phone;
		strcpy(people[i].phone, phone);
	}

	std::cout << "\nThe average of the values entered was " << average(array, input) << std::endl;
	

}

double average(double* list, int num){
	double total = 0.0;
	for (int i = 0; i < num; ++i){
		total += list[num];		
	}
	return total / num;
}