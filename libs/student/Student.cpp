#include "Student.h"
#include <iostream>

Student::Student() : _studentName("NONE"), _major("NONE"),
                    _minor("NONE"), _gpa(-1), _id(-1) {}
Student::Student(std::string s) : _studentName(s), _major("NONE"),
                    _minor("NONE"), _gpa(-1), _id(-1) {}
Student::Student(std::string& s, int& x) : _studentName(s),
                                        _id(x),_major("NONE"),
                                        _minor("NONE"), _gpa(-1)  {}
Student::Student(const std::string& s, const std::string& major,     
                const std::string& minor, const float& gpa,const int id) : 
                _studentName(s), _major(major),
                    _minor(minor), _gpa(gpa), _id(id) {}
Student& Student::operator=(const Student& other)
{
    if(this->getID() == -1)
        copy(other);
    else
        copy(other);
    return *this;
}
std::string Student::getName() const { return _studentName; }
std::string Student::getMajor() const { return _major; }
std::string Student::getMinor() const { return _minor; }
float Student::getGPA() const { return _gpa; }
int Student::getID() const { return _id; }
//Modifiers 
void Student::setStudentName(std::string& s)
{
    _studentName = s;
}
void Student::setMajor(std::string& s)
{
    _major = s;
}
void Student::setMinor(std::string& s)
{
    _minor = s;
}
void Student::setGPA(float& x)
{
    _gpa = x;
}
void Student::setID(int& x)
{
    _id = x;
}
void Student::copy(const Student& other)
{
    this->_studentName = other._studentName;
    this->_major = other._major;
    this->_minor = other._minor;
    this->_gpa = other._gpa;
    this->_id = other._id;
}
// code(1) = major, code(0) = minor
void Student::update(const std::string& s, int code)
{
    (code == 1) ?  _major = s : _minor = s; 
}
void Student::update(const float& f)
{
    _gpa = f;
}
bool operator==(const Student& lhs, const Student& rhs)
{
    if ((lhs._studentName == rhs._studentName) && (lhs._id == rhs._id))
        return true;
    return false;
}
std::ostream& operator<<(std::ostream& outs, const Student& s)
{
    outs << "| "<< s.getName() << " | " << s.getID() << " | " << s.getMajor() << " | " << s.getMinor() 
        << " | " << s.getGPA() << " |";
    return outs;
}
