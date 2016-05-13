//Input and output example
#include <iostream>


int main(){

	int ivalue1, ivalue2, ivalue3, ivalue4;
	double dvalue1, dvalue2, dvalue3, dvalue4;

	std::cout << "This will only take" << std::endl << " in one integer input : \n";
	std::cin >> ivalue1;
	std::cin.ignore(2000, '\n');
	std::cout << "Variable value =  " << ivalue1 << std::endl;


	std::cout << std::endl << std::endl;

	std::cout << "This will only take two integer inputs seperate by a white space :";

	std::cin >> ivalue2 >> ivalue3;

	std::cout << "\nVariable values =  " << ivalue2 << " "<< ivalue3 << std::endl;

	std::cout << "\n\n";


	std::cout << "You can also " << std::endl << " chain text together, complete operations like ivalue3 * ivalue2 = " 
		<< ivalue3 * ivalue2 << " or call functions " << atoi("123");

/*
	char full_name[255];

	std::cout << "sends the output to the standard output as decided by the enviroment. In this case, it is the console/terminal";
	std::cout << "\n\nPlease enter your full name :";

	//std::cout "retrives a stream of characeters from the standard input stream as decided by the enviroment. Usually it is the keyboard."
	std::cin >> full_name;
	std::cin.ignore(2000, '\n');

	std::cout << "\n\nFull name " << full_name << std::endl << std::endl;
	std::cout << "\n\nPlease enter your full name :";
	std::cin.getline(full_name, 254);


	std::cout << "\n\nFull name " << full_name << std::endl << std::endl;

	//std::cout << "\n\nCin wont get text seperated by a white space " << full_name << ", you have to use std::cin.getline( char_array, max_len). :\n";	

	//std::cin.ignore(2000, '\n');

	std::cout << "\n\nCin wont get text seperated by a white space " << full_name << ", you have to use std::cin.getline( char_array, max_len). :\n";	
	std::cin.getline(full_name, 254);

	std::cout << "\n\nWorked this time " << full_name << std::endl << std::endl;
*/
}






















