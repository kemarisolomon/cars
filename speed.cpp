/*
Name: Kemari Solomon
Project: Programming Assignment 5
Purpose:To ensure students understand inheritance in C++ and can utilize it to increase encapsulation and code reuse.
*/
#include <iostream>
#include "virtualCar.h"
using namespace std;



int main()
{
Car* cars[4];
const int Distace = 25;
cout << "Choose Your Racers!" <<endl;
cout << "S: Sedan" << endl;
cout << "H: Hatchback"<<endl;
cout << "R: RaceCar"<<endl;
char option;

for(int i = 0; i < 4; i++)
{
    cout << "Car " << i+1 << ": ";
    cin >> option;

    switch(option)
    {
        case 'S':
        case 's':
            cars[i] = new Sedan();
            break;
        case 'H': 
        case 'h':
            cars[i] = new HatchBack();
            break;
        case 'R':
        case 'r':
            cars[i] = new RaceCar();
            break;
        default:
            cout << "Option Not Valid. Sedan will be Default. "<< endl;
            cars[i] = new Sedan();
            break;
    }
}

int winner = -1;
int distances[4] = {0};
while(true)
{
   for(int i = 0; i < 4;i++)
   {
    if(distances[i] >= Distace)
    {
        winner = i;
        break;
    }
    cars[i]->SpeedUp();
    distances[i] += cars[i]->getSpeed();
    cout << "Car "<< i+1 << " moved "<<cars[i]->getSpeed() << " miles and is now at " <<distances[i]<<" miles."<<endl;

   }
    if(winner != -1)
    {
        cout << "Car " <<winner+1 << " Wins!";
        break;
    }
   
}

//memory deallocation
for(int i = 0; i < 4; i++)
{
    delete cars[i];
}


return 0;
}