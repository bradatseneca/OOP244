#include <iostream>
#include "bmi_caculator.h"


/*
Microsoft Command Line Compile
	To compile on the Microsoft development command line, open the Developer command line. Navigate to the
	folder that contains you source files. The command to compile is the following:

	cl bmi.cpp bmi_caculator.cpp

Linux/g++
	In the terminal, navigate to the folder that contains your source code. The command to compile your
	programming using g++ is teh following.

	g++ -std=c++11 bmi.cpp bmi_caculator.cpp



*/


int main(){

	std::cout << "Would you like to caculate you BMI in using pounds and inches or kilograms and meters?\n"; 
	std::cout << "1) Pounds and inches\n"; 
	std::cout << "2) Kilograms and meters\n"; 


	int user_choice = 0;
	std::cin >> user_choice;
	
	double weight = 0.0;
	std::cout << "Please enter your weight\n"; 
	std::cin >> weight;

	double height = 0.0;
	std::cout << "Please enter your height\n"; 
	std::cin >> height;


	std::cout << "\n\nYour BMI is ";
	if (user_choice == 1){
		std::cout << bmi::bmi_lbs(height, weight);
	}else if (user_choice == 2){
		std::cout << bmi::bmi_kgs(height, weight);
	}

}