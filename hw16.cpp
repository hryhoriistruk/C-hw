// 1. Напишіть програму, яка виробляє класи Саг (Легковий автомобіль) та Bus (Автобус) від класу Vehicle (Машина). Опишіть клас Vehicle як абстрактний тип даних із двома чистими віртуальними функціями. Класи Саг та Bus не повинні бути абстрактними.
// #include <iostream>
//
// class Vehicle {
// public:
//     virtual void start() = 0;
//     virtual void stop() = 0;
// };
//
// class Car : public Vehicle {
// public:
//     void start() override {
//         std::cout << "Car starting\n";
//     }
//
//     void stop() override {
//         std::cout << "Car stopping\n";
//     }
// };
//
// class Bus : public Vehicle {
// public:
//     void start() override {
//         std::cout << "Bus starting\n";
//     }
//
//     void stop() override {
//         std::cout << "Bus stopping\n";
//     }
// };
//
// int main() {
//     Car myCar;
//     Bus myBus;
//
//     myCar.start();
//     myCar.stop();
//
//     myBus.start();
//     myBus.stop();
//
//     return 0;
// }
// 2.Змініть програму з попередньої вправи таким чином, щоб клас Саг теж став ADT, і зробіть від нього три нові класи: SportsCar (Спортивний автомобіль), Wagon (Фургон) та Coupe (Двомісний автомобіль-купе). У класі Car повинна заміщатися одна з віртуальних функцій, оголошених у класі Vehicle, з викликом базового класу.
// #include <iostream>
//
// class Vehicle {
// public:
//  virtual void start() = 0;
//  virtual void stop() = 0;
// };
//
// class Car : public Vehicle {
// public:
//  void start() override {
//   std::cout << "Car starting\n";
//  }
//
//  void stop() override {
//   std::cout << "Car stopping\n";
//  }
// };
//
// class SportsCar : public Car {
//  // додаткові функції для спортивного автомобіля
// };
//
// class Wagon : public Car {
//  // додаткові функції для фургона
// };
//
// class Coupe : public Car {
//  // додаткові функції для автомобіля-купе
// };
//
// class Bus : public Vehicle {
// public:
//  void start() override {
//   std::cout << "Bus starting\n";
//  }
//
//  void stop() override {
//   std::cout << "Bus stopping\n";
//  }
// };
//
// int main() {
//  Car myCar;
//  Bus myBus;
//  SportsCar mySportsCar;
//  Wagon myWagon;
//  Coupe myCoupe;
//
//  myCar.start();
//  myCar.stop();
//
//  myBus.start();
//  myBus.stop();
//
//  mySportsCar.start();
//  mySportsCar.stop();
//
//  myWagon.start();
//  myWagon.stop();
//
//  myCoupe.start();
//  myCoupe.stop();
//
//  return 0;
// }
// 3.Напишіть коротку програму, яка оголошує клас з однією звичайною змінною-членом та однією статичною змінною-членом. Створіть конструктор, який виконує ініціалізацію змінної-члена та збільшення статичної змінної-члена. Потім оголосіть деструктор, який зменшує на одиницю значення статичної змінної.
#include <iostream>

class MyClass {
private:
 int regularVar;
 static int staticVar;

public:
 MyClass(int var) : regularVar(var) {
  staticVar++;
 }

 ~MyClass() {
  staticVar--;
 }

 void printValues() {
  std::cout << "Regular Variable: " << regularVar << std::endl;
  std::cout << "Static Variable: " << staticVar << std::endl;
 }
};

int MyClass::staticVar = 0;

int main() {
 MyClass obj1(10);
 obj1.printValues();

 MyClass obj2(20);
 obj2.printValues();

 {
  MyClass obj3(30);
  obj3.printValues();
 }

 return 0;
}
