#include <stdio.h>

void half(int number, double& result) {
	result = number * 0.5f;
}

int main() {

	// Question #3

	char text[18] = "h@feerlnll86od3\0";

	for (int i = 0; i < sizeof(text); i += 3) {
		printf("%c\n", text[i]);
	}


	// Question #4

	int x = 1;

	if (x != 1) {
		int y = 7 + x;   // what is the value of this y? __________________
		printf("y = %d \n", y);
	}
	else {
		int z = 5;
		int x = 10;
		if (x == 1) {
			int a = x + z; // what is the value of this x? __________________	
			printf("x = %d\n", x);
		}
		else
			z = 9;
		int b = x + z; // what is the value of this z?_____________ b?_____________	
		printf("z = %d\n", z);
		printf("b = %d\n", b);
	}

	// Question #5

	struct Person {
		char name[80];
		int age;
		double wage;
		bool saved;
	} p1 = { "Brad", 32, 25.50, true };

	Person p2 { "Brad", 32, 25.50, true };

	// Question 6

	double num1 = 0;
	int num2 = 5;

	half(num2, num1);

	printf("%f\n", num1);


	

}

