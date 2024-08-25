#pragma once
class Product
{
private:
int productId;
char productName[20];
char productDescription[100];
public:
Product(int pId, const char pName[], const char pDesc[]);
void setProduct();
void UpdateProduct();
void makeSummary();
void displayProductDetails();
~Product();
};