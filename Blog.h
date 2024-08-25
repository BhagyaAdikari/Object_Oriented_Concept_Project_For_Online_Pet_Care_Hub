#pragma once
#include "RegisteredUser.h"
#include "Review.h"
class Blog
{
private:
int blogId;
char blogTitle[50];
char blogContent[100];
RegisteredUser* regU; //registered user from (bi-directional association)
public:
Blog(int bgId, const char bgTitle[], const char bgContent[]);
void setBlog();
void updateBlog();
void displayBlog();
//Dependancy relationship with review
void addReview(Review* Rev);
~Blog();
};