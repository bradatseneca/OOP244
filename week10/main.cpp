#include <iostream>
#include <cstring>

using std::cout;
using std::endl;


template <typename T>
bool greater(T a, T b){
	return a > b;
}


template <>
bool greater<const char *>(const char* a, const char* b){
	return strcmp(a, b) > 0;

}




int main(){


	cout << greater( 10, 1) << endl;
	cout << greater( "zabe", "brad") << endl;

	cout << greater(personA, personB)

/*

	cout << "Template \n";
	

	int z = 10; 
	int y = 20;

	cout << "z = " << z << endl;
	cout << "y = " << y << endl << endl;

	swap(z, y);

	cout << "z = " << z << endl;
	cout << "y = " << y << endl;

	char q[10] = "Hello"; 
	char w[10] = "Goodbye";

	cout << "q = " << q << endl;
	cout << "w = " << w << endl << endl;

	swap(q, w);

	cout << "q = " << q << endl;
	cout << "w = " << w << endl;



/*
	double a = 1.5; 
	double b = 2.5;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl << endl;

	swap(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	char q = 'a'; 
	char w = 'z';

	cout << "q = " << q << endl;
	cout << "w = " << w << endl << endl;

	swap(q, w);

	cout << "q = " << q << endl;
	cout << "w = " << w << endl;


	cout << "a = " << a << endl;
	cout << "z = " << z << endl;

	swap(a, z);

	cout << "a = " << a << endl;
	cout << "z = " << z << endl;

*/
	cout << endl;
}