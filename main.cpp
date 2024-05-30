#include <iostream>
#include "ManagementSystem.h"

/*
Notes:
	5-28-24 - Create a function to create student from user input &
	          make sure that there is a validation check 1/2 
	5-28-24 - Create default constructor
	5-28-24 - Potentitally include the big three



*/

Student createStudentFromInput()
{
	// variables to create student
	int id;
	std::string name, email, dateOfBirth, address, phoneNumber;

	// prompt user
	cout << "ID: ";
	cin >> id;
	cin.ignore();

	cout << "Name: ";
	getline(cin, name);

	cout << "Email: ";
	getline(cin, email);

	cout << "Date Of Birth: ";
	getline(cin, dateOfBirth);

	cout << "Address: ";
	getline(cin, address);

	cout << "Phone Number: ";
	getline(cin, phoneNumber);

	// pass variables holding user input into new student object
	Student newStudent(id, name, email, dateOfBirth, address, phoneNumber);

	return newStudent;
}

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
	/*
		- Create prompt menu and options for user, based of Mangement System
	
	*/
	// create prompt func for user
	int numStudents;
	std::cout << "Welcome" << std::endl;
	std::cout << "Please enter number of students to be created: ";
	std::cin >> numStudents;

	for (int i = 0; i < numStudents; i++)
	{
		Student newStudent = createStudentFromInput();

		std::cout << "Student created successfully!" << std::endl;

		int choice;
		std::cout << "Add student to list?(1 yes/ 2 no): ";
		std::cin >> choice;
		if (choice == 1)
		{
			std::cout << "Student added to list successfully!" << std::endl;
				system.addStudent(newStudent);
		}
		else if (choice != 1)
		{
			std::cout << "Student not added!" << std::endl;
		}
		

		std::cout << "Would you like to see the list?(1 yes/ 2no): ";
		std::cin >> choice;
		if (choice == 1)
		{
			system.listAllStudents();
		}
		else if (choice != 1)
		{
			std::cout << "GoodBye" << endl;
		}



	}




	return 0;
}