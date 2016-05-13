#include <iostream>


namespace alpha{

	int value = 10;
	
}

namespace bravo{
	int value = 5;

	int double_a_value(int num){
		return num * 2;
	}

	namespace experimental{
		int value = 75;

		int double_a_value(int num){
			std::cout << "Exp\n";
			return num << 4;
		}
	}
}

using namespace alpha;
//using namespace bravo::experimental;
using namespace std;

int main(){

	int value = 100;


	cout << "Namespace - value = " << value << std::endl;
	std::cout << "Namespace alpha - value = " << alpha::value << std::endl;
	std::cout << "Namespace bravo - value = " << bravo::value << std::endl;
	std::cout << "Namespace bravo::experimental - value = " << bravo::experimental::value << std::endl;

	std::cout << "Namespace - double value = " << bravo::double_a_value(bravo::value) << std::endl;
	std::cout << "Namespace - value = " << bravo::experimental::double_a_value(value) << std::endl;

	//cout << "Namespace - value = " << double_a_value(value) << std::endl;
	//cout << "Namespace - value = " << double_a_value(value) << std::endl;
	//std::cin >>  value;


	//
	/*
	
	bravo::value++;

	std::cout << "Namespace bravo - value = " << bravo::value << std::endl;

	std::cout << "Namespace experimental - value = " << bravo::experimental::value << std::endl;

	std::cout << "Namespace experimental - value = " << bravo::double_a_value(10) << std::endl;

	std::cout << "Namespace experimental - value = " << bravo::experimental::double_a_value(10) << std::endl;
	*/
}



	
	
	//std::cout << "Namespace experimental - value = " << experimental::value << std::endl;
	//std::cout << "Namespace experimental - value = " << bravo::double_a_value(10) << std::endl;