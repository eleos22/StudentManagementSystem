#include "Course.h"

// constructor
Course::Course(int id, int credits, const std::string& name, const std::string& instructor)
	: id(id), credits(credits), name(name), instructor(instructor) {}

// getter func defs
int Course::getId() const { return id; }
int Course::getCredits() const { return credits; }
std::string Course::getName() const { return name; }
std::string Course::getInstructor() const { return instructor; }

// setter func defs
void Course::setName(const std::string& name) { this->name = name; }
void Course::setInstructor(const std::string& instructor) { this->instructor = instructor; }