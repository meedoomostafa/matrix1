#include "ManagerEmployee.h"

ManagerEmployee::ManagerEmployee()
{
    //ctor
}

ManagerEmployee::~ManagerEmployee()
{
    //dtor
}
void ManagerEmployee::setdetailes()
{
    cout<<" enter bouns : ";cin>>bouns;
    cout<<" enter salary : ";cin>>salary;
    Employee::setdata();
}
double ManagerEmployee::getsalary()
{
    salary=salary+bouns;
    return salary;
}
void ManagerEmployee::addbouns(double morebouns)
{
    bouns+=morebouns;
}
void ManagerEmployee::displaydata()
{
    Employee::displaydata();
    cout<<" bouns is : "<<bouns<<endl;
    cout<<" salary is : "<<salary<<endl;
}
