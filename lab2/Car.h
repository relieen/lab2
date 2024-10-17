#include <iostream>
#include <cstring>
#include "Engine.h"

using namespace std;

class Car {
private:
    Engine engine;
    char* brand;
    char* color;
    char* registrationNumber;

public:
    // default constructor
    Car() {
        brand = new char[8];
        strcpy_s(brand, 8, "Unknown");
        color = new char[8];
        strcpy_s(color, 8, "Unknown");
        registrationNumber = new char[8];
        strcpy_s(registrationNumber, 8, "Unknown");
    }

    // constructor with parameters
    Car(const char* br, const char* col, const char* regNum, double vol, int pow, const char* engNum)
        : engine(vol, pow, engNum) {
        brand = new char[strlen(br) + 1];
        strcpy_s(brand, strlen(br) + 1, br);
        color = new char[strlen(col) + 1];
        strcpy_s(color, strlen(col) + 1, col);
        registrationNumber = new char[strlen(regNum) + 1];
        strcpy_s(registrationNumber, strlen(regNum) + 1, regNum);
    }

    // destructor
    ~Car() {
        delete[] brand;
        delete[] color;
        delete[] registrationNumber;
    }

    // get and set methods for car's brand
    const char* getBrand() const { return brand; }
    void setBrand(const char* br) {
        delete[] brand;
        brand = new char[strlen(br) + 1];
        strcpy_s(brand, strlen(br) + 1, br);
    }

    // get and set methods for car's color
    const char* getColor() const { return color; }
    void setColor(const char* col) {
        delete[] color;
        color = new char[strlen(col) + 1];
        strcpy_s(color, strlen(col) + 1, col);
    }

    // get and set methods for car's registration number
    const char* getRegistrationNumber() const { return registrationNumber; }
    void setRegistrationNumber(const char* regNum) {
        delete[] registrationNumber;
        registrationNumber = new char[strlen(regNum) + 1];
        strcpy_s(registrationNumber, strlen(regNum) + 1, regNum);
    }

    // output method
    void show() const {
        cout << "\nАвтомобіль: Марка - " << brand
            << ", Колір - " << color
            << ", Номер державної реєстрації - " << registrationNumber;
        engine.show();
        cout << endl;
    }

    // number reassignment method
    void changeRegistrationNumber(const char* newNumber) {
        setRegistrationNumber(newNumber);
        cout << "\n\tНомер реєстрації змінено на: " << registrationNumber << endl;
    }

    // color reassignment method
    void changeColor(const char* newColor) {
        setColor(newColor);
        cout << "\n\tКолір автомобіля змінено на: " << color << endl;
    }
};

