#include "mylib.h"
#include <iostream>

int MyLib::getnum()
{
    return _num;
}
void MyLib::setnum(int _n)
{
    _num = _n;
}


void MyLib::loc()
{
    std::cout << "Location: libs/mylib/mylib.h/" << std::endl 
            << "Class: MyLib(Dummy)" << std::endl; 

}