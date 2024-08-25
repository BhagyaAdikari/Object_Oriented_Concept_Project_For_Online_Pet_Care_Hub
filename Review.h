#pragma once
class Review
{
private:
int reviewId;
char reviewContent[50];
char reviewDate[10];
float rate;
public:
Review(int revId, const char revContent[], const char date[], float r);
//blog part in registered user (Dependancy)
void addBlog(Blog* bg);
void setReviewDetails();
void displayReviewDetails();
void updateReview();
~Review();
};