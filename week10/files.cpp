
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>

class Person{
	
public:
	Person(int a = 0, std::string n = "") : age(a), name(n) {};
	int age;
	std::string name;
    //void readFromFile(fstream&);
};

std::ofstream& operator<<(std::ofstream& of, const Person& p){
	of << p.name << " " << p.age << "\n";
	return of;
}

std::ifstream& operator>>(std::ifstream& of, Person& p){
	of >> p.name >> p.age;
	return of;
}


int main(){
	//Person p(30, "Brad");
	Person p;

	std::ifstream file("People.txt");

	while(file >> p){

	std::cout << p.name << " " << p.age << std::endl;
}




} 









/*


int main(){



	std::fstream file("val.txt", std::ios::in);

	if (file.is_open()){
		//int a, s, d, f, g;
		int a[5];
		char s[5][10];
		int i = 0;
		int temp;
		char ctemp[10];
		while (!file.eof()){
			file >> temp >> ctemp
			a[i] = temp;
			strcpy(s[i], ctemp);
			i++;
		}

		//file >> a >> s >> d >> f >> g;

		for (int i = 0; i < 5; ++i)
		{
			std::cout << " " << a[i] << " " << s[i] << std::endl;
		}
		std::cout << std::endl;
	}else{
		std::cout << "File not found" << std::endl;
	}



	std::fstream outfile;//("out.txt", std::ios::trunc );

	outfile.open("out.txt", std::ios::out);
	

	if(outfile.is_open()){

		outfile <<  "Hello, it's me again.\n";


	}
	else{
		std::cout << "File not found" << std::endl;
	}

	outfile.close();


	
}


*/
























