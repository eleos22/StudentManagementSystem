#include <iostream>
#include "ManagementSystem.h"

/*
Notes:
	5-28-24 - Create a function to create student from user input &
	          make sure that there is a validation check
	5-28-24 - Create default constructor
	5-28-24 - Potentitally include the big three



*/
int main()
{
	// create a management system obj
	ManagementSystem system;

	// create and add a few students for testing
	Student student1(123, "John Doe", "john@example.com", "2000-01-01", "123 Main St", "555-555-555");
	Student student2(456, "Jane Doe", "jane@example.com", "2001-02-02", "456 Main St", "777-777-777");
	// add students to system
	system.addStudent(student1);
	system.addStudent(student2);

	// create course objs
	Course course1(135, 3, "Math 100", "Prof. John");
	Course course2(137, 3, "English 100", "Prof Jane");
	// add course to system
	system.addCourse(course1);
	system.addCourse(course2);

	// List all students and courses
	std::cout << "Students:" << std::endl;
	system.listAllStudents();

	std::cout << "Courses:" << std::endl;
	system.listAllCourses();

	
	// below for testing only & creating a student from use input

	



	return 0;
}