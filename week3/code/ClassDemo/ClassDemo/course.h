#ifndef COURSE_H
#define COURSE_H

#include "student.h"

#define TITLE_LEN 255
#define COURSE_CODE_LEN 7

class Course{

	char m_title[TITLE_LEN];
	char m_course_code[COURSE_CODE_LEN];
	int m_no_of_students;
	Student m_students[30];
public:
	Course();
	~Course();
	void set_title(char*);
	void set_course_code(char*);
	void add_student(Student);
	void display_v1() const;
	void display_v2() const;

};


#endif