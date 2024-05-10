 // 1. Напишіть програму, яка запитує число та показник ступеня. Напишіть рекурсивну функцію, яка зводить число в ступінь шляхом багаторазового множення числа на себе, тобто. якщо число дорівнює 2, а показник ступеня дорівнює 4, то ця функція має повернути число 16.
// #include <iostream>
//
// unsigned long int Power(unsigned long int num, unsigned long int exponent) {
//     if (exponent == 0) {
//         return 1;
//     } else {
//         return num * Power(num, exponent - 1);
//     }
// }
//
// int main() {
//     unsigned long int number, power;
//     std::cout << "Enter a number: ";
//     std::cin >> number;
//
//     std::cout << "Enter the exponent: ";
//     std::cin >> power;
//
//     unsigned long int result = Power(number, power);
//
//     std::cout << number << " raised to the power of " << power << " is: " << result << std::endl;
//
//     return 0;
// }
// 2. Напишіть програму, яка оголошує клас з ім'ям Employee (Службовці) з такими змінними-членами: age (вік), yearsOfService (стаж роботи) та Salary (зарплата).
// #include <iostream>
//
// class Employee {
// public:
//  int age;
//  int yearsOfService;
//  double salary;
//
//  Employee(int a, int y, double s) {
//   age = a;
//   yearsOfService = y;
//   salary = s;
//  }
// };
//
// int main() {
//  Employee employee(25, 5, 5000.0);
//
//  std::cout << "Age: " << employee.age << std::endl;
//  std::cout << "Years of Service: " << employee.yearsOfService << std::endl;
//  std::cout << "Salary: " << employee.salary << std::endl;
//
//  return 0;
// }
// 3. Перепишіть клас Employee, щоб зробити дані - члени закритими і забезпечити відкриті методі доступу для читання і встановлення всіх даних-членів.
// #include <iostream>
//
// class Employee {
// private:
//  int age;
//  int yearsOfService;
//  double salary;
//
// public:
//  void SetAge(int a) {
//   age = a;
//  }
//
//  int GetAge() {
//   return age;
//  }
//
//  void SetYearsOfService(int y) {
//   yearsOfService = y;
//  }
//
//  int GetYearsOfService() {
//   return yearsOfService;
//  }
//
//  void SetSalary(double s) {
//   salary = s;
//  }
//
//  double GetSalary() {
//   return salary;
//  }
//
//  Employee(int a, int y, double s) {
//   age = a;
//   yearsOfService = y;
//   salary = s;
//  }
// };
//
// int main() {
//  Employee employee(25, 5, 5000.0);
//
//  std::cout << "Age: " << employee.GetAge() << std::endl;
//  std::cout << "Years of Service: " << employee.GetYearsOfService() << std::endl;
//  std::cout << "Salary: " << employee.GetSalary() << std::endl;
//
//  return 0;
// }
 // 4. Напишіть програму з використанням класу Employee, яка створює два об'єкти класу Employee; встановлює дані-члени age, Years0fService та Salary, а потім виводить їх значення.
// #include <iostream>
//
// class Employee {
// public:
//  Employee(int age, int yearsOfService, double salary)
//      : age(age), yearsOfService(yearsOfService), salary(salary) {}
//
//  int getAge() const { return age; }
//  int getYearsOfService() const { return yearsOfService; }
//  double getSalary() const { return salary; }
//
//  void setAge(int newAge) { age = newAge; }
//  void setYearsOfService(int newYears) { yearsOfService = newYears; }
//  void setSalary(double newSalary) { salary = newSalary; }
//
// private:
//  int age;
//  int yearsOfService;
//  double salary;
// };
//
// int main() {
//  // Create two Employee objects
//  Employee employee1(30, 5, 50000.0);
//  Employee employee2(25, 2, 40000.0);
//
//  // Set data for the first employee using the setter methods
//  employee1.setAge(30);
//  employee1.setYearsOfService(5);
//  employee1.setSalary(50000.0);
//
//  // Set data for the second employee using the setter methods
//  employee2.setAge(25);
//  employee2.setYearsOfService(2);
//  employee2.setSalary(40000.0);
//
//  // Print the values for both employees using the getter methods
//  std::cout << "Employee 1:" << std::endl;
//  std::cout << "Age: " << employee1.getAge() << std::endl;
//  std::cout << "Years of Service: " << employee1.getYearsOfService() << std::endl;
//  std::cout << "Salary: " << employee1.getSalary() << std::endl;
//
//  std::cout << std::endl;
//
//  std::cout << "Employee 2:" << std::endl;
//  std::cout << "Age: " << employee2.getAge() << std::endl;
//  std::cout << "Years of Service: " << employee2.getYearsOfService() << std::endl;
//  std::cout << "Salary: " << employee2.getSalary() << std::endl;
//
//  return 0;
// }
// 5. На основі програми з вправи 3 створіть метод класу Employee, який повідомляє, скільки тисяч доларів заробляє службовець, округляючи відповідь до 10 доларів.
// #include <iostream>
// #include <cmath>
//
// class Employee {
// public:
//  Employee(int age, int yearsOfService, double salary)
//      : age(age), yearsOfService(yearsOfService), salary(salary) {}
//
//  int getAge() const { return age; }
//  int getYearsOfService() const { return yearsOfService; }
//  double getSalary() const { return salary; }
//
//  void setAge(int newAge) { age = newAge; }
//  void setYearsOfService(int newYears) { yearsOfService = newYears; }
//  void setSalary(double newSalary) { salary = newSalary; }
//
//  int getSalaryInThousands() const {
//   return static_cast<int>(std::round(salary / 1000) * 10);
//  }
//
// private:
//  int age;
//  int yearsOfService;
//  double salary;
// };
//
// int main() {
//  // Create two Employee objects
//  Employee employee1(30, 5, 50000.0);
//  Employee employee2(25, 2, 40000.0);
//
//  // Set data for the first employee using the setter methods
//  employee1.setAge(30);
//  employee1.setYearsOfService(5);
//  employee1.setSalary(50000.0);
//
//  // Set data for the second employee using the setter methods
//  employee2.setAge(25);
//  employee2.setYearsOfService(2);
//  employee2.setSalary(40000.0);
//
//  // Print the values for both employees using the getter methods
//  std::cout << "Employee 1:" << std::endl;
//  std::cout << "Salary in thousands: $" << employee1.getSalaryInThousands() << std::endl;
//
//  std::cout << std::endl;
//
//  std::cout << "Employee 2:" << std::endl;
//  std::cout << "Salary in thousands: $" << employee2.getSalaryInThousands() << std::endl;
//
//  return 0;
// }
// 6. Змініть клас Employee так, щоб можна було ініціалізувати дані-члени age, YearsofService і Salary у процесі "створення" службовця.
// #include <iostream>
//
// class Employee {
// public:
//  Employee(int age, int yearsOfService, double salary)
//      : age(age), yearsOfService(yearsOfService), salary(salary) {}
//
//  int getAge() const { return age; }
//  int getYearsOfService() const { return yearsOfService; }
//  double getSalary() const { return salary; }
//
//  void setAge(int newAge) { age = newAge; }
//  void setYearsOfService(int newYears) { yearsOfService = newYears; }
//  void setSalary(double newSalary) { salary = newSalary; }
//
//  int getSalaryInThousands() const {
//   return static_cast<int>(std::round(salary / 1000) * 10);
//  }
//
// private:
//  int age;
//  int yearsOfService;
//  double salary;
// };
//
// int main() {
//  // Create two Employee objects with initial data
//  Employee employee1(30, 5, 50000.0);
//  Employee employee2(25, 2, 40000.0);
//
//  // Print the values for both employees using the getter methods
//  std::cout << "Employee 1:" << std::endl;
//  std::cout << "Age: " << employee1.getAge() << std::endl;
//  std::cout << "Years of Service: " << employee1.getYearsOfService() << std::endl;
//  std::cout << "Salary: " << employee1.getSalary() << std::endl;
//
//  std::cout << std::endl;
//
//  std::cout << "Employee 2:" << std::endl;
//  std::cout << "Age: " << employee2.getAge() << std::endl;
//  std::cout << "Years of Service: " << employee2.getYearsOfService() << std::endl;
//  std::cout << "Salary: " << employee2.getSalary() << std::endl;
//
//  return 0;
// }
// 7. Баги: що неправильно в наступному оголошенні?
//
//
//
// class Square
// {
// public:
//  int Side;
// }
// В оголошенні класу Square є деякі проблеми, які можуть викликати неправильну поведінку програми:
// Прямий доступ до даних класу: У даному випадку, поле Side є відкритим і доступним безпосередньо ззовні класу. Це порушує принцип інкапсуляції, оскільки зовнішній код може безпосередньо змінювати значення Side без жодних перевірок або логіки. Краще було б зробити поле Side приватним і надати публічні методи для доступу до нього.
// Ось оновлений код, де поле Side є приватним, а доступ до нього здійснюється через публічні методи:
// #include <iostream>
//
// class Square {
// public:
//  void setSide(int side) {
//   Side = side;
//  }
//
//  int getSide() const {
//   return Side;
//  }
//
// private:
//  int Side;
// };
//
// int main() {
//  Square square;
//  square.setSide(5);
//  std::cout << "Side of the square: " << square.getSide() << std::endl;
//
//  return 0;
// }
// 8. Баги: що дуже корисне відсутнє у наступному оголошенні класу?
//
//
//
//
// class Cat
// {
//  int GetAge() const;
//
// private:
//  int itsAge;
// };
// У вказаному оголошенні класу Cat відсутній конструктор, який ініціалізує поле itsAge класу. Це може призвести до невизначеного стану об'єкта Cat, оскільки поле itsAge не буде автоматично ініціалізоване при створенні об'єкта.
// Додавання конструктора для ініціалізації поля itsAge допоможе уникнути невизначеності стану об'єкта. Ось оновлений код з конструктором:
// #include <iostream>
//
// class Cat {
// public:
//  Cat(int age) : itsAge(age) {}
//
//  int GetAge() const {
//   return itsAge;
//  }
//
// private:
//  int itsAge;
// };
//
// int main() {
//  Cat myCat(5);
//  std::cout << "Cat's age: " << myCat.GetAge() << std::endl;
//
//  return 0;
// // }
// 9. Баги: які три помилки виявить компілятор у цьому коді?
//
//
//
//
// class TV
// {
// public:
//  void SetStation(int Station);
//  int GetStation() const;
//
// private:
//  int itsStation;
// };
// main()
// {
//  TV myTV;
//  myTV.itsStation = 9;
//  TV.SetStation(10);
//  TV myOtherTV(2);
// }
// У вказаному коді виявлено три помилки, які виявить компілятор:
// Виклик статичного методу без об'єкта класу: У рядку TV.SetStation(10); спробувано викликати статичний метод SetStation класу TV без створення об'єкта класу TV. Статичні методи викликаються на клас, а не на об'єкт класу. Ось правильний спосіб виклику статичного методу: TV::SetStation(10);.
// Використання приватного поля без методу доступу: У рядку myTV.itsStation = 9; спробувано прямим доступом змінити значення приватного поля itsStation об'єкта myTV. Але поля класу є приватними і недоступні безпосередньо ззовні класу. Краще було б використовувати методи доступу до даних, наприклад, метод SetStation для встановлення значення itsStation.
// Виклик конструктора з неправильним синтаксисом: У рядку TV myOtherTV(2); спробувано створити новий об'єкт класу TV з передачем аргументу 2. Але правильний синтаксис для виклику конструктора - це TV myOtherTV(2);.
// Ось виправлений код з усуненням виявлених помилок:
#include <iostream>

class TV
{
public:
 TV() : itsStation(0) {}
 TV(int station) : itsStation(station) {}

 void SetStation(int Station);
 int GetStation() const;

private:
 int itsStation;
};

int main()
{
 TV myTV;
 myTV.SetStation(9);
 myTV.SetStation(10);
 TV myOtherTV(2);

 return 0;
}

void TV::SetStation(int Station)
{
 itsStation = Station;
}

int TV::GetStation() const
{
 return itsStation;
}
