#include "User.h"
#include "RegisteredUser.h"
#include "Employee.h"
#include "SystemAdmin.h"
#include "ShopManager.h"
#include "Service.h"
#include "Appointment.h"
#include "Product.h"
#include "Shop.h"
#include "Order.h"
#include "Blog.h"
#include "Review.h"
#include "pet.h"
#include "Payment.h"
#include "Promotion.h"
#include <iostream>
using namespace std;
int main()
{
//insert data into user
User* u;
u = new User("Ranjith", "0766859632", "ranjith@mail.com");
cout << "User details : ";
u->displayUserDetails();//display user details;
cout << endl;
//insert data into registered user
RegisteredUser* regUser;
regUser = new RegisteredUser("Ranjith", "0766859632", "ranjith@mail.com", "ranji", "pass1234", "oldCustomer");
cout << "Registered User details : ";
regUser->displayRegisterUser();//display registered user details;
cout << endl;
//insert data into employee
Employee* emp;
emp = new Employee("Saman","0758963256","saman@gmail.com",75000.00);
cout << "Empployee details :";
emp->displayEmployeeDetails();//display employee details;
cout << endl;
//insert data into system admin
SystemAdmin* sysadmin;
sysadmin = new SystemAdmin("sampath", "0758963256", "sampath@gmail.com", 85000.00, 45);
cout << "System Admin details :";
sysadmin->DisplaySystemAdmin();//display system admin details;
cout << endl;
//insert data into shop manager
ShopManager* shopMang;
shopMang = new ShopManager("sampath", "0758963256", "sampath@gmail.com", 65000.00, 15);
cout << "Shop Manager details : ";
shopMang->DisplayShopManager();//display shop manager details;
cout << endl;
//insert data into service
Service* ser;
ser = new Service("Pet Grooming", "content1234", 340);
cout << "Service details : ";
ser->displayServiceDetails();//display service details;
cout << endl;
//insert data into appointment
Service* app;
app = new Service;
app->addAppointment(12, "type:Offline", "2024/2/4");
cout << "Appointment details : ";
app->displayAppointment(); //display appointmnet details;
cout << endl;
//insert into shop
Shop* sh;
sh = new Shop("Accessories", "low level", "Colombo");
cout << "Shop details : ";
sh->displayShopDetails();//display shop details
cout << endl;
//insert data into product
Shop* product;
product = new Shop;
product->addProduct(20, "Belt", "belt Description xxxxxxx");
cout << "Product details : ";
product->displayProduct();//display product details
cout << endl;
//insert data into product in order
Product* product1;
product1 = new Product(29, "cat food", "cat food Description xxxxxxx");
cout << "Display product details :";
Order* prod;
prod = new Order;
prod->addProduct(product1);
prod->displayproduct();//display product details
cout << endl;
//insert data into blog
Blog* bg;
bg = new Blog(10, "blog 1 title", "blog 1 content");
cout << "Blog details : ";
bg->displayBlog();//display blog details
cout << endl;
//Data is inserting to below classes to for dependancy relationship
//insert data into review
Review* rev;
rev = new Review(56, "Review content 1", "2024.3.6", 4.5);
cout << "Review details : ";
rev->displayReviewDetails();//display review details
cout << endl;
//insert data into payment
Payment* pay;
pay = new Payment(5, "Payment description 123", "2024.3.25");
cout << "Payment details : ";
pay->displayPaymentDetails();//display payment details
cout << endl;
//insert data into pet
pet* p;
p = new pet("Doggy",98,"Dalmation");
cout << "pet details :";
p->displayPetDetails();//display pet details
cout << endl;
//insert data into promotion
Promotion* pro;
pro = new Promotion("promo 1", "promotion content 123", 34);
cout << "Promotion details : ";
pro->displayPromotion();//display promotion details
cout << endl;
}