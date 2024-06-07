// 1.Яка максимальна кількість елементів, які можна додати до зв'язаного списку?
// На C++, максимальна кількість елементів, які можна додати до зв'язаного списку, залежить від доступної пам'яті комп'ютера. Однак, за замовчуванням, немає жодного обмеження на кількість елементів, які можна додати до зв'язаного списку.
// Однак, якщо ви працюєте з великими масивами або великими об'єктами, може бути потрібно врахувати обмеження пам'яті. У цьому випадку, ви можете стикатися з поняттями динамічної пам'яті, такими як new та delete, щоб виділяти пам'ять для кожного елемента зв'язного списку.
// 2. Чи можна у зв'язаному списку використовувати індекси?
// Так, у зв'язаному списку можна використовувати індекси для доступу до елементів. У зв'язаний список є структурою даних, яка складається з рядків, кожен з яких складається з елементів. Кожен рядковий елемент може мати посилання на наступний рядковий елемент, що дозволяє нам переходити від одного елемента до іншого.
// Щоб отримати доступ до елемента зв'язного списку за індексом, потрібно перейти до відповідного рядкового елемента та пройти по ланцюжку посилань, поки не досягнемо потрібного елемента.
// Ось приклад коду на C++, який демонструє, як отримати доступ до елемента зв'язного списку за індексом:
// Node* getElementByIndex(Node* head, int index) {
//  Node* current = head;
//  int count = 0;
//
//  while (current != nullptr) {
//   if (count == index) {
//    return current;
//   }
//   current = current->next;
//   count++;
//  }
//
//  // Якщо індекс виходить за межі довжини списку
//  return nullptr;
// }
// У цьому прикладі функція getElementByIndex приймає початковий вузол списку (head) і індекс елемента, який потрібно знайти. Вона проходить по списку, перевіряючи кожний елемент, доки не досягне потрібного індексу або кінця списку. Якщо елемент знайдено, повертається вказівник на цей елемент; в іншому випадку повертається nullptr
// Ось повний код:
// #include <iostream>
//
// struct Node {
//  int data;
//  Node* next;
//
//  Node(int value) : data(value), next(nullptr) {}
// };
//
// Node* getElementByIndex(Node* head, int index) {
//  Node* current = head;
//  int count = 0;
//
//  while (current != nullptr) {
//   if (count == index) {
//    return current;
//   }
//   current = current->next;
//   count++;
//  }
//
//  return nullptr;
// }
//
// int main() {
//  Node* head = new Node(1);
//  head->next = new Node(2);
//  head->next->next = new Node(3);
//  head->next->next->next = new Node(4);
//
//  int indexToFind = 2;
//  Node* foundElement = getElementByIndex(head, indexToFind);
//
//  if (foundElement != nullptr) {
//   std::cout << "Element at index " << indexToFind << " is: " << foundElement->data << std::endl;
//  } else {
//   std::cout << "Element at index " << indexToFind << " not found" << std::endl;
//  }
//
//  // Очищення пам'яті
//  Node* current = head;
//  Node* next = nullptr;
//  while (current != nullptr) {
//   next = current->next;
//   delete current;
//   current = next;
//  }
//
//  return 0;
// }
// 3. Яким є останній символ у рядку "Сергій - хороший хлопець"?
// У C++, щоб отримати останній символ у рядку, можна використовувати функцію back() з контейнера std::string.
// Ось приклад коду:
// #include <iostream>
// #include <string>
//
// int main() {
//  std::string str = "Сергій - хороший хлопець";
//  char lastChar = str.back();
//
//  std::cout << "Останній символ у рядку: " << lastChar << std::endl;
//
//  return 0;
// }
// У цьому прикладі ми визначили рядок str з текстом "Сергій - хороший хлопець". За допомогою функції back() ми отримуємо останній символ рядка lastChar. Наступним кроком ми виводимо останній символ на консоль.
// 4. Оголосіть клас вузла Node, який підтримує цілі числа.
// class Node {
// public:
//  int data;
//  Node* next;
//
//  Node(int value) : data(value), next(nullptr) {}
// };
// У цьому класі Node є два поля: data, яке зберігає ціле число, та next, яке є вказівником на наступний вузол у списку. Конструктор класу Node ініціалізує поле data переданим значенням та встановлює вказівник next на nullptr.
// #include <iostream>
//
// class Node {
// public:
//  int data;
//  Node* next;
//
//  Node(int value) : data(value), next(nullptr) {}
// };
//
// int main() {
//  // Створення об'єкта класу Node зі значенням 5
//  Node* node = new Node(5);
//
//  // Виведення даних об'єкта на консоль
//  std::cout << "Data: " << node->data << std::endl;
//
//  // Очищення пам'яті, виділеної для об'єкта
//  delete node;
//
//  return 0;
// }
