// 1. Оголосіть клас Animal (Тварина), який містить змінну-член, яка є об'єктом класу String
// #include <string>
//
// class Animal {
// public:
//     std::string name;
// };
//
// int main() {
//     Animal myAnimal;
//     myAnimal.name = "Dog";
//
//     return 0;
// }
// 2. Опишіть клас BoundedAray, який є масивом.

// #include <iostream>
//
// template <typename T, int size>
// class BoundedArray {
// private:
//     T array[size];
//
// public:
//     // Constructor
//     BoundedArray() {
//         // Initialize the array elements
//         for (int i = 0; i < size; ++i) {
//             array[i] = T();
//         }
//     }
//
//     // Public member function to access an element of the array
//     T& getElement(int index) {
//         return array[index];
//     }
// };
//
// int main() {
//     BoundedArray<int, 5> myArray;
//
//     // Accessing and modifying elements of the array using public member functions
//     myArray.getElement(0) = 10;
//     myArray.getElement(1) = 20;
//
//     // Displaying the elements of the array
//     for (int i = 0; i < 5; ++i) {
//         std::cout << "Element at index " << i << ": " << myArray.getElement(i) << std::endl;
//     }
//
//     return 0;
// }

// 3. Опишіть клас Set, який виконується в межах масиву BoundedAray.
// #include <iostream>
// #include <algorithm>
// #include <stdexcept>
//
// template <typename T, int size>
// class BoundedArray {
// private:
//     T array[size];
//
// public:
//     // Constructor
//     BoundedArray() {
//         // Initialize the array elements
//         for (int i = 0; i < size; ++i) {
//             array[i] = T();
//         }
//     }
//
//     // Public member function to access an element of the array
//     T& getElement(int index) {
//         return array[index];
//     }
// };
//
// template <typename T, int size>
// class Set {
// private:
//     BoundedArray<T, size> elements;
//
// public:
//     // Function to add an element to the set
//     void addElement(T element) {
//         for (int i = 0; i < size; ++i) {
//             if (elements.getElement(i) == T()) {
//                 elements.getElement(i) = element;
//                 return;
//             }
//         }
//         throw std::out_of_range("Set is full");
//     }
//
//     // Function to check if an element is in the set
//     bool containsElement(T element) {
//         for (int i = 0; i < size; ++i) {
//             if (elements.getElement(i) == element) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };
//
// int main() {
//     Set<int, 5> mySet;
//
//     // Adding elements to the set
//     mySet.addElement(10);
//     mySet.addElement(20);
//
//     // Checking if elements are in the set
//     std::cout << "Set contains 10: " << mySet.containsElement(10) << std::endl;
//     std::cout << "Set contains 30: " << mySet.containsElement(30) << std::endl;
//
//     return 0;
// }
// 4. Змініть лістинг 15_1 таким чином, щоб клас String включав перевантажений оператор виведення (>>).
// #include <iostream>
//
// class String {
// private:
//     char* str;
//
// public:
//     // Constructor
//     String(const char* s = nullptr) {
//         if (s == nullptr) {
//             str = new char[1];
//             str[0] = '\0';
//         } else {
//             int length = strlen(s);
//             str = new char[length + 1];
//             strcpy(str, s);
//         }
//     }
//
//     // Destructor
//     ~String() {
//         delete[] str;
//     }
//
//     // Overloaded output operator
//     friend std::ostream& operator<<(std::ostream& os, const String& s) {
//         os << s.str;
//         return os;
//     }
// };
//
// int main() {
//     String s1("Hello");
//     String s2("World");
//
//     std::cout << s1 << " " << s2 << std::endl;
//
//     return 0;
// }
// 5. Жучки: що неправильно у цій програмі?
// #include <iostream>
// #include <string>
//
// using namespace std;
//
// class Animal;
//
// void setValue(Animal &, int);
//
// class Animal
// {
// public:
//     int GetWeight() const { return itsWeight; }
//     int GetAge() const { return itsAge; }
//
// private:
//     int itsWeight;
//     int itsAge;
// };
//
// void setValue(Animal &theAnimal, int theWeight)
// {
//     friend class Animal;
//     theAnimal.itsWeight = theWeight;
// }
//
// int main()
// {
//     Animal peppy;
//     setValue(peppy, 5);
//     return 0;
// }
// У цій програмі є кілька проблем:
// Визначення функції setValue вже містить прототип friend class Animal;, тому не потрібно повторювати цю декларацію всередині функції.
// Ви не можете додати friend class Animal; всередині функції, це визначення повинно бути розташоване всередині класу Animal, а не всередині функції setValue.
// Ось виправлений код:

// #include <iostream>
// #include <string>
//
// using namespace std;
//
// class Animal;
//
// void setValue(Animal &, int);
//
// class Animal
// {
// public:
//     int GetWeight() const { return itsWeight; }
//     int GetAge() const { return itsAge; }
//
//     friend void setValue(Animal &theAnimal, int theWeight); // Declaration of setValue as a friend function
// private:
//     int itsWeight;
//     int itsAge;
// };
//
// void setValue(Animal &theAnimal, int theWeight)
// {
//     theAnimal.itsWeight = theWeight;
// }
//
// int main()
// {
//     Animal peppy;
//     setValue(peppy, 5);
//     return 0;
// }
// 6. Виправте лістинг, наведений у вправі 5, та відкомпілюйте його.
// #include <iostream>
// #include <string>
//
// using namespace std;
//
// class Animal;
//
// void setValue(Animal &, int);
//
// class Animal
// {
// public:
//     int GetWeight() const { return itsWeight; }
//     int GetAge() const { return itsAge; }
//
//     friend void setValue(Animal &theAnimal, int theWeight); // Declaration of setValue as a friend function
// private:
//     int itsWeight;
//     int itsAge;
// };
//
// void setValue(Animal &theAnimal, int theWeight)
// {
//     theAnimal.itsWeight = theWeight;
// }
//
// int main()
// {
//     Animal peppy;
//     setValue(peppy, 5);
//
//     cout << "Weight of peppy: " << peppy.GetWeight() << endl;
//
//     return 0;
// }
// 7. Жучки: що неправильно у цій програмі?
// #include <iostream>
// #include <string>
//
// using namespace std;
//
// class Animal;
//
// void setValue(Animal &, int);
//
// void setValue(Animal &, int, int);
//
// class Animal
// {
//     friend void setValue(Animal &, int);
//
// private:
//     int itsWeight;
//     int itsAge;
// };
//
// void setValue(Animal &theAnimal, int theWeight)
// {
//     theAnimal.itsWeight = theWeight;
// }
//
// void setValue(Animal &theAnimal, int theWeight, int theAge)
// {
//     theAnimal.itsWeight = theWeight;
//     theAnimal.itsAge = theAge;
// }
//
// int main()
// {
//     Animal peppy;
//     setValue(peppy, 5);
//     setValue(peppy, 7, 9);
//     return 0;
// }

// У цій програмі є проблема. Функції setValue мають однакові сигнатури, тому компілятор буде вважати їх однаковими, що призведе до помилки компіляції.
// Один з способів виправити цю проблему - зробити функції setValue перевантаженими за кількістю параметрів. Ось виправлений код:
#include <iostream>
#include <string>

using namespace std;

class Animal;

void setValue(Animal &, int);
void setValue(Animal &, int, int);

class Animal
{
    friend void setValue(Animal &, int);
    friend void setValue(Animal &, int, int);

private:
    int itsWeight;
    int itsAge;
};

void setValue(Animal &theAnimal, int theWeight)
{
    theAnimal.itsWeight = theWeight;
}

void setValue(Animal &theAnimal, int theWeight, int theAge)
{
    theAnimal.itsWeight = theWeight;
    theAnimal.itsAge = theAge;
}

int main()
{
    Animal peppy;
    setValue(peppy, 5);
    setValue(peppy, 7, 9);
    return 0;
}
