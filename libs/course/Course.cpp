#include "Course.h"

Course::Course() : dept("NONE"), courseName("NONE"), courseNumber(-1),
                numOfStudents(0), capacity(0) {}
Course::Course(const std::string& d, const std::string& n, const int& x, const int& u) : dept(d), courseName(n), courseNumber(x), 
                numOfStudents(0), capacity(25), units(u) {}
Course::Course(const std::string d, const std::string  n, const int x, 
                const std::vector<Student> list, const int cap, const int& u) : dept(d), courseName(n), 
                courseNumber(x), numOfStudents(list.size()), enrolledStudents(list), 
                capacity(cap), units(u)
                {}
Course& Course::operator=(const Course& other)
{
    dept = other.dept;
    courseName = other.courseName;
    courseNumber = other.courseNumber;
    enrolledStudents = other.enrolledStudents;
    numOfStudents = other.numberOfEnrolled();
    capacity = other.capacity;
    units = other.units;
    return *this;
}
std::string Course::getDept() const {return dept; }
std::string  Course::getCourseName() const { return courseName; }
int Course::getCourseNumber() const { return courseNumber; }
int Course::numberOfEnrolled() const {return enrolledStudents.size(); }
void Course::add(const Student& s)
{
    if (numOfStudents < capacity)
        enrolledStudents.push_back(s);
    numOfStudents++;
}
void Course::remove(const Student& s)
{
    int _i = 0;
    if (numOfStudents > 0 && foundStudent(s, _i))
    {
        enrolledStudents.erase(enrolledStudents.begin()+_i);
        numOfStudents--;
    }
}
bool Course::foundStudent(const Student& s, int& i)
{
    for (int _i = 0; _i < enrolledStudents.size(); _i++)
    {
        if (enrolledStudents[_i] == s)
        {
            i = _i;
            return true;
        }       
    }
    return false;
}
void Course::printStudents() const
{
    for (int _i = 0; _i < enrolledStudents.size(); _i++)
        std::cout << "[" << _i << "]" << enrolledStudents[_i] << std::endl;
    
}
bool operator==(const Course& lhs, const Course& rhs)
{
    return (lhs.getCourseNumber() == rhs.getCourseNumber() &&
            lhs.getCourseName() == rhs.getCourseName());
}
std::ostream& operator<<(std::ostream& outs, const Course& c)
{
    outs << "| "<< c.dept << " " << c.courseNumber << " | " << c.courseName << " | " << "Enrolled: " 
        << c.numberOfEnrolled() << " |" << std::endl; 
    if (c.numberOfEnrolled() > 0)   c.printStudents();
        
    return outs;
}


