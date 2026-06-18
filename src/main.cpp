#include <iostream>
#include <iomanip>
#include <map>
#include "mylib.h"
#include "../libs/student/Student.h"
#include "../libs/course/Course.h"
#include "../libs/dept/Dept.cpp"
#include "../libs/college/College.h"
template <typename T> std::ostream& operator<<(std::ostream& outs, const std::vector<T> s);
// td::ostream& operator<<(std::ostream& outs, const std::vector<Student> s);

char LINE[] = {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',
                '-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',
                '-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',
                '-','-','-','-','-','-','-','-','-','-',};

// void displayMainBanner();
// void displayMainMenu();
void testMMAP();
int main()
{

    testMMAP();
    // char userInput = 'n';
    // int menuSection = 0;
    // do 
    // {
    //     displayMainBanner();
    //     displayMainMenu();
    //     std::cin >> menuSection;
    //     switch (menuSection)
    //     {
    //     case 1:
    //         // Add Student
    //         break;
    //     case 2:
    //         //Add Profressor
    //         break;
    //     case 3:
    //         // Add College
    //         break;
    //     case 4:
    //         //College Information (Each Dept in Major with basic info like, 
    //         //     total enrolled, courses offered)
    //         break;
    //     default:
    //         std::cout << "Quit Program? (Y / N)\n>";
    //         std::cin >> userInput;
    //         break;
    //     }
    // }while(userInput != 'Y');
    return 0;
}
void testMMAP()
{

    // std::vector<std::vector<Course, Student>> _mmap(std::vector<Course, Student>(Course(),Student()));
    /* CHICANO = 0, ECON = 1, MATH = 2, PHILOS = 3 */
    std::vector<std::string> _departments = {"CHICANO", "ECON", "MATH", "PHILOS"};
    /*  CREATING STUDENTS */
    int id = 101;
    std::vector<Student> students;
    students.push_back(Student("Victor", "CHICANO", "NONE", 3.4, id));
    students.push_back(Student("Mike", "PHILOS", "NONE", 3.6, ++id));
    students.push_back(Student("leilani", "ECON", "MATH", 3.76, ++id));
    students.push_back(Student("Alfonso", "PHILOS", "NONE", 3.51, ++id));
    students.push_back(Student("Juan", "MATH", "NONE", 3.45, ++id));
    students.push_back(Student("Joe", "ECON", "Astronomy", 3.45, ++id));
    students.push_back(Student("Marie", "PHILOS", "NONE", 3.55, ++id));
    students.push_back(Student("Curry", "MATH", "ECON", 3.05, ++id));
    students.push_back(Student("Tom", "CHICANO", "NONE", 3.15, ++id));
    /* CREATING COURSES */
    std::vector<Course> chicano;
    chicano.push_back(Course("CHICANO","Introduction to Chicano History", 50, 3));
    chicano.push_back(Course("CHICANO","Mexican and Chicano Art History",130, 3));
    // WHAT CAN THIS SERVE AS? WHY DO I NEED TO STORE THESE TWO VARIABLES
    std::map<int, std::vector<std::string>> studentsChicanoCourses;
    studentsChicanoCourses.insert( std::pair<int, std::vector<std::string>>(chicano[0].getCourseNumber(), std::vector<std::string>({"Marie", "Joe"})));
    std::cout << studentsChicanoCourses[50]; //prints the students names in chicano 50 course 
    
}
void displayMainBanner()
{
    std::cout << LINE << std::endl;
    std::cout << "          ";
    std::cout << std::setfill(' ') << std::left << std::setw(50) << "University of California, Berkeley" <<
    std::right << std::endl;
    std::cout << LINE << std::endl << LINE << std::endl;
}
void displayMainMenu()
{
    std::cout << "Main Menu:\n1] Add Student\n2] Add Professor\n3]Add College\n4]See Entire College\n>";
}
template <typename T> std::ostream& operator<<(std::ostream& outs, const std::vector<T> s)
{
    for (int _i = 0; _i < s.size(); _i++)
        outs << s[_i] << std::endl;

    return outs;
}
// std::cout << s << std::endl;
    // s.update(3.1);
    // std::cout << s << std::endl;
    // s.update("Dairy Science", 1);
    // std::cout << s << std::endl;
    // s.update("English", 1);
    // std::cout << s << std::endl;
    // s.update("Philosophy", 0);
    // std::cout << s << std::endl;
    // copy.update("Mathematcs", 0);
    // std::cout << s << std::endl;
    // std::cout << copy << std::endl;

    // Course crc("CS", "Intro to Programming", 101, students, 30);
    // std::cout << std::endl << crc;
    // std::cout << "Removing " << s;
    // crc.remove(s);
    // std::cout << std::endl << crc;
    // std::cout << "Removing " << c;
    // crc.remove(c);
    // std::cout << std::endl << crc;
    // std::cout << "Removing " << b;
    // crc.remove(b);
    // std::cout << std::endl << crc;
    // std::cout << "Removing " << s;
    // crc.remove(s);
    // std::cout << std::endl << crc;
