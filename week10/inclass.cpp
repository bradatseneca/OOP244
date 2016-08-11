#include <iostream>

using namespace std;


template <class type>
class Sort{

public:

	void bubble(type* array, int n);

};


template <class t>
void Sort<t>::bubble(t* array, int n){

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (array[i] < array[j]){
				t temp = array[i]; 
				array[i] = array[j]; 
				array[j] = temp;
			}
		}
	}

}


int main(){
	int z[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 0; i < 10; ++i)
	{
		cout << z[i] << " ";
	}
	cout << endl;

	Sort<int> s;



	s.bubble(z, 10);

for (int i = 0; i < 10; ++i)
	{
		cout << z[i] << " ";
	}
	cout << endl;



}



