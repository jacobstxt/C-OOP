#include <iostream>
#include <windows.h>
using namespace std;

class Car
{
public:
    Car(const char* brand, const char* model, float engine);
    void show_car();
    static void set_fuel_price(float price); 

private:
    static float fuel_price;  
    char brand[64];
    char model[64];
    float engine;
};


float Car::fuel_price;

Car::Car(const char* brand, const char* model, float engine)
{
    strcpy_s(Car::brand, brand);
    strcpy_s(Car::model, model);
    Car::engine = engine;
}

void Car::show_car()
{
    cout << "  Марка  : " << brand << endl;
    cout << "  Модель : " << model << endl;
    cout << "  Двигун : " << engine << " л" << endl;
    cout << "  Пальне : " << fuel_price << " грн/л" << endl;
    cout << endl;
}

void Car::set_fuel_price(float price)
{
    fuel_price = price;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car car1("Toyota", "Camry", 2.5f);
    Car car2("BMW", "X5", 3.0f);
    Car car3("Audi", "A4", 2.0f);


    car1.set_fuel_price(58.5f);

    cout << "=== Ціна пального: 58.5 грн/л ===" << endl << endl;
    car1.show_car();
    car2.show_car();
    car3.show_car();


    cout << "=== Ціна пального змінилась: 62.0 грн/л ===" << endl << endl;
    car2.set_fuel_price(62.0f);

    car1.show_car();
    car2.show_car();
    car3.show_car();

    system("pause");
    return 0;
}