
#include <iostream>
using namespace std;

class Transport
{
    protected:
    char* fuel;
    int capacity;
public:
    Transport()
    {
        fuel = nullptr;
        capacity = -1;
    }
    virtual void Show()
    {
        cout << "Fuel: " << fuel << endl;
        cout << "Capacity: " << capacity << endl;

    }
    char* getFuel()
    {
        return fuel;
    }
    int getCapacity()
    {
        return capacity;
    }
    void setFuel(char* f)
    {
        delete[] fuel;
        fuel = f;
    }
    void setCapacity(int c)
    {
        capacity = c;
    }
    ~Transport()
    {
        delete[] fuel;
        cout << "Destruct" << endl;
    }
};
class Car :public Transport
{
public:
    Car()
    {
        fuel = new char[9];
        strcpy_s(fuel, 9, "Gasoline");
        capacity = 4;
    }
    virtual void Show()
    {
        cout << "Fuel: " << fuel << endl;
        cout << "Capacity: " << capacity << endl;
    }
};
class Ship :public Transport
{
public:
    Ship()
    {
        fuel = new char[7];
        strcpy_s(fuel, 7, "Diesel");
        capacity = 100;
    }
    virtual void Show()
    {
        cout << "Ship " << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Capacity: " << capacity << endl;
    }

};
class Plane :public Transport
{
public:
    Plane()
    {
        fuel = new char[9];
        strcpy_s(fuel, 9, "Gasoline");
        capacity = 8;
    }
    virtual void Show()
    {
        cout << "Plane " << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Capacity: " << capacity << endl;
    }
};
class Tram :public Transport
{
public:
    Tram()
    {
        fuel = new char[12];
        strcpy_s(fuel, 12, "Electricity");
        capacity = 30;
    }
    virtual void Show()
    {
        cout << "Tram " << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Capacity: " << capacity << endl;
    }

};
class Moto :public Transport
{
public:
    Moto()
    {
        fuel = new char[9];
        strcpy_s(fuel, 9, "Gasoline");
        capacity = 2;
    }
    virtual void Show()
    {
        cout << "Motorcycle " << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Capacity: " << capacity << endl;
    }
};
int main()
{
    Transport* ptr = nullptr;
    short option;
    cout << "Choose the transport: " << endl;
    cout << "Car - 1" << endl;
    cout << "Ship - 2" << endl;
    cout <<"Plane - 3" << endl;
    cout << "Tram - 4" << endl;
    cout << "Motorcycle - 5" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        ptr = new Car;
        ptr->Show();
        break;
    case 2:
        ptr = new Ship;
        ptr->Show();
        break;
    case 3:
        ptr = new Plane;
        ptr->Show();
        break;
    case 4:
        ptr = new Tram;
        ptr->Show();
        break;
    case 5:
        ptr = new Moto;
        ptr->Show();
        break;
    default:
        break;
    }
    delete ptr;
}

