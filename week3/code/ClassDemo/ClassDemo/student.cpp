#include "student.h"

#include <iostream>
#include <iomanip>




Student::Student()
{
}

Student::~Student()
{
}

void Student::set_name(char* name){
	strcpy_s(m_name, name);
}

void Student::set_student_no(char* student_no){
	strcpy_s(m_student_no, student_no);
}

char* Student::get_name() const{
	return (char*)m_name;
}

char* Student::get_student_no() const{
	return (char*)m_student_no;
}

void Student::display() const{
	std::cout << std::setw(50) << m_name << m_student_no << std::endl;
}