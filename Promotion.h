#pragma once
class Promotion
{
private:
char promoName[20];
int promoId;
char promoContent[100];
public:
Promotion(const char pName[], int pId, const char pContent[]);
void setPromotion();
void updatePromotion();
void displayPromotion();
~Promotion();
};