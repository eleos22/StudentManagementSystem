#include "ManagementSystem.h"
#include <iostream>
using namespace std;

void ManagementSystem::addStudent(const Student& student) 
{ 
	students.push_back(student); 
}

void ManagementSystem::updateStudent(int id, const Student& updatedStudent)
{
	for (auto& student : students)
	{
		if (student.getId() == id)
		{
			student = updatedStudent;
		}
	}
}

// In this function, This line of code removes a student from the 'students' vector based on their ID.
// It uses the std::remove_if algorithm along with a lambda function as a predicate.
// The lambda function compares the ID of each student with the provided 'id'.
// If a student's ID matches the given 'id', the lambda returns true, indicating that the student should be removed.
// std::remove_if rearranges the elements so that all matching elements are moved to the end of the range.
// Finally, students.erase removes all elements from the returned iterator to the end of the range,
// effectively removing all students whose ID matches the given 'id'.
void ManagementSystem::deleteStudent(int id)
{
	students.erase(std::remove_if(students.begin(), students.end(),
		[id](const Student& student) {return student.getId() == id; }), students.end());
}



Student* ManagementSystem::getStudent(int id)
{
	for (auto& student : students)
	{
		if (student.getId() == id)
		{
			return &student;
		}
	}
	return nullptr;
}



void ManagementSystem::addCourse(const Course& course)
{
	courses.push_back(course);
}



void ManagementSystem::updateCourse(int id, const Course& updatedCourse)
{
	for (auto& course : courses)
	{
		if (course.getId() == id)
		{
			course = updatedCourse;
			return;
		}
	}
}



void ManagementSystem::deleteCourse(int id)
{
	courses.erase(std::remove_if(courses.begin(), courses.end(),
		[id](const Course& course) {return course.getId() == id;  }), courses.end());

}



Course* ManagementSystem::getCourse(int id)
{
	for (auto& course : courses)
	{
		if (course.getId() == id)
		{
			return &course;
		}
	}
	return nullptr;

}



void ManagementSystem::listAllStudents() const
{
	for (const auto& student : students)
	{
		std::cout << "Name: " << student.getName() << endl;
		std::cout << "ID: " << student.getId() << std::endl;
		std::cout << "Email: " << student.getEmail() << std::endl;
		std::cout << "Date of Birth: " << student.getDateOfBirth() << std::endl;
		std::cout << "Address: " << student.getAddress() << std::endl;
		std::cout << "Phone Number: " << student.getPhoneNumber() << std::endl;
		cout << endl;
	}
	cout << endl;
}



void ManagementSystem::listAllCourses() const
{
	for (const auto& course : courses)
	{
		std::cout << "Name: " << course.getName() << endl;
		std::cout << "ID: " << course.getId() << std::endl;
		std::cout << "Credits: " << course.getCredits() << std::endl;
		std::cout << "Instructor: " << course.getInstructor() << std::endl;
		cout << endl;
	}
	cout << endl;
}


