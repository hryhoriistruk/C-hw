// 1.Напишіть коротку програму, яка оголошує клас з однією звичайною змінною-членом та однією статичною змінною-членом. Створіть конструктор, який виконує ініціалізацію змінної-члена та збільшення статичної змінної-члена. Потім оголосіть деструктор, який зменшує на одиницю значення статичної змінної.
// #include <iostream>
//
// class MyClass {
// private:
//     int regularVar;
//     static int staticVar;
//
// public:
//     MyClass(int var) : regularVar(var) {
//         staticVar++;
//     }
//
//     ~MyClass() {
//         staticVar--;
//     }
//
//     void printValues() {
//         std::cout << "Regular Variable: " << regularVar << std::endl;
//         std::cout << "Static Variable: " << staticVar << std::endl;
//     }
// };
//
// int MyClass::staticVar = 0;
//
// int main() {
//     MyClass obj1(10);
//     obj1.printValues();
//
//     MyClass obj2(20);
//     obj2.printValues();
//
//     {
//         MyClass obj3(30);
//         obj3.printValues();
//     }
//
//     return 0;
// }
// 2.Використовуючи програмний блок із вправи 1, напишіть коротку виконувальну програму, яка створює три об'єкти, а потім виводить значення їх змінних-членів та статичної змінної-члена класу. Потім послідовно видаляйте об'єкти та виводьте на екран значення статичної змінної-члена.
// #include <iostream>
//
// class MyClass {
// private:
//     int regularVar;
//     static int staticVar;
//
// public:
//     MyClass(int var) : regularVar(var) {
//         staticVar++;
//     }
//
//     ~MyClass() {
//         staticVar--;
//     }
//
//     static int getStaticVar() {
//         return staticVar;
//     }
//
//     void printValues() {
//         std::cout << "Regular Variable: " << regularVar << std::endl;
//         std::cout << "Static Variable: " << staticVar << std::endl;
//     }
// };
//
// int MyClass::staticVar = 0;
//
// int main() {
//     MyClass obj1(10);
//     MyClass obj2(20);
//     MyClass obj3(30);
//
//     obj1.printValues();
//     obj2.printValues();
//     obj3.printValues();
//
//     std::cout << "Static Variable after creating objects: " << MyClass::getStaticVar() << std::endl;
//
//     return 0;
// }
// Змініть програму з вправи 2 таким чином, щоб доступ до статичної змінної-члена здійснювався за допомогою статичної функції-члена. Зробіть статичну змінну-член закритою.
// #include <iostream>
//
// class MyClass {
// private:
//     int regularVar;
//     static int staticVar;
//
// public:
//     MyClass(int var) : regularVar(var) {
//         staticVar++;
//     }
//
//     ~MyClass() {
//         staticVar--;
//     }
//
//     static int getStaticVar() {
//         return staticVar;
//     }
//
//     void printValues() {
//         std::cout << "Regular Variable: " << regularVar << std::endl;
//         std::cout << "Static Variable: " << getStaticVar() << std::endl;
//     }
// };
//
// int MyClass::staticVar = 0;
//
// int main() {
//     MyClass obj1(10);
//     MyClass obj2(20);
//     MyClass obj3(30);
//
//     obj1.printValues();
//     obj2.printValues();
//     obj3.printValues();
//
//     return 0;
// }
// 4.Створіть у програмі з вправи 3 вказівник на функцію-член для доступу до значення нестатичної змінної-члена і скористайтеся ним для виведення цих значень на друк.
// #include <iostream>
// #include <functional>
//
// class MyClass {
// private:
//     int regularVar;
//     static int staticVar;
//
// public:
//     MyClass(int var) : regularVar(var) {
//         staticVar++;
//     }
//
//     ~MyClass() {
//         staticVar--;
//     }
//
//     static int getStaticVar() {
//         return staticVar;
//     }
//
//     int getRegularVar() const {
//         return regularVar;
//     }
//
//     void printValues() {
//         std::cout << "Regular Variable: " << regularVar << std::endl;
//         std::cout << "Static Variable: " << getStaticVar() << std::endl;
//     }
// };
//
// int MyClass::staticVar = 0;
//
// int main() {
//     MyClass obj1(10);
//     MyClass obj2(20);
//     MyClass obj3(30);
//
//     auto regularVarGetter = [](const MyClass& obj) { return obj.getRegularVar(); };
//
//     std::cout << "Regular Variable of obj1: " << regularVarGetter(obj1) << std::endl;
//     std::cout << "Regular Variable of obj2: " << regularVarGetter(obj2) << std::endl;
//     std::cout << "Regular Variable of obj3: " << regularVarGetter(obj3) << std::endl;
//
//     return 0;
// }
// 5.Додайте дві додаткові змінні-члени до класу з попередніх вправ. Додайте методи доступу, які повертають значення всіх цих змінних. Усі функції-члени повинні повертати значення однакового типу та мати однакову сигнатуру. Для доступу до цих методів використовуйте вказівник на функцію члена.
#include <iostream>
#include <functional>

class MyClass {
private:
    int regularVar;
    int additionalVar1;
    int additionalVar2;
    static int staticVar;

public:
    MyClass(int var) : regularVar(var), additionalVar1(var + 1), additionalVar2(var + 2) {
        staticVar++;
    }

    ~MyClass() {
        staticVar--;
    }

    static int getStaticVar() {
        return staticVar;
    }

    int getRegularVar() const {
        return regularVar;
    }

    int getAdditionalVar1() const {
        return additionalVar1;
    }

    int getAdditionalVar2() const {
        return additionalVar2;
    }

    void printValues() {
        std::cout << "Regular Variable: " << regularVar << std::endl;
        std::cout << "Additional Variable 1: " << additionalVar1 << std::endl;
        std::cout << "Additional Variable 2: " << additionalVar2 << std::endl;
        std::cout << "Static Variable: " << getStaticVar() << std::endl;
    }
};

int MyClass::staticVar = 0;

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(30);

    std::function<int(const MyClass&)> regularVarGetter = &MyClass::getRegularVar;
    std::function<int(const MyClass&)> additionalVar1Getter = &MyClass::getAdditionalVar1;
    std::function<int(const MyClass&)> additionalVar2Getter = &MyClass::getAdditionalVar2;

    std::cout << "Regular Variable of obj1: " << regularVarGetter(obj1) << std::endl;
    std::cout << "Additional Variable 1 of obj2: " << additionalVar1Getter(obj2) << std::endl;
    std::cout << "Additional Variable 2 of obj3: " << additionalVar2Getter(obj3) << std::endl;

    return 0;
}
