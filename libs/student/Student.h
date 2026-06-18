#pragma once
#include <string>

class Student 
{
    //Variables
    private:
        std::string _studentName;
        std::string _major;
        std::string _minor;
        float _gpa;
        int _id;
        Student* _me;
        // useful when modifying informatoin through auxilary methods
  
    public:
        //CSTORS
        Student();                                           // EMPTY
        Student(std::string s);                              // ONLY NAME (LITERAL TERM)
        Student(std::string& s, int& id);                    // NAME, ID
        Student(const std::string& s, const std::string& major,          // FULL RECORD
                const std::string& minor, const float& gpa, const int id);
        
        Student& operator=(const Student& other);
        //Accessors
        std::string getName() const;
        std::string getMajor() const;
        std::string getMinor() const;
        float getGPA() const;
        int getID() const;
        //Modifiers 
        void setStudentName(const std::string& s);
        void setMajor(const std::string& s);
        void setMinor(const std::string& s);
        void setGPA(const float& x);
        void setID(const int& x);
        void copy(const Student& other);
        void update(const std::string& s, int code);              // code(1) = major, code(0) = minor
        void update(const float& f);

        friend bool operator==(const Student& lhs, const Student& rhs);
        //Friend Functions
        friend std::ostream& operator<<(std::ostream& outs, const Student& s);
        friend std::ostream& operator<<(std::ostream& outs,  Student* s);
        
};

