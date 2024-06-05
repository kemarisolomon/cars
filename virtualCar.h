/*
Name: Kemari Solomon
Project: Programming Assignment 5
Purpose:To ensure students understand inheritance in C++ and can utilize it to increase encapsulation and code reuse.
*/
class Car{
    protected: 
    int speed;

    const int topSpeed;       
  
    public:
    
    Car();
    Car(int topSpeed);
    virtual void SpeedUp() = 0;
    virtual ~Car();
    int getSpeed() const;
    
};

class Sedan : public Car
{
    public: 
    Sedan();
    void SpeedUp() ;
};

class HatchBack : public Car
{
   public: 
    HatchBack();
    void SpeedUp();

};

class RaceCar : public Car
{
   public: 
    RaceCar();
    void SpeedUp();
};
