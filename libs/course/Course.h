#pragma once
#include "../student/Student.h"
#include <string>
#include <vector>
#include "../dept/Dept.cpp"
#include <iostream>

struct Course
{
    private:
        std::string dept;
        std::string courseName;
        int courseNumber;
        std::vector<Student> enrolledStudents;
        int numOfStudents;
        int capacity;
        int units;
    public:
        //CSTORS
        Course(); 
        // Course DEPT code, course name, course number, units  
        Course(const std::string& d, const std::string& n,const int& x, const int& u);                  
        // Course DEPT code, course name, course number, student vector, student cap, units
        Course(const std::string d, const std::string n, const int x,   
                const std::vector<Student> list, const int cap, const int& u);

        Course& operator=(const Course& other);
        //ACCESSORS
        std::string getDept() const;
        std::string getCourseName() const;
        int getCourseNumber() const;
        int numberOfEnrolled() const;

        //MODIFIERS
        void add(const Student& s);
        void remove(const Student& s);
        bool foundStudent(const Student& s, int& i);
        // void updateProf();
        void printStudents()const;
        friend bool operator==(const Course& lhs, const Course& rhs);
        friend std::ostream& operator<<(std::ostream& outs, const Course& c);
        
};
    