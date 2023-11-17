#include "Header.h"
#include "Student.h"

Student::Student() : name("-"), age(0), ave(0.0)
{}

Student::Student(std::string name, int age, double ave)
	: name(name), age(age), ave(ave)
{}

void Student::display() const
{
	std::cout << std::setw(20) << name;
	std::cout << std::setw(10) << age;
	std::cout << std::setw(10) << ave;
	std::cout << std::endl;
}
