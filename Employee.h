#pragma once
#include "User.h"
class Employee :public User
{
private:
float salary;
public:
Employee(const char n[], const char pNumber[], const char mail[], float sal);
void setEmpDetails();
char getEmpDetails();
void updateEmpDetails();
void displayEmployeeDetails();
~Employee();
};