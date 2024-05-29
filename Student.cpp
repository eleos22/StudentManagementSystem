#include "Student.h"

// constuctor
Student::Student(int id, const std::string& name, const std::string& email, const std::string dateOfBirth,
	const std::string& address, const std::string phoneNumber)
	: id(id), name(name), email(email), dateOfBirth(dateOfBirth), address(address), phoneNumber(phoneNumber) {}


// getter func defs
int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
std::string Student::getEmail() const { return email; }
std::string Student::getDateOfBirth() const { return dateOfBirth; }
std::string Student::getAddress() const { return address; }
std::string Student::getPhoneNumber() const { return phoneNumber; }
std::vector<int> Student::getEnrolledCourses() const { return enrolledCourses; }


// setter func defs
void Student::setName(const std::string& name) { this->name = name; }
void Student::setEmail(const std::string& email) { this->email = email; }
void Student::setDateOfBirth(const std::string& dateOfBirth) { this->dateOfBirth = dateOfBirth; }
void Student::setAddress(const std::string& address) { this->address = address; }
void Student::setPhoneNumber(const std::string& phoneNumber) { this->phoneNumber = phoneNumber; }

// other method func defs
void Student::enrollInCourse(int courseId) { enrolledCourses.push_back(courseId); }



