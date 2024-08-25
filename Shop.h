#pragma once
#include "Product.h"
class Shop
{
private:
char shopName[20];
char shopType[20];
char shopLocation[20];
Product* prod[3];
public:
//default constructor
Shop();
//overloaded constructor
Shop(const char sName[], const char sType[], const char sLoc[]);
//product part in shop (composition)
void addProduct(int pId, const char pName[], const char pDesc[]) {
prod[0] = new Product(pId, pName, pDesc);
prod[1] = new Product(pId, pName, pDesc);
prod[2] = new Product(pId, pName, pDesc);
}
void displayProduct();
void setShopDetails();
void updateShopDetails();
void makeReport();
void displayShopDetails();
//destructor
~Shop() {
delete prod[0];
delete prod[1];
delete prod[2];
}
};