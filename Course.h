#pragma once

#include<string>
#include<vector>

using namespace std;

class Course {
private:
	int id;
	int credits;
	std::string name;
	std::string instructor;

public:
	Course(int id, int credits, const std::string& name, const std::string& instructor);

	// getters
	int getId() const;
	int getCredits() const;
	std::string getName() const;
	std::string getInstructor() const;


	// setters
	void setName(const std::string& name);
	void setInstructor(const std::string& instructor);



};