#include <iostream>
#include <cstring>

using namespace std;

class String {

	char* _character;
	int _size;
public:

	String() : _character(nullptr), _size(0) {};
	

	String& operator+=(char*);
	~String() { delete [] _character; }
	const char* get() { return _character; }


};


String& String::operator+=(char* other) {

	if (other != nullptr) {
		if (_character == nullptr) {
			_character = new char[strlen(other) + 1];
			strcpy(_character, other);
			_size += strlen(other) + 1;
		}
		else {
			char* temp = new char[_size + strlen(other) + 1];
			_size = _size + strlen(other) + 1;
			strcpy(temp, _character);
			strcat(temp, other);
			delete[] _character;
			_character = temp;
		}
	}
	return *this;
}



int main() {

	String s;

	//cout << s._character << endl;

	s += "Test ";

	cout << s.get() << endl;

	s += "Test";

	cout << s.get() << endl;

	return 0;
}