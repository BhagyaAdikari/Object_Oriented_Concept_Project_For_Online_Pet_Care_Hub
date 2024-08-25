#pragma once
class User
{
private:
char name[20];
char phoneNumber[10];
char email[100];
public:
User(const char n[], const char pNumber[], const char mail[]);
void login();
void readBlog();
void visitShop();
void displayUserDetails();
~User();
};