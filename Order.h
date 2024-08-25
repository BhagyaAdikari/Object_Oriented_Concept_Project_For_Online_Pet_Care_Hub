#pragma once
#include "Product.h"
#include "RegisteredUser.h"
#include "Payment.h"
class Order
{
private:
int orderId;
char itemName[20];
char date[10];
Product* prod[3];
RegisteredUser* regU; //registered user (bi-directional association)
Payment* pay;
public:
//default constructor
Order();
//constructor order
Order(int ordId, const char iName[], const char d[]);
//product part (aggregation)
void addProduct(Product* p1, Product* p2, Product* p3) {
Product[0] = p1;
Product[1] = p2;
Product[2] = p3;
}
void displayproduct();
//payment (Dependancy)
void addPayment(Payment* p);
void processOrder();
void setOrder();
void displayOrder();
//destructor
~Order();
};