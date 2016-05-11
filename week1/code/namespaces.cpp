#include <iostream>


namespace aplha{

	int value = 0;


}

namespace bravo{
	int value = 5;

	int double_a_value(int num){
		return num * 2;
	}

	namespace experimental{
		int value = 10;

		int double_a_value(int num){
			return num << 2;
		}
	}
}

int main(){
	std::cout << "Namespace experimental - value = " << bravo::double_a_value(10) << std::endl;

}



	//std::cout << "Namespace alpha - value = " << aplha::value << std::endl;
	//std::cout << "Namespace bravo - value = " << bravo::value << std::endl;
	//std::cout << "Namespace experimental - value = " << experimental::value << std::endl;
	//std::cout << "Namespace experimental - value = " << bravo::double_a_value(10) << std::endl;