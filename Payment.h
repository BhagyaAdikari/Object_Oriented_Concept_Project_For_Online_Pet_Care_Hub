#pragma once
class Payment
{
private:
int paymentId;
char paymentDescription[20];
char date[10];
public:
Payment(int payId, const char payDesc[], const char dt[]);
void validatePayment();
void setPaymentDetails();
void displayPaymentDetails();
~Payment();
};