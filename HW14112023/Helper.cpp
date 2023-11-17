#include "Header.h"
#include "Helper.h"

void Helper::displayVector(std::vector<Student> s)
{
	int Q = s.size();
	for (int i = 0; i < Q; i++) {
		std::cout << i + 1;
		s[i].display();
	}
	std::cout << std::endl;
}
			