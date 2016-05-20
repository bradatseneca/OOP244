#include <iostream>

// Forward declerations of function prototypes
// Each function has its own unique siganture
// Pass by reference




void swap(int& a, int& b);



//Pass by address
void swap(int* a, int* b);


//void swap(int a, int b);
void swap(int& a, int& b, int& c);
void swap(bool& a, bool& b);
void swap(double& a, double& b);





//Function with default parameters
void display(int bob, int alice, int steve, int lady, int carol);

int main(){
	/*
	int a = 1;
	int b = 2;
	std::cout << "\na = " << a << "\nb =  " << b;
	swap(&a,&b);
	std::cout << "\n\na = " << a << "\nb =  " << b;

	std::cout << "\na = " << a << "\nb =  " << b;
	swap(a,b);
	std::cout << "\n\na = " << a << "\nb =  " << b;
	double z = 1.001;
	double y = 999.999;

	std::cout << "\n\nz = " << z << "\ny =  " << y;
	//swap(z, y);
	std::cout << "\n\nz = " << z << "\ny =  " << y;
*/
	display(0, 10, 20, 30, 40);






}


// Definitions of functions

void swap(int& a, int& b){
	std::cout << "\nPass by reference";
	int temp = a;
	a = b;
	b = temp;
}
void swap(int a, int b){
	std::cout << "\nPass by copy/value";
	int temp = a;
	a = b;
	b = temp;
}
void swap(int* a, int* b){
	std::cout << "\nPass by address";
	int temp = *a;
	*a = *b;
	*b = temp;
}










// Can not have more then one function definition
/*
void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}*/

void swap(bool& a, bool& b){
	bool temp = a;
	a = b;
	b = temp;
}
void swap(double& a, double& b){
	double temp = a;
	a = b;
	b = temp;
}

void display(int a, int b, int c, int d, int e){
	std::cout << '\n' << a << ", " << b << ", " << c << ", " << d <<'\n';
}