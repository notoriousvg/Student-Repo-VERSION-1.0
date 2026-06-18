#pragma once
#include <iostream>
#include <string>
#include "../course/Course.h"

class Professor
{
    private: 
        std::vector<Course> coursesLectured;
        std::string profName;
        std::string dept;
        int profID;
        int numOfCourses; 
        const int MAX_COURSES = 5;       

    public:
        int getID() const;

        bool foundCourse(const Course& c, int& i);
        void addCourse(const Course& c);
        void removeCourse(const Course& c);

        Professor(const std::string& n, std::string& d, const int& x, const int& y = 0);
};