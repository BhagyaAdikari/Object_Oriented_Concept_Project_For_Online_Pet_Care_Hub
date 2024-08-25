#pragma once
#include "SystemAdmin.h"
#include "Appointment.h"
#include "Blog.h"
#include "Promotion.h"
#include "Order.h"
class RegisteredUser:public User
{
private:
char userName[20];
char password[30];
char accountHistory[100];
SystemAdmin* sAdmin;//system admin part in registered user (bi-directional association)
Order* ord;//order part in registered user (bi-directional association)
Appointment* App;// Appointment part in registered user(bi - directional association)
Blog* bg;//blog part in registered user (bi-directional association)
public:
RegisteredUser(const char n[], const char pNumber[], const char mail[], const char uName[], const char pass[], const char accHistory[]);
//pet part in registered user (Dependancy)
void addPet(pet* p);
//Prmotion part in registered user (Dependancy)
void addPromotion(Promotion* promo);
void setUserDetails();
void updateUserDetails();
char getUserDetails();
void updateAccount();
void makeAppointment();
void makeOrder();
void reviewBlog();
void displayRegisterUser();
~RegisteredUser();
};