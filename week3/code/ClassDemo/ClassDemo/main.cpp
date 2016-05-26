#include "course.h"
#include <string.h>





int main(){

	Course course;

	course.set_title("Intro into OOP using c++\0");
	course.set_course_code("OOP244\0");

	
	
	Student s1;

	s1.set_name("Brad");
	s1.set_student_no("123456");

	course.add_student(s1);

	Student s2;

	s2.set_name("Carol");
	s2.set_student_no("123456");

	course.add_student(s2);

	Student s3;

	s3.set_name("Andrew");
	s3.set_student_no("123456");

	course.add_student(s3);

	Student s4;

	s4.set_name("Stephen");
	s4.set_student_no("123456");

	course.add_student(s4);

	Student s5;

	s5.set_name("Kyra");
	s5.set_student_no("123456");

	course.add_student(s5);

	Student s6;

	s6.set_name("Jamie");
	s6.set_student_no("123456");

	course.add_student(s6);

	Student s7;

	s7.set_name("Steve");
	s7.set_student_no("123456");

	course.add_student(s7);

	Student s8;

	s8.set_name("Penny");
	s8.set_student_no("123456");

	course.add_student(s8);
	


	course.display_v1();


}