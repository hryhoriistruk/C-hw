//1. Запишіть блок try та оператор catch для відстеження та обробки простого виключення.
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    try
//    {
//        int a = 10;
//        int b = 0;
//
//        if (b == 0)
//        {
//            throw "Division by zero error";
//        }
//
//        int result = a / b;
//        cout << "Result: " << result << endl;
//    }
//    catch (const char *errMsg)
//    {
//        cerr << "Error: " << errMsg << endl;
//    }
//
//    return 0;
//}
//2. Додайте у виняток, отриманий у вправі 1, змінну-член та метод доступу та використовуйте їх у блоці оператора catch.
//#include <iostream>
//using namespace std;
//
//class DivisionByZeroError
//{
//public:
//    DivisionByZeroError(const char *msg) : errorMessage(msg) {}
//
//    const char *GetErrorMessage() const
//    {
//        return errorMessage;
//    }
//
//private:
//    const char *errorMessage;
//};
//
//int main()
//{
//    try
//    {
//        int a = 10;
//        int b = 0;
//
//        if (b == 0)
//        {
//            throw DivisionByZeroError("Division by zero error");
//        }
//
//        int result = a / b;
//        cout << "Result: " << result << endl;
//    }
//    catch (const DivisionByZeroError &error)
//    {
//        cerr << "Error: " << error.GetErrorMessage() << endl;
//    }
//
//    return 0;
//}
//3. Успадкуйте новий виняток від виключення, отриманого у вправі 2. Змініть блок оператора catch таким чином, щоб у ньому відбувалася обробка як похідного, так і базового виключення.
//#include <iostream>
//using namespace std;
//
//class DivisionByZeroError
//{
//public:
//    DivisionByZeroError(const char *msg) : errorMessage(msg) {}
//
//    const char *GetErrorMessage() const
//    {
//        return errorMessage;
//    }
//
//private:
//    const char *errorMessage;
//};
//
//class NewError : public DivisionByZeroError
//{
//public:
//    NewError(const char *msg) : DivisionByZeroError(msg) {}
//};
//
//int main()
//{
//    try
//    {
//        int a = 10;
//        int b = 0;
//
//        if (b == 0)
//        {
//            throw NewError("New error message");
//        }
//
//        int result = a / b;
//        cout << "Result: " << result << endl;
//    }
//    catch (const NewError &error)
//    {
//        cerr << "New Error: " << error.GetErrorMessage() << endl;
//    }
//    catch (const DivisionByZeroError &error)
//    {
//        cerr << "Division By Zero Error: " << error.GetErrorMessage() << endl;
//    }
//
//    return 0;
//}
//4. Змініть код вправи 3, щоб отримати трирівневий виклик функції.
//#include <iostream>
//using namespace std;
//
//class DivisionByZeroError
//{
//public:
//    DivisionByZeroError(const char *msg) : errorMessage(msg) {}
//
//    const char *GetErrorMessage() const
//    {
//        return errorMessage;
//    }
//
//private:
//    const char *errorMessage;
//};
//
//class NewError : public DivisionByZeroError
//{
//public:
//    NewError(const char *msg) : DivisionByZeroError(msg) {}
//};
//
//void levelThree()
//{
//    int a = 10;
//    int b = 0;
//
//    if (b == 0)
//    {
//        throw NewError("New error message");
//    }
//
//    int result = a / b;
//    cout << "Result: " << result << endl;
//}
//
//void levelTwo()
//{
//    try
//    {
//        levelThree();
//    }
//    catch (const NewError &error)
//    {
//        cerr << "New Error: " << error.GetErrorMessage() << endl;
//        throw;
//    }
//}
//
//void levelOne()
//{
//    try
//    {
//        levelTwo();
//    }
//    catch (const DivisionByZeroError &error)
//    {
//        cerr << "Division By Zero Error: " << error.GetErrorMessage() << endl;
//    }
//}
//
//int main()
//{
//    try
//    {
//        levelOne();
//    }
//    catch (const DivisionByZeroError &error)
//    {
//        cerr << "Division By Zero Error: " << error.GetErrorMessage() << endl;
//    }
//
//    return 0;
//}
//5. Жучки: що неправильно в наступному коді?
//#include <iostream>
//#include <string>
//using namespace std;
//
//class xOutOfMemory
//{
//public:
//    xOutOfMemory()
//    {
//        theMsg = new char[20];
//        strcpy(theMsg, "error in memory");
//    }
//    ~xOutOfMemory()
//    {
//        delete[] theMsg;
//        cout << "Memory restored. " << endl;
//    }
//    char *Message() { return theMsg; }
//
//private:
//    char *theMsg;
//};
//
//int main()
//{
//    try
//    {
//        char *var = new char;
//        if (var == nullptr)
//        {
//            xOutOfMemory *px = new xOutOfMemory;
//            throw px;
//        }
//    }
//    catch (xOutOfMemory *theException)
//    {
//        cout << theException->Message() << endl;
//        delete theException;
//    }
//    return 0;
//}
//Даний приклад містить потенційну помилку, подібну до спроби виділити пам'ять для показу повідомлення про помилку у разі виявлення нестачі вільної пам'яті.
//Ви можете протестувати цю програму, змінивши рядок if (var == 0) на if (1), що викликає створення винятку.
//Проблема в даному коді полягає в тому, що пам'ять виділяється за допомогою оператора new, але відсутнє відповідне видалення пам'яті за допомогою оператора delete. Коли виникає виняток і об'єкт xOutOfMemory створюється, він не буде видалений після обробки винятку, що може призвести до витоку пам'яті. Для виправлення цієї проблеми потрібно видаляти об'єкт xOutOfMemory після обробки винятку.
#include <iostream>
#include <string>
using namespace std;

class xOutOfMemory
{
public:
    xOutOfMemory()
    {
        theMsg = new char[20];
        strcpy(theMsg, "error in memory");
    }
    ~xOutOfMemory()
    {
        delete[] theMsg;
        cout << "Memory restored. " << endl;
    }
    char *Message() { return theMsg; }

private:
    char *theMsg;
};

int main()
{
    try
    {
        char *var = new char;
        if (var == nullptr)
        {
            xOutOfMemory *px = new xOutOfMemory;
            throw px;
        }
        delete var; // Додати видалення пам'яті
    }
    catch (xOutOfMemory *theException)
    {
        cout << theException->Message() << endl;
        delete theException; // Видалення об'єкта xOutOfMemory
    }
    return 0;
}

