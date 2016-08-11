#include <iostream>

/*
template <class T>
void swap(T& a, T& b){
	T temp = a;
	a = b;
	b = temp;
}

template <>
void swap<char>(char& a, char& b){
	T temp = a;
	a = b;
	b = temp;
}*/





//header
template <typename T>
class Sort{
public:

	void bubble(T*, int);

	void swap(T& a, T& b){
		T temp = a;
		a = b;
		b = temp;
	};

	
};


//implementation file
template <typename Type>
void Sort<Type>::bubble(Type* array, int n){
	for (int i = 0; i < n - 1; ++i)
	{	
		for (int j = i + 1; j < n; ++j)
		{
			if (array[i] > array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
}












using std::cout;
using std::endl;
int main(){

	int a[10] { 100, 7, 2, 9, 12, 54, 23, 8, 34, 10};

	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	Sort<int> s;
	Sort<double> sd;

	s.bubble(a, 10);


	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	double z[10] { 100.23, 0.7, 2, 95, 0.12, 54, 23, 0.8, 34, 10.5};

	for (int i = 0; i < 10; ++i)
	{
		cout << z[i] << " ";
	}

	cout << endl;



	sd.bubble(z, 10);


	for (int i = 0; i < 10; ++i)
	{
		cout << z[i] << " ";
	}

	cout << endl;



Person p[10]
.
.
.

Sort<Person> sp;
sp.sort(p, 10)

}