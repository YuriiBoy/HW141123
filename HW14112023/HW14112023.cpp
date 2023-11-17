#include "Header.h"
#include "Student.h"
#include "Helper.h"

int main()
{
    std::unique_ptr<Helper> h(new Helper());
    std::vector<Student> students = {
        Student("Petrenko Petro", 34, 7.8),
        Student("Sidorenko Stepan", 24, 6.9),
        Student("Ivanenko Ivan", 19, 8.4)
    };
    h->displayVector(students);
    
}
