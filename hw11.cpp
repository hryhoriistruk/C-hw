// 1. Перевантажте оператори преінкремента та постінкремента для використання у вашому класі SimpleCircle зі змінною itsRadius.
// #include <iostream>
//
// class SimpleCircle {
// public:
//     SimpleCircle(int radius) : itsRadius(radius) {}
//
//     int getRadius() const {
//         return itsRadius;
//     }
//
//     void setRadius(int newRadius) {
//         itsRadius = newRadius;
//     }
//
//     // Pre-increment operator overload
//     SimpleCircle& operator++() {
//         itsRadius++;
//         return *this;
//     }
//
//     // Post-increment operator overload
//     SimpleCircle operator++(int) {
//         SimpleCircle oldValue = *this;
//         itsRadius++;
//         return oldValue;
//     }
//
// private:
//     int itsRadius;
// };
//
// // Example usage
// int main() {
//     SimpleCircle circle(5);
//     std::cout << "Radius before increment: " << circle.getRadius() << std::endl;
//
//     // Pre-increment
//     ++circle;
//     std::cout << "Radius after pre-increment: " << circle.getRadius() << std::endl;
//
//     // Post-increment
//     SimpleCircle oldCircle = circle++;
//     std::cout << "Radius after post-increment: " << circle.getRadius() << std::endl;
//     std::cout << "Radius of oldCircle: " << oldCircle.getRadius() << std::endl;
//
//     return 0;
// }

// 2. Змініть SimpleCircle таким чином, щоб зберігати itsRadius в динамічній області пам'яті і фіксувати існуючі методи.
// #include <iostream>
//
// class SimpleCircle {
// public:
//     SimpleCircle(int radius) {
//         itsRadius = new int(radius);
//     }
//
//     ~SimpleCircle() {
//         if (itsRadius != nullptr) {
//             delete itsRadius;
//             itsRadius = nullptr;
//         }
//     }
//
//     int getRadius() const {
//         return *itsRadius;
//     }
//
//     void setRadius(int newRadius) {
//         *itsRadius = newRadius;
//     }
//
//     // Pre-increment operator overload
//     SimpleCircle& operator++() {
//         ++(*itsRadius);
//         return *this;
//     }
//
//     // Post-increment operator overload
//     SimpleCircle operator++(int) {
//         SimpleCircle oldValue = *this;
//         ++(*itsRadius);
//         return oldValue;
//     }
//
// private:
//     int* itsRadius;
// };
//
// int main() {
//     SimpleCircle circle(5);
//     std::cout << "Radius before increment: " << circle.getRadius() << std::endl;
//
//     // Pre-increment
//     ++circle;
//     std::cout << "Radius after pre-increment: " << circle.getRadius() << std::endl;
//
//     // Post-increment
//     SimpleCircle oldCircle = circle++;
//     std::cout << "Radius after post-increment: " << circle.getRadius() << std::endl;
//     std::cout << "Radius of oldCircle: " << oldCircle.getRadius() << std::endl;
//
//     return 0;
// }
// 3. Створіть у класі SimpleCircle конструктор-копіювальник.
// #include <iostream>
//
// class SimpleCircle {
// public:
//     SimpleCircle(int radius) {
//         itsRadius = new int(radius);
//     }
//
//     SimpleCircle(const SimpleCircle& other) {
//         itsRadius = new int(*other.itsRadius);
//     }
//
//     ~SimpleCircle() {
//         if (itsRadius != nullptr) {
//             delete itsRadius;
//             itsRadius = nullptr;
//         }
//     }
//
//     int getRadius() const {
//         return *itsRadius;
//     }
//
//     void setRadius(int newRadius) {
//         *itsRadius = newRadius;
//     }
//
//     // Pre-increment operator overload
//     SimpleCircle& operator++() {
//         ++(*itsRadius);
//         return *this;
//     }
//
//     // Post-increment operator overload
//     SimpleCircle operator++(int) {
//         SimpleCircle oldValue = *this;
//         ++(*itsRadius);
//         return oldValue;
//     }
//
// private:
//     int* itsRadius;
// };
//
// int main() {
//     SimpleCircle circle1(5);
//     std::cout << "Radius of circle1: " << circle1.getRadius() << std::endl;
//
//     SimpleCircle circle2(circle1); // Copy constructor
//     std::cout << "Radius of circle2: " << circle2.getRadius() << std::endl;
//
//     return 0;
// }
// 4. Перевантажте у класі SimpleCircle оператор присвоєння.
// #include <iostream>
//
// class SimpleCircle {
// public:
//     SimpleCircle(int radius) {
//         itsRadius = new int(radius);
//     }
//
//     SimpleCircle(const SimpleCircle& other) {
//         itsRadius = new int(*other.itsRadius);
//     }
//
//     ~SimpleCircle() {
//         if (itsRadius != nullptr) {
//             delete itsRadius;
//             itsRadius = nullptr;
//         }
//     }
//
//     SimpleCircle& operator=(const SimpleCircle& other) {
//         if (this != &other) {
//             if (itsRadius != nullptr) {
//                 delete itsRadius;
//             }
//             itsRadius = new int(*other.itsRadius);
//         }
//         return *this;
//     }
//
//     int getRadius() const {
//         return *itsRadius;
//     }
//
//     void setRadius(int newRadius) {
//         *itsRadius = newRadius;
//     }
//
//     // Pre-increment operator overload
//     SimpleCircle& operator++() {
//         ++(*itsRadius);
//         return *this;
//     }
//
//     // Post-increment operator overload
//     SimpleCircle operator++(int) {
//         SimpleCircle oldValue = *this;
//         ++(*itsRadius);
//         return oldValue;
//     }
//
// private:
//     int* itsRadius;
// };
//
// int main() {
//     SimpleCircle circle1(5);
//     std::cout << "Radius of circle1: " << circle1.getRadius() << std::endl;
//
//     SimpleCircle circle2(10);
//     std::cout << "Radius of circle2 before assignment: " << circle2.getRadius() << std::endl;
//
//     circle2 = circle1; // Assignment operator overload
//     std::cout << "Radius of circle2 after assignment: " << circle2.getRadius() << std::endl;
//
//     return 0;
// }
// // 5. Напишіть програму, яка створює два об'єкти класу SimpleCircle. Для створення одного об'єкта використовуйте конструктор, заданий за замовчуванням, а другому екземпляру при оголошенні надайте значення 9. З кожним із об'єктів використовуйте оператор інкремента та виведіть отримані значення на друк. Нарешті, надайте значення одного об'єкта іншому об'єкту та виведіть результат на друк.
// #include <iostream>
//
// class SimpleCircle {
// public:
//     SimpleCircle(int radius) {
//         itsRadius = new int(radius);
//     }
//
//     SimpleCircle(const SimpleCircle& other) {
//         itsRadius = new int(*other.itsRadius);
//     }
//
//     ~SimpleCircle() {
//         if (itsRadius != nullptr) {
//             delete itsRadius;
//             itsRadius = nullptr;
//         }
//     }
//
//     int getRadius() const {
//         return *itsRadius;
//     }
//
//     void setRadius(int newRadius) {
//         *itsRadius = newRadius;
//     }
//
//     // Pre-increment operator overload
//     SimpleCircle& operator++() {
//         ++(*itsRadius);
//         return *this;
//     }
//
//     // Post-increment operator overload
//     SimpleCircle operator++(int) {
//         SimpleCircle oldValue = *this;
//         ++(*itsRadius);
//         return oldValue;
//     }
//
//     // Assignment operator overload
//     SimpleCircle& operator=(const SimpleCircle& other) {
//         if (this != &other) {
//             if (itsRadius != nullptr) {
//                 delete itsRadius;
//             }
//             itsRadius = new int(*other.itsRadius);
//         }
//         return *this;
//     }
//
// private:
//     int* itsRadius;
// };
//
// int main() {
//     // Create two SimpleCircle objects
//     SimpleCircle circle1(5);
//     SimpleCircle circle2(10);
//
//     // Use pre-increment operator
//     std::cout << "Radius of circle1 before pre-increment: " << circle1.getRadius() << std::endl;
//     ++circle1;
//     std::cout << "Radius of circle1 after pre-increment: " << circle1.getRadius() << std::endl;
//
//     // Use post-increment operator
//     std::cout << "Radius of circle2 before post-increment: " << circle2.getRadius() << std::endl;
//     SimpleCircle circle3 = circle2++;
//     std::cout << "Radius of circle2 after post-increment: " << circle2.getRadius() << std::endl;
//     std::cout << "Radius of circle3 after post-increment: " << circle3.getRadius() << std::endl;
//
//     // Assign the value of one object to another
//     std::cout << "Radius of circle1 before assignment: " << circle1.getRadius() << std::endl;
//     circle1 = circle2;
//     std::cout << "Radius of circle1 after assignment: " << circle1.getRadius() << std::endl;
//
//     return 0;
// }
// 6. Жучки: що неправильно у наступному прикладі використання оператора присвоєння?
// SQUARE SQUARE::operator=(const SQUARE &rhs)
// {
//     itsSide = new int;
//     *itsSide = rhs.GetSide();
//     return *this:
// }
//
// }
// У вашому коді оператора присвоєння для класу SQUARE є помилкою. В рядку itsSide = new int; виділяється динамічна пам'ять для змінної itsSide, але не встановлюється значення. Це може призвести до помилок, так як змінна itsSide не буде вказувати на правильну область пам'яті.
// Використовуючи оператор присвоєння, ви повинні встановити значення змінної itsSide на значення змінної rhs.GetSide(). Для цього потрібно видалити рядок itsSide = new int; і замінити його на рядок *itsSide = rhs.GetSide();
// Виправлений код :
// SQUARE& SQUARE::operator=(const SQUARE& rhs) {
//     if (this != &rhs) {
//         delete itsSide;
//         itsSide = new int(rhs.GetSide());
//     }
//     return *this;
// }
// Повний код:
// #include <iostream>
//
// class SQUARE {
// private:
//     int* itsSide;
//
// public:
//     SQUARE() : itsSide(nullptr) {}
//
//     SQUARE(int side) : itsSide(new int(side)) {}
//
//     SQUARE(const SQUARE& other) : itsSide(new int(*other.itsSide)) {}
//
//     ~SQUARE() {
//         delete itsSide;
//     }
//
//     int GetSide() const {
//         return *itsSide;
//     }
//
//     SQUARE& operator=(const SQUARE& rhs) {
//         if (this != &rhs) {
//             delete itsSide;
//             itsSide = new int(rhs.GetSide());
//         }
//         return *this;
//     }
// };
//
// int main() {
//     // Example usage
//     SQUARE square1(5);
//     SQUARE square2 = square1;
//     square2 = square1;
//
//     return 0;
// }
// 7. Жучки: що є неправильним у наступному прикладі використання оператора сумування?
// VeryShort VeryShort::operator+(const VeryShort &rhs)
// {
//     itsVal += rhs.GetItsVal();
//     return *this;
// }

// #include <iostream>
//
// class VeryShort {
// private:
//     short itsVal;
//
// public:
//     VeryShort(short value = 0) : itsVal(value) {}
//
//     short GetItsVal() const { return itsVal; }
//
//     VeryShort operator+(const VeryShort &rhs) const {
//         VeryShort result = *this; // create a copy of the left-hand side object
//         result.itsVal += rhs.GetItsVal(); // add the right-hand side value to the copy
//         return result; // return the resulting object
//     }
// };
//
// int main() {
//     VeryShort a(5);
//     VeryShort b(3);
//
//     VeryShort result = a + b; // calls operator+
//
//     std::cout << "Result: " << result.GetItsVal() << std::endl;
//
//     return 0;
// }
// Помилка була в реалізації оператора + для класу VeryShort. Спочатку оператор + був реалізований як член функція класу, що означало, що лівий операнд був доступний через this, а правий операнд був переданий як параметр функції.
//
// Однак, при реалізації оператора + як члена функції класу, результат операції додавання був присвоєний самому об'єкту, а не повертався як новий об'єкт. Це призводило до зміни початкового об'єкту, що не є очікуваною поведінкою для оператора +.
//
// Коректна реалізація оператора + повинна створювати новий об'єкт, що містить результат операції додавання, а не змінювати початковий об'єкт. Це було досягнуто шляхом створення копії лівого операнда, додавання правого операнда до копії, а потім повернення результату.
// 8. Запишіть оголошення класу Square, успадкованого від класу Rectangle, який, у свою чергу, виготовлений від класу Shape.
// class Shape {
// public:
//     virtual void draw() = 0;
// };
//
// class Rectangle : public Shape {
// public:
//     void draw() override {
//         // Implementation for drawing a rectangle
//     }
// };
//
// class Square : public Rectangle {
// public:
//     void draw() override {
//         // Implementation for drawing a square
//     }
// };
// Ось повний код:
// #include <iostream>
//
// class Shape {
// public:
//     virtual void draw() = 0;
// };
//
// class Rectangle : public Shape {
// protected:
//     int width;
//     int height;
//
// public:
//     Rectangle(int width, int height) : width(width), height(height) {}
//
//     int getWidth() const {
//         return width;
//     }
//
//     void draw() override {
//         std::cout << "Drawing a rectangle with width: " << width << " and height: " << height << std::endl;
//     }
// };
//
// class Square : public Rectangle {
// public:
//     Square(int sideLength) : Rectangle(sideLength, sideLength) {}
//
//     void draw() override {
//         std::cout << "Drawing a square with side length: " << getWidth() << std::endl;
//     }
// };
//
// int main() {
//     Square square(5);
//     square.draw();
//
//     return 0;
// }
// 9. Припустимо, що у попередньому прикладі об'єкт класу Shape не використовує параметри, об'єкт класу Rectangle приймає два параметри (length і width), а об'єкт класу Square - один параметр (length); запишіть конструктор класу Square.
#include <iostream>

class Shape {
public:
    virtual void draw() = 0;
};

class Rectangle : public Shape {
private:
    int width;
    int height;

public:
    Rectangle(int width, int height) : width(width), height(height) {}

    void draw() override {
        std::cout << "Drawing a rectangle with width: " << width << " and height: " << height << std::endl;
    }
};

class Square : public Rectangle {
private:
    int sideLength;

public:
    Square(int sideLength) : Rectangle(sideLength, sideLength), sideLength(sideLength) {}

    void draw() override {
        std::cout << "Drawing a square with side length: " << sideLength << std::endl;
    }
};

int main() {
    Square square(5);
    square.draw();

    return 0;
}
