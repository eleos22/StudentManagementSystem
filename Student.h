#pragma once

#include<string>
#include<vector>

using namespace std;

class Student {
private:
	int id;
	std::string name;
	std::string email;
	std::string dateOfBirth;
	std::string address;
	std::string phoneNumber;
	std::vector<int> enrolledCourses; // maek sure to implement this soon

public:
	Student(int id, const std::string& name, const std::string& email, const std::string dateOfBirth,
		const std::string& address, const std::string phoneNumber);

	// getters
	int getId() const;
	std::string getName() const;
	std::string getEmail() const;
	std::string getDateOfBirth() const;
	std::string getAddress() const;
	std::string getPhoneNumber() const;
	std::vector<int> getEnrolledCourses() const;

	// setters
	void setName(const std::string& name);
	void setEmail(const std::string& email);
	void setDateOfBirth(const std::string& dateOfBirth);
	void setAddress(const std::string& address);
	void setPhoneNumber(const std::string& phoneNumber);

	// other methods
	void enrollInCourse(int courseId);


};