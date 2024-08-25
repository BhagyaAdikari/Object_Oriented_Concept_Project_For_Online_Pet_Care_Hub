#pragma once
#include "RegisteredUser.h"
#include "pet.h"
class Appointment
{
private:
int appointmentId;
char appointmentType[20];
char appointmentDate[10];
pet* pets; //pet part in registered user (uni-directional)
RegisteredUser* regU;//registered user part in registered user (bi-directional association)
public:
Appointment(int appId, const char appType[], const char appdate[]);
void setAppointmnetDetails();
int getappointment();
char getAppointmentType();
char getAppointmnetDate();
void displayAppointmentDetails();
~Appointment();
};