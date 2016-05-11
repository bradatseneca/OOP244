#ifndef NAMESPACES_HPP
#define NAMESPACES_HPP

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


#endif /*namespaces.hpp*/