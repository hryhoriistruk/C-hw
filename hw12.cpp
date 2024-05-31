// Запишіть віртуальний конструктор-копіювальник для класу Square.
//
// class Square : public Rectangle {};
// #include <iostream>
//
// class Shape {
// public:
//     virtual void draw() = 0;
//     virtual Shape* clone() const = 0;
//     virtual ~Shape() {}
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
//     void draw() override {
//         std::cout << "Drawing a rectangle with width: " << width << " and height: " << height << std::endl;
//     }
//
//     Shape* clone() const override {
//         return new Rectangle(width, height);
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
//
//     Square* clone() const override {
//         return new Square(getWidth());
//     }
//
// private:
//     int getWidth() const {
//         return width;
//     }
// };
//
// int main() {
//     Square square(5);
//     Shape* squareClone = square.clone();
//     squareClone->draw();
//
//     delete squareClone;
//
//     return 0;
// }
// Жучки: що неправильно у наступному програмному коді?
//
// void SomeFunction(Shape);
// Shape *pRect = new Rectangle;
// SomeFunction(*pRect);
// Проблема в цьому коді полягає в тому, що SomeFunction очікує параметр типу Shape, але ви передаєте вказівник на об'єкт Rectangle. Це заборонено, оскільки Rectangle не є підкласом Shape.
// Щоб вирішити цю проблему, ви можете змінити тип параметра SomeFunction на Rectangle або створити віртуальний деструктор у класі Shape і перевизначити його в класі Rectangle. Це дозволить передати покажчик на базовий клас Shape та викликати відповідну похідну функцію класу.
// Нижче наведено приклад того, як можна змінити код, щоб вирішити цю проблему :
// class Shape {
// public:
//     virtual void draw() = 0;
//     virtual ~Shape() {}
// };
//
// class Rectangle : public Shape {
// public:
//     void draw() override {
//         // Implementation of draw for Rectangle
//     }
// };
//
// void SomeFunction(Shape& shape) {
//     // Implementation of SomeFunction
//     shape.draw();
// }
//
// int main() {
//     Shape *pRect = new Rectangle;
//     SomeFunction(*pRect);
//
//     delete pRect;
//
//     return 0;
// }
// Ось повний код:
// 3. Жучки: що неправильно у наступному програмному коді?
//
// class Shape
// {
// public:
//     Shape();
//     virtual ~Shape();
//     virtual Shape(const Shape&);
// };
// Виходячи з контексту з вашої поточної кодової бази, проблема в наданому коді полягає в тому, що в класі Shape відсутній віртуальний деструктор.
// У мові C++, коли клас має хоча б одну віртуальну функцію, рекомендується оголосити віртуальний деструктор і в цьому класі. Це гарантує, що при видаленні об'єкту через покажчик на базовий клас деструктор похідного класу викликається належним чином.
 // Ось приклад того, як ви можете змінити код, щоб включити віртуальний деструктор:
// class Shape
// {
// public:
//     Shape();
//     virtual ~Shape() {}
//     virtual Shape(const Shape&) = 0;
// };
// У цьому модифікованому коді клас Shape тепер має віртуальний деструктор, оголошений за допомогою ключового слова virtual. Синтаксис = 0 вказує на те, що клас Shape є абстрактним базовим класом і не може бути створений безпосередньо.
// Ось повний код:
#include <iostream>

class Shape {
public:
 Shape() = default;
 virtual ~Shape() = default;
 virtual void draw() const = 0;
};

class Rectangle : public Shape {
private:
 int width;
 int height;

public:
 Rectangle(int width, int height) : width(width), height(height) {}

 void draw() const override {
  std::cout << "Drawing a rectangle with width: " << width << " and height: " << height << std::endl;
 }

 int getWidth() const {
  return width;
 }
};

class Square : public Rectangle {
public:
 Square(int sideLength) : Rectangle(sideLength, sideLength) {}

 void draw() const override {
  std::cout << "Drawing a square with side length: " << getWidth() << std::endl;
 }
};

int main() {
 Square square(5);
 square.draw();

 return 0;
}
