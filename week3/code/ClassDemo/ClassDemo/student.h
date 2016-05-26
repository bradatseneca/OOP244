#ifndef STUDENT_H
#define STUDENT_H

#define NAME_LEN 255
#define STU_NO_LEN 13

class Student{

	char m_name[NAME_LEN];	
	char m_student_no[STU_NO_LEN];

public:

	Student();
	~Student();

	void set_name(char*);
	void set_student_no(char*);
	char* get_name() const;
	char* get_student_no() const;
	void display() const;



};



#endif