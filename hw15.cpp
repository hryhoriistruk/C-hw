// 1. Опишіть клас JetPlane (Реактивний літак), успадковуючи його від двох базових класів – Rocket (Ракета) та Airplane (Літак).
// #include <iostream>
// #include <string>
//
// class Rocket {
//  protected:
//      int fuelCapacity;
//      int currentFuel;
//
//  public:
//      Rocket(int fuelCapacity) : fuelCapacity(fuelCapacity), currentFuel(fuelCapacity) {}
//
//      void refuel(int amount) {
//          currentFuel += amount;
//          if (currentFuel > fuelCapacity) {
//              currentFuel = fuelCapacity;
//          }
//      }
//
//      bool isFuelEnough(int amount) {
//          return currentFuel >= amount;
//      }
//  };
//
// class Airplane {
// protected:
//     int wingspan;
//     int maxSpeed;
//
// public:
//     Airplane(int wingspan, int maxSpeed) : wingspan(wingspan), maxSpeed(maxSpeed) {}
//
//     void fly() {
//         std::cout << "Літак летить з швидкістю " << maxSpeed << " км/год" << std::endl;
//     }
//
//     int getWingspan() {
//         return wingspan;
//     }
// };
//
// class JetPlane : public Rocket, public Airplane {
// private:
//     int thrust;
//
// public:
//     JetPlane(int fuelCapacity, int wingspan, int maxSpeed, int thrust)
//         : Rocket(fuelCapacity), Airplane(wingspan, maxSpeed), thrust(thrust) {}
//
//     void fly() {
//         if (isFuelEnough(thrust)) {
//             Airplane::fly();
//             currentFuel -= thrust;
//         } else {
//             std::cout << "Недостатньо палива для польоту" << std::endl;
//         }
//     }
//
//     void afterburner() {
//         if (isFuelEnough(thrust * 2)) {
//             std::cout << "Режим форсажу включено" << std::endl;
//             currentFuel -= thrust * 2;
//         } else {
//             std::cout << "Недостатньо палива для форсажу" << std::endl;
//         }
//     }
// };
//
// int main() {
//     JetPlane jp(1000, 20, 900, 50);
//     jp.fly();
//     jp.afterburner();
//     jp.refuel(200);
//     jp.fly();
//     return 0;
// }
// 2. Виконайте від класу JetPlane, оголошеного в першій вправі, новий клас Boeing747.
#include <iostream>
#include <string>

class Rocket {
protected:
    int fuelCapacity;
    int currentFuel;

public:
    Rocket(int fuelCapacity) : fuelCapacity(fuelCapacity), currentFuel(fuelCapacity) {}

    void refuel(int amount) {
        currentFuel += amount;
        if (currentFuel > fuelCapacity) {
            currentFuel = fuelCapacity;
        }
    }

    bool isFuelEnough(int amount) {
        return currentFuel >= amount;
    }
};

class Airplane {
protected:
    int wingspan;
    int maxSpeed;

public:
    Airplane(int wingspan, int maxSpeed) : wingspan(wingspan), maxSpeed(maxSpeed) {}

    void fly() {
        std::cout << "Літак летить з швидкістю " << maxSpeed << " км/год" << std::endl;
    }

    int getWingspan() {
        return wingspan;
    }

    int getMaxSpeed() {
        return maxSpeed;
    }
};

class JetPlane : public Rocket, public Airplane {
private:
    int thrust;

public:
    JetPlane(int fuelCapacity, int wingspan, int maxSpeed, int thrust)
        : Rocket(fuelCapacity), Airplane(wingspan, maxSpeed), thrust(thrust) {}

    void fly() {
        if (isFuelEnough(thrust)) {
            Airplane::fly();
            currentFuel -= thrust;
        } else {
            std::cout << "Недостатньо палива для польоту" << std::endl;
        }
    }

    void afterburner() {
        if (isFuelEnough(thrust * 2)) {
            std::cout << "Режим форсажу включено" << std::endl;
            currentFuel -= thrust * 2;
        } else {
            std::cout << "Недостатньо палива для форсажу" << std::endl;
        }
    }
};

class Boeing747 : public JetPlane {
private:
    int passengerCapacity;
    int cargoCapacity;

public:
    Boeing747(int fuelCapacity, int wingspan, int maxSpeed, int thrust, int passengerCapacity, int cargoCapacity)
        : JetPlane(fuelCapacity, wingspan, maxSpeed, thrust), passengerCapacity(passengerCapacity), cargoCapacity(cargoCapacity) {}

    void printInfo() {
        std::cout << "Інформація про літак Boeing 747:" << std::endl;
        std::cout << "Розмах крила: " << getWingspan() << " метрів" << std::endl;
        std::cout << "Максимальна швидкість: " << getMaxSpeed() << " км/год" << std::endl;
        std::cout << "Місткість пасажирів: " << passengerCapacity << " осіб" << std::endl;
        std::cout << "Місткість вантажу: " << cargoCapacity << " тонн" << std::endl;
    }

    void takeOff() {
        std::cout << "Літак Boeing 747 злітає" << std::endl;
        fly();
    }

    void land() {
        std::cout << "Літак Boeing 747 сідає" << std::endl;
    }
};

int main() {
    Boeing747 boeing(150000, 60, 915, 100, 524, 150);
    boeing.printInfo();
    boeing.takeOff();
    boeing.afterburner();
    boeing.land();
    return 0;
}
