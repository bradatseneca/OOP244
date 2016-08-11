#include <iostream>

class Foo{

};


template <typename Type, int n>
class Array{

	Type _data[n];

public:

	Type& operator[](int i);
	
	Type& at(int i){
		return _data[i];
	}


};

template <typename Type, int n>
Type& Array<Type, n>::operator[](int i){
	return _data[i];
}


int main(){

	Array<int, 5> a;

	a[0] = 10;
	a[1] = 20;
	a[2] = 30;

	std::cout << a[0] << " " << a[1] << " " << a[2] << " " << std::endl;

	Array<char, 5> z;

	z[0] = 'a';
	z[1] = 'b';
	z[2] = 'c';

	std::cout << z[0] << " " << z[1] << " " << z[2] << " " << std::endl;

	Array<Foo, 5> f;


}






