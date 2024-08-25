#pragma once
class pet
{
private:
char petName[20];
int petId;
char petBreed[20];
public:
pet(const char name[], int ptId, const char breed[]);
void setPetDetails();
void updatePetDetails();
void displayPetDetails();
~pet();
};