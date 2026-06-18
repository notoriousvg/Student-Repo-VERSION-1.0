#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "../course/Course.h"
#include "../student/Student.h"

struct College
{
    private:
        std::string collegeName;
        int numOfProfessors;
        int numOfStudents;
        int numOfDepartments;
        std::vector<std::vector<std::map<Course, Student>>> CollegeCourses;
        std::vector<std::string> departments;
    public:
        College();
        College(const std::string& n);
        College(const std::string& n, const std::vector<std::string>& list);
        //EASY ACCESSORS
        std::string getDepartmentName(const int& i);
        std::string getCollegeName() const;
        int getNumOfDepartments() const;
        //MMAP ACCESSORS
        
        //Modifiers
        void setDepts(const std::vector<std::string>& list);
        void addCourse(const Course& c);
        void addDepartment(const std::string& dept, const int& loc = -1);                
        friend std::ostream& operator<<(std::ostream& outs, const College& c);
};

/*
CollegeCourses vector - Engineering and Computer Science
- each department is created ahead of time according to 
    order of departments vector indecies
- each index is a different dept within the college
- each index is a vector of maps containg individual courses 
    and the students enrolled in them.
- Map: <KEY (COURSE), VALUE (STUDENTS)>
[MATH] { <Course01, 10 Students>, <Course02, 5 Students>, ... } 
[CS] {  <Course01, 6 Students>, <Course02, 2 Students>, ... }
[ENGR] { <Course01, 8 Students>, <Course02, 3 Students>, ... }

Departments vector - stores all the different departments
- each department is stored in advance, orderded
- index signifies a specific department inside the college
- 
*/
