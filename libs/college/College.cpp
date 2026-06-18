#include "College.h"
char line[] = {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',
                '-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',
            '-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};
College::College() : collegeName(""),
        numOfProfessors(0), numOfStudents(0), 
        numOfDepartments(0) {}
College::College(const std::string& n) : collegeName(n) {}
College::College(const std::string& n, const std::vector<std::string>& list) :
        numOfProfessors(0), numOfStudents(0), 
        numOfDepartments(0), collegeName(n)
{
    setDepts(list);
}
int College::getNumOfDepartments() const { return numOfDepartments; }
std::string College::getDepartmentName(const int& i) {return departments[i]; }
std::string College::getCollegeName() const { return collegeName; }

void College::addDepartment(const std::string& dept, const int& loc)
{
    if (loc == -1)
        departments.push_back(dept);
    else    
        departments.insert(departments.begin()+loc, dept);
    numOfDepartments++;
}

void College::setDepts(const std::vector<std::string>& list)
{
    for(int i = 0; i < list.size(); i++)        
        departments.push_back(list[i]);

    numOfDepartments = departments.size();
}
std::ostream& operator<<(std::ostream& outs, const College& c)
{
    int _i = 0;

    outs << line << std::endl << "\t\tCollege of " << c.getCollegeName() << 
    std::endl  << line << std::endl; 

    for (; _i < c.getNumOfDepartments(); _i++)
    {
        outs << c.departments[_i] << " " << std::endl;
    }
    outs << line << std::endl;
    return outs;

}
