#include <iostream>
#include <windows.h>
#include "Car.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // default car 
    Car defaultCar;

    // car with parametrs
    Car customCar("Toyota", "Червоний", "AA1234BB", 2.5, 150, "ENG123456");
    customCar.show();

    // change of car's registration number
    customCar.changeRegistrationNumber("BB5678CC");

    // change of cara's color
    customCar.changeColor("Синій");

    // output of the new info
    customCar.show();

    return 0;
}
