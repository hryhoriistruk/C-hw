// 1. Запишіть прототип для функції з ім'ям Perimeter, яка повертає значення типу unsigned long int та приймає два параметри типу unsigned short int.
unsigned long int Perimeter(unsigned short int a, unsigned short int b);
// 2. Запишіть визначення функції Perimeter згідно з оголошенням у вправі 1. Два параметри, що нею приймаються, представляють довжину і ширину прямокутника, а функція повертає його периметр (подвоєна довжина плюс подвоєна ширина).
// #include <iostream>
//
// unsigned long int Perimeter(unsigned short int length, unsigned short int width) {
//     return 2 * (length + width);
// }
//
// int main() {
//     unsigned short int length = 5;
//     unsigned short int width = 3;
//
//     unsigned long int result = Perimeter(length, width);
//     std::cout << "The perimeter of the rectangle is: " << result << std::endl;
//
//     return 0;
// }
// 3. Баги: що неправильно у цій функції?
//
//
//
//
// #include <iostream>
// using namespace std;
//
// void myFunc(unsigned short int x);
// int main()
// {
//     unsigned short int x, y;
//     y = myFunc(int);
//     cout << "x: " << x << "y: " << y << "\n";
// }
// void myFunc(unsigned short int x)
// {
//     return (4 * x);
// }
// З цим кодом є кілька проблем:
//
// Функція myFunc оголошується такою, що приймає незнаковий короткий параметр int, але коли вона викликається в main, їй передається тип int. Це призведе до помилки компіляції.
// Функція myFunc оголошується такою, що повертає значення типу void, але при виклику myFunc в main, значення, що повертається, присвоюється змінній y. Це призведе до помилки компіляції.
// Змінна x оголошується в main, але ніколи не ініціалізується. Тому, використовуючи його значення в коуті твердження в основному призведе до невизначеної поведінки.
// Використання простору імен std; Висловлювання, як правило, вважається поганою практикою, оскільки це може призвести до конфліктів імен та інших проблем. Краще явно вказувати простір імен для кожного використовуваного символу.
// #include <iostream>
//
// unsigned short int myFunc(unsigned short int x) {
//     return 4 * x;
// }
//
// int main() {
//     unsigned short int x = 5;
//     unsigned short int y = myFunc(x);
//     std::cout << "x: " << x << " y: " << y << std::endl;
//
//     return 0;
// }
// 4. Баги: що неправильно у цій функції?
//
//
//
//
//
// #include <iostream>
// using namespace std;
//
// int myFunc(unsigned short int x);
//
// int main()
// {
//     unsigned short int x, y;
//     y = myFunc(x);
//     cout << "x: " << x << " y: " << y << "\n";
// }
//
// int myFunc(unsigned short int x);
// {
//     return (4 * x);
// }
// З цим кодом є кілька проблем:
//
// Функція myFunc оголошується двічі, один раз з прототипом функції і один раз без неї. Це призведе до помилки компіляції.
// Змінна x оголошується в main, але ніколи не ініціалізується. Таким чином, використання його значення у виклику myFunc in main призведе до невизначеної поведінки.
// Використання простору імен std; Висловлювання, як правило, вважається поганою практикою, оскільки це може призвести до конфліктів імен та інших проблем. Краще явно вказувати простір імен за кожен використаний символ.
// #include <iostream>
//
// int myFunc(unsigned short int x) {
//     return 4 * x;
// }
//
// int main() {
//     unsigned short int x = 5;
//     unsigned short int y = myFunc(x);
//     std::cout << "x: " << x << " y: " << y << std::endl;
//
//     return 0;
// }
// 5. Напишіть функцію, яка приймає два параметри типу unsigned short int і повертає результат ділення першого параметра на другий. Функція не повинна виконувати операцію поділу, якщо друге число дорівнює нулю, але в цьому випадку вона має повернути значення -1.
// #include <iostream>
//
// int divide(unsigned short int a, unsigned short int b) {
//     if (b == 0) {
//         return -1;
//     } else {
//         return a / b;
//     }
// }
//
// int main() {
//     unsigned short int x = 10;
//     unsigned short int y = 2;
//     int result = divide(x, y);
//     std::cout << "Result: " << result << std::endl;
//     return 0;
// }
// 6. Напишіть програму, яка запитує у користувача два числа і викликає функцію, записану при виконанні вправи 5. Виведіть результат або повідомлення про помилку, якщо функція поверне значення, що дорівнює - 1.
// #include <iostream>
//
// int divide(unsigned short int a, unsigned short int b) {
//     if (b == 0) {
//         return -1;
//     } else {
//         return a / b;
//     }
// }
//
// int main() {
//     unsigned short int x, y;
//     std::cout << "Enter two numbers: ";
//     std::cin >> x >> y;
//     int result = divide(x, y);
//     if (result == -1) {
//         std::cout << "Error: division by zero is not allowed." << std::endl;
//     } else {
//         std::cout << "Result: " << result << std::endl;
//     }
//     return 0;
// }
// 7. Напишіть програму, яка запитує число та показник ступеня. Напишіть рекурсивну функцію, яка зводить число в ступінь шляхом багаторазового множення числа на себе, тобто. якщо число дорівнює 2, а показник ступеня дорівнює 4, то ця функція має повернути число 16.
#include <iostream>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;
    std::cout << "Enter a base number: ";
    std::cin >> base;
    std::cout << "Enter an exponent: ";
    std::cin >> exponent;
    int result = power(base, exponent);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
