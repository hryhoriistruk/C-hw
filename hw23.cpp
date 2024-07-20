//1. Створіть шаблон на основі цього класу List:
//class List
//{
//public:
//    List() : head(0), tail(0), theCount(0) {}
//    virtual ~List();
//    void insert(int value);
//    void append(int value);
//    int is_present(int value) const;
//    int is_empty() const
//    {
//        return head == 0;
//    }
//    int count() const { return theCount; }
//private:
//    class ListCell
//    {
//    public:
//        ListCell(int value, ListCell *cell = 0) : val(value),
//                                                  next(cell) {}
//        int val;
//        ListCell *next;
//    };
//    int val;
//    ListCell *next;
//    ListCell *head;
//    ListCell *tail;
//    int theCount;
//};
//#include <iostream>
//
//template <typename T>
//class List
//{
//public:
//    List() : head(0), tail(0), theCount(0) {}
//    virtual ~List();
//
//    void insert(T value);
//    void append(T value);
//    int is_present(T value) const;
//    int is_empty() const
//    {
//        return head == 0;
//    }
//    int count() const { return theCount; }
//
//private:
//    class ListCell
//    {
//    public:
//        ListCell(T value, ListCell *cell = 0) : val(value), next(cell) {}
//        T val;
//        ListCell *next;
//    };
//
//    ListCell *head;
//    ListCell *tail;
//    int theCount;
//};
//
//template <typename T>
//List<T>::~List()
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        ListCell *next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//template <typename T>
//void List<T>::insert(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    newCell->next = head;
//    head = newCell;
//    if (tail == 0)
//    {
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//void List<T>::append(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    if (tail == 0)
//    {
//        head = newCell;
//        tail = newCell;
//    }
//    else
//    {
//        tail->next = newCell;
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//int List<T>::is_present(T value) const
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        if (current->val == value)
//        {
//            return 1;
//        }
//        current = current->next;
//    }
//    return 0;
//}
//
//int main()
//{
//    List<int> intList;
//    intList.insert(5);
//    intList.insert(10);
//    intList.append(15);
//
//    std::cout << "Count: " << intList.count() << std::endl;
//
//    if (intList.is_present(10))
//    {
//        std::cout << "Value 10 is present in the list." << std::endl;
//    }
//    else
//    {
//        std::cout << "Value 10 is not present in the list." << std::endl;
//    }
//
//    return 0;
//}
//2. Напишіть виконання звичайної (не шаблонної) версії класу List.
//#include <iostream>
//
//class List
//{
//public:
//    List() : head(0), tail(0), theCount(0) {}
//    ~List();
//
//    void insert(int value);
//    void append(int value);
//    int is_present(int value) const;
//    int is_empty() const
//    {
//        return head == 0;
//    }
//    int count() const { return theCount; }
//
//private:
//    class ListCell
//    {
//    public:
//        ListCell(int value, ListCell *cell = 0) : val(value), next(cell) {}
//        int val;
//        ListCell *next;
//    };
//
//    ListCell *head;
//    ListCell *tail;
//    int theCount;
//};
//
//List::~List()
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        ListCell *next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//void List::insert(int value)
//{
//    ListCell *newCell = new ListCell(value);
//    newCell->next = head;
//    head = newCell;
//    if (tail == 0)
//    {
//        tail = newCell;
//    }
//    theCount++;
//}
//
//void List::append(int value)
//{
//    ListCell *newCell = new ListCell(value);
//    if (tail == 0)
//    {
//        head = newCell;
//        tail = newCell;
//    }
//    else
//    {
//        tail->next = newCell;
//        tail = newCell;
//    }
//    theCount++;
//}
//
//int List::is_present(int value) const
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        if (current->val == value)
//        {
//            return 1;
//        }
//        current = current->next;
//    }
//    return 0;
//}
//
//int main()
//{
//    List intList;
//    intList.insert(5);
//    intList.insert(10);
//    intList.append(15);
//
//    std::cout << "Count: " << intList.count() << std::endl;
//
//    if (intList.is_present(10))
//    {
//        std::cout << "Value 10 is present in the list." << std::endl;
//    }
//    else
//    {
//        std::cout << "Value 10 is not present in the list." << std::endl;
//    }
//
//    return 0;
//}
//3. Напишіть шаблонний варіант виконання.
//#include <iostream>
//
//template <typename T>
//class List
//{
//public:
//    List() : head(0), tail(0), theCount(0) {}
//    virtual ~List();
//
//    void insert(T value);
//    void append(T value);
//    int is_present(T value) const;
//    int is_empty() const
//    {
//        return head == 0;
//    }
//    int count() const { return theCount; }
//
//private:
//    class ListCell
//    {
//    public:
//        ListCell(T value, ListCell *cell = 0) : val(value), next(cell) {}
//        T val;
//        ListCell *next;
//    };
//
//    ListCell *head;
//    ListCell *tail;
//    int theCount;
//};
//
//template <typename T>
//List<T>::~List()
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        ListCell *next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//template <typename T>
//void List<T>::insert(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    newCell->next = head;
//    head = newCell;
//    if (tail == 0)
//    {
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//void List<T>::append(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    if (tail == 0)
//    {
//        head = newCell;
//        tail = newCell;
//    }
//    else
//    {
//        tail->next = newCell;
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//int List<T>::is_present(T value) const
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        if (current->val == value)
//        {
//            return 1;
//        }
//        current = current->next;
//    }
//    return 0;
//}
//
//int main()
//{
//    List<int> intList;
//    intList.insert(5);
//    intList.insert(10);
//    intList.append(15);
//
//    std::cout << "Count: " << intList.count() << std::endl;
//
//    if (intList.is_present(10))
//    {
//        std::cout << "Value 10 is present in the list." << std::endl;
//    }
//    else
//    {
//        std::cout << "Value 10 is not present in the list." << std::endl;
//    }
//
//    List<double> doubleList;
//    doubleList.insert(3.14);
//    doubleList.append(2.718);
//
//    std::cout << "Count: " << doubleList.count() << std::endl;
//
//    if (doubleList.is_present(3.14))
//    {
//        std::cout << "Value 3.14 is present in the list." << std::endl;
//    }
//    else
//    {
//        std::cout << "Value 3.14 is not present in the list." << std::endl;
//    }
//
//    return 0;
//}
//4. Оголосіть три списки об'єктів: типу Strings, типу Cat та типу int.
//#include <iostream>
//#include <string>
//
//class Cat
//{
//public:
//    Cat(std::string name) : name(name) {}
//    std::string getName() const { return name; }
//
//private:
//    std::string name;
//};
//
//template <typename T>
//class List
//{
//public:
//    List() : head(0), tail(0), theCount(0) {}
//    virtual ~List();
//
//    void insert(T value);
//    void append(T value);
//    int is_present(T value) const;
//    int is_empty() const
//    {
//        return head == 0;
//    }
//    int count() const { return theCount; }
//
//private:
//    class ListCell
//    {
//    public:
//        ListCell(T value, ListCell *cell = 0) : val(value), next(cell) {}
//        T val;
//        ListCell *next;
//    };
//
//    ListCell *head;
//    ListCell *tail;
//    int theCount;
//};
//
//template <typename T>
//List<T>::~List()
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        ListCell *next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//template <typename T>
//void List<T>::insert(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    newCell->next = head;
//    head = newCell;
//    if (tail == 0)
//    {
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//void List<T>::append(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    if (tail == 0)
//    {
//        head = newCell;
//        tail = newCell;
//    }
//    else
//    {
//        tail->next = newCell;
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//int List<T>::is_present(T value) const
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        if (current->val == value)
//        {
//            return 1;
//        }
//        current = current->next;
//    }
//    return 0;
//}
//
//int main()
//{
//    List<std::string> stringList;
//    stringList.insert("Hello");
//    stringList.append("World");
//
//    std::cout << "String List Count: " << stringList.count() << std::endl;
//
//    List<Cat> catList;
//    Cat cat1("Whiskers");
//    Cat cat2("Snowball");
//    catList.insert(cat1);
//    catList.append(cat2);
//
//    std::cout << "Cat List Count: " << catList.count() << std::endl;
//
//    List<int> intList;
//    intList.insert(5);
//    intList.append(10);
//
//    std::cout << "Int List Count: " << intList.count() << std::endl;
//
//    return 0;
//}
//5. Жучки: що неправильно у наведеному нижче програмному коді? (Припустіть,що визначається шаблон класу List, a Cat - це клас, визначений одному з попередніх занять.)
//List<Cat> Cat_List;
//Cat Felix;
//CatList.append(Felix);
//cout << "Felix is "
//<< (Cat_List.is_present(Felix)) ? "" : "not "
//<< "present\n";
//У наведеному нижче програмному коді є деякі помилки:
//Назва змінної CatList не відповідає оголошеному шаблонному класу List. Потрібно використовувати Cat_List замість CatList.
//При виклику методу append потрібно використовувати об'єкт Cat_List, а не сам клас CatList.
//У виразі cout потрібно додати дужки навколо виразу (Cat_List.is_present(Felix)) ? "" : "not ", оскільки оператор ?: має нижчий пріоритет порівняно з оператором <<.
//Ось виправлений код:
//List<Cat> Cat_List;
//Cat Felix;
//Cat_List.append(Felix);
//std::cout << "Felix is " << (Cat_List.is_present(Felix) ? "" : "not ") << "present\n";
//У виправленому коді виправлені назви змінних та виправлено пріоритет операцій для виводу повідомлення про те, чи присутній об'єкт Felix у списку Cat_List.
//Повна версія коду :
//#include <iostream>
//#include <string>
//
//class Cat
//{
//public:
//    Cat(std::string name) : name(name) {}
//    std::string getName() const { return name; }
//
//    bool operator==(const Cat& other) const
//    {
//        return name == other.name;
//    }
//
//private:
//    std::string name;
//};
//
//template <typename T>
//class List
//{
//public:
//    List() : head(0), tail(0), theCount(0) {}
//    virtual ~List();
//
//    void insert(T value);
//    void append(T value);
//    int is_present(T value) const;
//    int is_empty() const
//    {
//        return head == 0;
//    }
//    int count() const { return theCount; }
//
//private:
//    class ListCell
//    {
//    public:
//        ListCell(T value, ListCell *cell = 0) : val(value), next(cell) {}
//        T val;
//        ListCell *next;
//    };
//
//    ListCell *head;
//    ListCell *tail;
//    int theCount;
//};
//
//template <typename T>
//List<T>::~List()
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        ListCell *next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//template <typename T>
//void List<T>::insert(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    newCell->next = head;
//    head = newCell;
//    if (tail == 0)
//    {
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//void List<T>::append(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    if (tail == 0)
//    {
//        head = newCell;
//        tail = newCell;
//    }
//    else
//    {
//        tail->next = newCell;
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//int List<T>::is_present(T value) const
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        if (current->val == value)
//        {
//            return 1;
//        }
//        current = current->next;
//    }
//    return 0;
//}
//
//int main()
//{
//    List<Cat> Cat_List;
//    Cat Felix("Felix");
//    Cat_List.append(Felix);
//
//    std::cout << "Felix is " << (Cat_List.is_present(Felix) ? "" : "not ") << "present\n";
//
//    return 0;
//}
//6. Оголосіть дружній оператор operator== класу List.
//template <typename T>
//class List
//{
//public:
//    // Оголошення дружньої функції
//    friend bool operator==(const List& lhs, const List& rhs)
//    {
//        // Реалізація оператора порівняння тут
//        // Наприклад, порівняння розмірів списків або елементів списків
//        return lhs.theCount == rhs.theCount;
//    }
//
//    // Інші члени класу
//private:
//    // Інші члени класу
//};
//Ось повний код з оголошенням дружнього оператора operator== для класу List:
//#include <iostream>
//#include <string>
//
//class Cat
//{
//public:
//    Cat(std::string name) : name(name) {}
//    std::string getName() const { return name; }
//
//    bool operator==(const Cat& other) const
//    {
//        return name == other.name;
//    }
//
//private:
//    std::string name;
//};
//
//template <typename T>
//class List
//{
//public:
//    // Оголошення дружньої функції
//    friend bool operator==(const List& lhs, const List& rhs)
//    {
//        return lhs.theCount == rhs.theCount;
//    }
//
//    List() : head(0), tail(0), theCount(0) {}
//    virtual ~List();
//
//    void insert(T value);
//    void append(T value);
//    int is_present(T value) const;
//    int is_empty() const
//    {
//        return head == 0;
//    }
//    int count() const { return theCount; }
//
//private:
//    class ListCell
//    {
//    public:
//        ListCell(T value, ListCell *cell = 0) : val(value), next(cell) {}
//        T val;
//        ListCell *next;
//    };
//
//    ListCell *head;
//    ListCell *tail;
//    int theCount;
//};
//
//template <typename T>
//List<T>::~List()
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        ListCell *next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//template <typename T>
//void List<T>::insert(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    newCell->next = head;
//    head = newCell;
//    if (tail == 0)
//    {
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//void List<T>::append(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    if (tail == 0)
//    {
//        head = newCell;
//        tail = newCell;
//    }
//    else
//    {
//        tail->next = newCell;
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//int List<T>::is_present(T value) const
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        if (current->val == value)
//        {
//            return 1;
//        }
//        current = current->next;
//    }
//    return 0;
//}
//
//int main()
//{
//    List<Cat> Cat_List;
//    Cat Felix("Felix");
//    Cat_List.append(Felix);
//
//    std::cout << "Felix is " << (Cat_List.is_present(Felix) ? "" : "not ") << "present\n";
//
//    return 0;
//}
//7. Напишіть виконання дружнього оператора operator== для класу List.
//template <typename T>
//class List
//{
//public:
//    // Ваші методи і дружній оператор тут
//};
//
//// Визначення оператора == після визначення класу List
//
//template <typename T>
//bool operator==(const List<T>& lhs, const List<T>& rhs)
//{
//    // Ваш оператор == тут
//}
//Ось повний код:
//#include <iostream>
//#include <string>
//
//class Cat
//{
//public:
//    Cat(std::string name) : name(name) {}
//    std::string getName() const { return name; }
//
//    bool operator==(const Cat& other) const
//    {
//        return name == other.name;
//    }
//
//    bool operator!=(const Cat& other) const
//    {
//        return name != other.name;
//    }
//
//private:
//    std::string name;
//};
//
//template <typename T>
//class List
//{
//public:
//    // Оголошення дружньої функції
//    friend bool operator==(const List<T>& lhs, const List<T>& rhs)
//    {
//        if (lhs.count() != rhs.count()) {
//            return false;
//        }
//
//        typename List<T>::ListCell* currentLhs = lhs.head;
//        typename List<T>::ListCell* currentRhs = rhs.head;
//
//        while (currentLhs != nullptr && currentRhs != nullptr) {
//            if (currentLhs->val != currentRhs->val) {
//                return false;
//            }
//            currentLhs = currentLhs->next;
//            currentRhs = currentRhs->next;
//        }
//
//        return true;
//    }
//
//    List() : head(0), tail(0), theCount(0) {}
//    virtual ~List();
//
//    void insert(T value);
//    void append(T value);
//    int is_present(T value) const;
//    int is_empty() const
//    {
//        return head == 0;
//    }
//    int count() const { return theCount; }
//
//private:
//    class ListCell
//    {
//    public:
//        ListCell(T value, ListCell *cell = 0) : val(value), next(cell) {}
//        T val;
//        ListCell *next;
//    };
//
//    ListCell *head;
//    ListCell *tail;
//    int theCount;
//};
//
//template <typename T>
//List<T>::~List()
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        ListCell *next = current->next;
//        delete current;
//        current = next;
//    }
//}
//
//template <typename T>
//void List<T>::insert(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    newCell->next = head;
//    head = newCell;
//    if (tail == 0)
//    {
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//void List<T>::append(T value)
//{
//    ListCell *newCell = new ListCell(value);
//    if (tail == 0)
//    {
//        head = newCell;
//        tail = newCell;
//    }
//    else
//    {
//        tail->next = newCell;
//        tail = newCell;
//    }
//    theCount++;
//}
//
//template <typename T>
//int List<T>::is_present(T value) const
//{
//    ListCell *current = head;
//    while (current != 0)
//    {
//        if (current->val == value)
//        {
//            return 1;
//        }
//        current = current->next;
//    }
//    return 0;
//}
//
//int main()
//{
//    List<Cat> Cat_List1;
//    Cat Felix("Felix");
//    Cat_List1.append(Felix);
//
//    List<Cat> Cat_List2;
//    Cat Tom("Tom");
//    Cat_List2.append(Tom);
//
//    std::cout << "Cat_List1 is " << (Cat_List1 == Cat_List2 ? "" : "not ") << "equal to Cat_List2\n";
//
//    return 0;
//}
//8. Чи має оператор operator== ту ж проблему, що у вправі 5?
//Так, оператор operator== також має ту ж проблему, що і у вправі 5. Потрібно включити визначення класу List перед визначенням оператора ==, щоб уникнути помилок компіляції.
//Ось як ви можете організувати ваш код, щоб виправити цю проблему:
//template <typename T>
//class List
//{
//public:
//    // Оголошення класу тут
//};
//
//// Визначення оператора == після визначення класу List
//
//template <typename T>
//bool operator==(const List<T>& lhs, const List<T>& rhs)
//{
//    // Оператор == тут
//}
//Ця зміна допоможе уникнути помилок компіляції, пов'язаних з відсутністю визначення класу List для оператора ==.
// Ось повний код

//#include <iostream>
//
//template <typename T>
//class List
//{
//public:
//    // Оголошення класу тут
//};
//
//// Визначення оператора == після визначення класу List
//
//template <typename T>
//bool operator==(const List<T>& lhs, const List<T>& rhs)
//{
//    // Оператор == тут
//}
//
//int main()
//{
//    // Ваша функція main
//    return 0;
//}


//9. Напишіть виконання функції шаблону, що здійснює операцію обміну даними, внаслідок чого дві змінні повинні обмінятися вмістом.
//#include <iostream>
//
//template <typename T>
//void swapValues(T& a, T& b)
//{
//    T temp = a;
//    a = b;
//    b = temp;
//}
//
//int main()
//{
//    int x = 10;
//    int y = 20;
//
//    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
//
//    swapValues(x, y);
//
//    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;
//
//    return 0;
//}
//10. Напишіть виконання класу SchoolClass, показаного у лістингу 19.8 як списку. Для додавання до списку чотирьох студентів використовуйте функцію push_back(). Потім пройдіться по отриманому списку та збільште вік кожного студента на один рік.
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Student
//{
//public:
//    Student();
//    Student(const string &name, const int age);
//    Student(const Student &rhs);
//    ~Student();
//
//    void SetName(const string &name);
//    string GetName() const;
//    void SetAge(const int age);
//    int GetAge() const;
//    Student &operator=(const Student &rhs);
//
//private:
//    string itsName;
//    int itsAge;
//};
//
//Student::Student()
//        : itsName("New Student"), itsAge(16)
//{
//}
//
//Student::Student(const string &name, const int age) : itsName(name), itsAge(age)
//{
//}
//
//Student::Student(const Student &rhs) : itsName(rhs.GetName()), itsAge(rhs.GetAge())
//{
//}
//
//Student::~Student()
//{
//}
//
//void Student::SetName(const string &name)
//{
//    itsName = name;
//}
//
//string Student::GetName() const
//{
//    return itsName;
//}
//
//void Student::SetAge(const int age)
//{
//    itsAge = age;
//}
//
//int Student::GetAge() const
//{
//    return itsAge;
//}
//
//Student &Student::operator=(const Student &rhs)
//{
//    itsName = rhs.GetName();
//    itsAge = rhs.GetAge();
//    return *this;
//}
//
//ostream &operator<<(ostream &os, const Student &rhs)
//{
//    os << rhs.GetName() << " is " << rhs.GetAge() << " years old";
//    return os;
//}
//
//template <class T>
//void ShowVector(const vector<T> &v);
//
//typedef vector<Student> SchoolClass;
//
//int main()
//{
//    Student Harry;
//    Student Sally("Sally", 15);
//    Student Bill("Bill", 17);
//    Student Peter("Peter", 16);
//
//    SchoolClass GrowingClass;
//
//    GrowingClass.push_back(Harry);
//    GrowingClass.push_back(Sally);
//    GrowingClass.push_back(Bill);
//    GrowingClass.push_back(Peter);
//
//    cout << "GrowingClass after adding 4 students:\n";
//    ShowVector(GrowingClass);
//
//    // Increase the age of each student by one year
//    for (int i = 0; i < GrowingClass.size(); ++i)
//    {
//        int currentAge = GrowingClass[i].GetAge();
//        GrowingClass[i].SetAge(currentAge + 1);
//    }
//
//    cout << "GrowingClass after increasing age by 1 year:\n";
//    ShowVector(GrowingClass);
//
//    return 0;
//}
//
//template <class T>
//void ShowVector(const vector<T> &v)
//{
//    cout << "max_size() = " << v.max_size();
//    cout << "\tsize() = " << v.size();
//    cout << "\tcapacity() = " << v.capacity();
//    cout << "\t " << (v.empty() ? "empty" : "not empty") << endl;
//    for (int i = 0; i < v.size(); ++i)
//        cout << v[i] << endl;
//    cout << endl;
//}
//11. Змініть код із вправи 10 таким чином, щоб для відображення даних про кожного студента використовувався об'єкт функції.
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//class Student
//{
//public:
//    Student();
//    Student(const string &name, const int age);
//    Student(const Student &rhs);
//    ~Student();
//
//    void SetName(const string &name);
//    string GetName() const;
//    void SetAge(const int age);
//    int GetAge() const;
//    Student &operator=(const Student &rhs);
//
//private:
//    string itsName;
//    int itsAge;
//};
//
//Student::Student()
//        : itsName("New Student"), itsAge(16)
//{
//}
//
//Student::Student(const string &name, const int age) : itsName(name), itsAge(age)
//{
//}
//
//Student::Student(const Student &rhs) : itsName(rhs.GetName()), itsAge(rhs.GetAge())
//{
//}
//
//Student::~Student()
//{
//}
//
//void Student::SetName(const string &name)
//{
//    itsName = name;
//}
//
//string Student::GetName() const
//{
//    return itsName;
//}
//
//void Student::SetAge(const int age)
//{
//    itsAge = age;
//}
//
//int Student::GetAge() const
//{
//    return itsAge;
//}
//
//Student &Student::operator=(const Student &rhs)
//{
//    itsName = rhs.GetName();
//    itsAge = rhs.GetAge();
//    return *this;
//}
//
//class DisplayStudent
//{
//public:
//    void operator()(const Student &student) const
//    {
//        cout << student.GetName() << " is " << student.GetAge() << " years old" << endl;
//    }
//};
//
//template <class T>
//void ShowVector(const vector<T> &v, DisplayStudent displayFunc);
//
//typedef vector<Student> SchoolClass;
//
//int main()
//{
//    Student Harry;
//    Student Sally("Sally", 15);
//    Student Bill("Bill", 17);
//    Student Peter("Peter", 16);
//
//    SchoolClass GrowingClass;
//
//    GrowingClass.push_back(Harry);
//    GrowingClass.push_back(Sally);
//    GrowingClass.push_back(Bill);
//    GrowingClass.push_back(Peter);
//
//    cout << "GrowingClass after adding 4 students:\n";
//    DisplayStudent displayFunc;
//    ShowVector(GrowingClass, displayFunc);
//
//    // Increase the age of each student by one year
//    for (int i = 0; i < GrowingClass.size(); ++i)
//    {
//        int currentAge = GrowingClass[i].GetAge();
//        GrowingClass[i].SetAge(currentAge + 1);
//    }
//
//    cout << "GrowingClass after increasing age by 1 year:\n";
//    ShowVector(GrowingClass, displayFunc);
//
//    return 0;
//}
//
//template <class T>
//void ShowVector(const vector<T> &v, DisplayStudent displayFunc)
//{
//    for (int i = 0; i < v.size(); ++i)
//    {
//        displayFunc(v[i]);
//    }
//}

