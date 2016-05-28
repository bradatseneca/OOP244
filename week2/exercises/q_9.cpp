#include <iostream>

double average(double*, int);

int main(){
	int input;
	std::cout << "How many numbers would you like to enter fo caculate the average? ";
	std::cin >> input;

	double* array = new double[input];

	for (int i = 0; i < input; ++i){
		std:cout << "\nEnter a number - ";
		double num;
		std::cin >> num;
		array[i]  = num;
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