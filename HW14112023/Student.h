#pragma once
class Student

{
	std::string name;
	int age;
	double ave;
public:
	Student();
	Student(std::string name, int age, double ave);
	void display() const;
};

