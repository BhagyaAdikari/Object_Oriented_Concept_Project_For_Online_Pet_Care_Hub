#pragma once
#include "User.h"
#include "Employee.h"
#include "RegisteredUser.h"
class SystemAdmin :public Employee
{
private:
int adminId;
RegisteredUser* regU;//registered user part in system admin (bi-directional association)
public:
SystemAdmin(const char n[], const char pNumber[], const char mail[], float sal, int admId);
void manageRegistration();
void DisplaySystemAdmin();
~SystemAdmin();
};