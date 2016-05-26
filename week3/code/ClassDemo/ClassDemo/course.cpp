#include "course.h"


#include <iostream>
#include <iomanip>
#include <cstring>


Course::Course()
{
	m_no_of_students = 0;
}

Course::~Course()
{
}

void Course::set_title(char* title){
	int s = sizeof(title);
	strcpy_s(m_title, title);
}

void Course::set_course_code(char* course_code){
	strcpy_s(m_course_code, course_code);
}

void Course::add_student(Student student){
	if (!(m_no_of_students < 30)){
		std::cout << "Sorry, no more students can be added to this Course\n";
	}else{
		m_students[m_no_of_students] = student;		
		++m_no_of_students;
	}
}



void Course::display_v1() const {
	std::cout << "Course Name : " << std::left << std::setw(45) << m_title << "Course Code : " << m_course_code <<  std::endl;
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	std::cout << std::left << std::setw(25) << "Student Name" << "Student Number\n";
	std::cout << "-------------------------------------------------------------------------------" << std::endl;
	for (int i = 0; i < m_no_of_students; ++i){
		m_students[i].display();
	}
}

void Course::display_v2() const{
	std::cout << std::setw(25) << "Course Name : " << m_title << "Course Code : " << m_title <<  std::endl;
	std::cout << std::setw(50) << std::setfill('-') << "\n";
	std::cout << std::setw(25) << "Student Name" << "Student Number\n";
	std::cout << std::setw(50) << std::setfill('-') << "\n";
	for (int i = 0; i < m_no_of_students; ++i){
		std::cout << std::setw(50) << m_students[i].get_name() << m_students[i].get_student_no() << std::endl;
	}
}