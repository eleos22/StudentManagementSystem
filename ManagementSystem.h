#pragma once

#include "Student.h"
#include "Course.h"

#include<string>
#include<vector>

class ManagementSystem {
private:
	vector<Student> students; // vector to hold student objs
	vector<Course> courses;  // vector to hold course objs

public:
	void addStudent(const Student& student);
	void updateStudent(int id, const Student& updatedStudent);
	void deleteStudent(int id);
	Student* getStudent(int id);
	void addCourse(const Course& course);
	void updateCourse(int id, const Course& updatedCourse);
	void deleteCourse(int id);
	Course* getCourse(int id);
	void listAllStudents() const;
	void listAllCourses() const;

};