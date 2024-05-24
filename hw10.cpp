// Представте оголошення класу SimpleCircle (просте коло) з єдиною зміною-членом його Radius (радіус). У класі повинні використовуватися конструктор та деструктор, задані за умовчанням, а також метод встановлення радіусу
// class SimpleCircle {
// private:
//     double radius;
//
// public:
//     SimpleCircle() = default;
//     ~SimpleCircle() = default;
//
//     void setRadius(double r) {
//         radius = r;
//     }
// };
// Ось повний код:
// #include <iostream>
//
// class SimpleCircle {
// private:
//     double radius;
//
// public:
//     SimpleCircle() = default;
//     ~SimpleCircle() = default;
//
//     void setRadius(double r) {
//         radius = r;
//     }
//
//     double getRadius() const {
//         return radius;
//     }
//
//     double getArea() const {
//         return 3.14159 * radius * radius;
//     }
//
//     double getCircumference() const {
//         return 2 * 3.14159 * radius;
//     }
// };
//
// int main() {
//     SimpleCircle circle;
//     circle.setRadius(5.0);
//
//     std::cout << "Radius: " << circle.getRadius() << std::endl;
//     std::cout << "Area: " << circle.getArea() << std::endl;
//     std::cout << "Circumference: " << circle.getCircumference() << std::endl;
//
//     return 0;
// }
// 2. Використовуючи клас, створений у вправі 1, за допомогою конструктора, заданого за замовчуванням, ініціалізуйте змінну його Radius значенням 5.
// #include <iostream>

// class SimpleCircle {
// private:
//     double radius;

// public:
//     SimpleCircle() : radius(5) {} // Initialize radius with value 5 using the constructor
//     ~SimpleCircle() = default;

//     void setRadius(double r) {
//         radius = r;
//     }

//     double getRadius() const {
//         return radius;
//     }

//     double getArea() const {
//         return 3.14159 * radius * radius;
//     }

//     double getCircumference() const {
//         return 2 * 3.14159 * radius;
//     }
// };

// int main() {
//     SimpleCircle circle; // Create an instance of SimpleCircle using the constructor

//     std::cout << "Radius: " << circle.getRadius() << std::endl;
//     std::cout << "Area: " << circle.getArea() << std::endl;
//     std::cout << "Circumference: " << circle.getCircumference() << std::endl;

//     return 0;
// }
// Ось повний код:
// #include <iostream>
//
// class SimpleCircle {
// private:
//     double radius;
//
// public:
//     SimpleCircle() = default;
//     ~SimpleCircle() = default;
//
//     SimpleCircle(double itsRadius) : radius(itsRadius) {
//     }
//
//     void setRadius(double r) {
//         radius = r;
//     }
//
//     double getRadius() const {
//         return radius;
//     }
//
//     double getArea() const {
//         return 3.14159 * radius * radius;
//     }
//
//     double getCircumference() const {
//         return 2 * 3.14159 * radius;
//     }
// };
//
// int main() {
//     SimpleCircle circle(5.0);
//
//     std::cout << "Radius: " << circle.getRadius() << std::endl;
//     std::cout << "Area: " << circle.getArea() << std::endl;
//     std::cout << "Circumference: " << circle.getCircumference() << std::endl;
//
//     return 0;
// }
