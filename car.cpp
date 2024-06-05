/*
Name: Kemari Solomon
Project: Programming Assignment 5
Purpose:To ensure students understand inheritance in C++ and can utilize it to increase encapsulation and code reuse.
*/
#include "virtualCar.h"

//data member initialization
Car::Car() : speed(0), topSpeed(0) {}
Car::Car(int topSpeed) : speed(0), topSpeed(topSpeed) {}
Car:: ~Car(){}
int Car::getSpeed() const 
{
    return speed;
}
//sedan with top speed of 2
Sedan :: Sedan() : Car(2)
{
    speed =0;
}

void Sedan :: SpeedUp()
{
    if(speed < topSpeed)
    {
        speed++;
    }
}
//hatchback with top speed of 3
HatchBack:: HatchBack() : Car(3)
{
    speed =0;
}
void HatchBack :: SpeedUp()
{
    if( speed < topSpeed)
    {
        speed++;
    }
}
//racecar with top speed of 5
RaceCar:: RaceCar() : Car(5)
{
    speed =0;
}
void RaceCar :: SpeedUp()
{
    if( speed < topSpeed)
    {
        speed++;
    }
}