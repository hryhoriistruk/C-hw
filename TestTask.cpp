//Створити шаблонний клас контейнер, що дозволяє зберігати об’єкти заданого типу.
//Клас повинен реалізовувати наступні функції:
//front() – Повертає значення першого елемента в списку.
//back() – Повертає значення останнього елемента в списку.
//push_front() – додає новий елемент на початку списку.
//push_back() – додає новий елемент у кінець списку.
//pop_front() – видаляє перший елемент списку та зменшує розмір списку на 1.
//pop_back() – видаляє останній елемент списку та зменшує розмір списку на 1.
//insert() – вставляє нові елементи в список перед елементом у вказаній позиції.
//size() – повертає кількість елементів у списку.
//begin() – функція begin() повертає ітератор, що вказує на перший елемент списку.
//end() – функція end() повертає ітератор, що вказує на теоретичний останній елемент, який слідує за останнім елементом.
//За бажанням можна реалізувати свій клас контейнера, який матиме специфічні функції.
#include <iostream>
#include <list>

template <typename T>
class MyContainer {
private:
    std::list<T> container;

public:
    T front() {
        return container.front();
    }

    T back() {
        return container.back();
    }

    void push_front(const T& value) {
        container.push_front(value);
    }

    void push_back(const T& value) {
        container.push_back(value);
    }

    void pop_front() {
        container.pop_front();
    }

    void pop_back() {
        container.pop_back();
    }

    void insert(typename std::list<T>::iterator it, const T& value) {
        container.insert(it, value);
    }

    int size() {
        return container.size();
    }

    typename std::list<T>::iterator begin() {
        return container.begin();
    }

    typename std::list<T>::iterator end() {
        return container.end();
    }
};

int main() {
    MyContainer<int> intContainer;
    intContainer.push_back(1);
    intContainer.push_back(2);
    intContainer.push_back(3);

    std::cout << "Front: " << intContainer.front() << std::endl;
    std::cout << "Back: " << intContainer.back() << std::endl;

    std::cout << "Size: " << intContainer.size() << std::endl;

    intContainer.pop_front();
    intContainer.pop_back();

    std::cout << "Size after pop operations: " << intContainer.size() << std::endl;

    return 0;
}
