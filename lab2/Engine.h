#include <iostream>
#include <cstring>

class Engine {
private:
    double volume;
    int power;
    char* factoryNumber;
public:
    // default constructor
    Engine() {
        volume = 0;
        power = 0;
        factoryNumber = new char[8];
        strcpy_s(factoryNumber, 8, "Unknown");
    }

    // constructor with parameters
    Engine(double vol, int pow, const char* num) {
        volume = vol;
        power = pow;
        factoryNumber = new char[strlen(num) + 1];
        strcpy_s(factoryNumber, strlen(num) + 1, num);
    }

    // destructor
    ~Engine() {
        delete[] factoryNumber;
    }

    // get and set methods for engine's volume
    double getVolume() const { return volume; }
    void setVolume(double vol) { volume = vol; }

    // get and set methods for engine's power
    int getPower() const { return power; }
    void setPower(int pow) { power = pow; }

    // get and set methods for factory number
    const char* getFactoryNumber() const { return factoryNumber; }
    void setFactoryNumber(const char* num) {
        delete[] factoryNumber;
        factoryNumber = new char[strlen(num) + 1];
        strcpy_s(factoryNumber, strlen(num) + 1, num);
    }

    // output method
    void show() const {
        std::cout << "\n\tДвигун: Об'єм - " << volume << " л, Потужність - " << power << " кВт, Заводський номер - " << factoryNumber;
    }
};
