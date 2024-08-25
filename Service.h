#pragma once
#include "ShopManager.h"
#include "Appointment.h"
class Service
{
private:
char serviceName[20];
char serviceContent[40];
int serviceId;
ShopManager* sManager; //shop manager part in registered user (bi-directional)
Appointment* App[3];
public:
Service();
Service(const char serName[], const char serContent[], int serId);
void addAppointment(int appId, const char appType[], const char appdate[]);
//Appointment part in service (composition)
void addAppointment(int appId, const char appType[], const char appdate[]) {
Appointment[0] = new Appointment(appId, appType, appdate);
Appointment[1] = new Appointment(appId, appType, appdate);
Appointment[2] = new Appointment(appId, appType, appdate);
}
void displayAppointment();
char getServiceDetails();
void displayServiceDetails();
//destructor
~Service() {
delete Appointment[0];
delete Appointment[1];
delete Appointment[2];
}
};