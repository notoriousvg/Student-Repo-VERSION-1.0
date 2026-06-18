#include "Professor.h"

Professor::Professor(const std::string& n, std::string& d, const int& x, const int& y) : 
                    profName(n), dept(d), profID(x), numOfCourses(y)
                    {}
int Professor::getID() const { return profID; }
void Professor::addCourse(const Course& c)
{
    if (numOfCourses < MAX_COURSES)
    {
        coursesLectured.push_back(c);
        numOfCourses++;
    }
}
bool Professor::foundCourse(const Course& c, int& i)
{
    for (i; i < numOfCourses; i++)
    {
        if (coursesLectured[i] == c)
            return true;
    }
}
void Professor::removeCourse(const Course& c)
{
    int _i = 0;
    if (numOfCourses > 0 && foundCourse(c, _i))
    {
        coursesLectured.erase(coursesLectured.begin()+ _i);
        numOfCourses--;
    }
}