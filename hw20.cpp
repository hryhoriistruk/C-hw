// 1. Напишіть програму, яка зчитує ім'я файлу як аргумент командного рядка і відкриває файл для читання. Розробіть алгоритм аналізу всіх символів, що зберігаються у файлі, і виведіть на екран лише текстові символи та розділові знаки (пропускайте всі недруковані символи). Перед завершенням програми закрийте файл.
// #include <iostream>
// #include <fstream>
// #include <cctype>
//
// int main(int argc, char* argv[]) {
//     if (argc != 2) {
//         std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
//         return 1;
//     }
//
//     std::ifstream inputFile(argv[1]);
//
//     if (!inputFile.is_open()) {
//         std::cerr << "Error opening file." << std::endl;
//         return 1;
//     }
//
//     char ch;
//     while (inputFile.get(ch)) {
//         if (isprint(ch) || ispunct(ch) || ch == ' ') {
//             std::cout << ch;
//         }
//     }
//
//     inputFile.close();
//
//     return 0;
// }
// 2. Напишіть програму, яка виведе задані аргументи командного рядка у зворотному порядку, відкинувши ім'я програми.
// #include <iostream>
//
// int main(int argc, char* argv[]) {
//     // Start from the last argument and skip the first argument (program name)
//     for (int i = argc - 1; i > 0; --i) {
//         std::cout << argv[i] << " ";
//     }
//
//     std::cout << std::endl;
//
//     return 0;
// }
// 3. Жучки: знайдіть помилку у наступному коді:
// #include <iostream>
//
// int main()
// {
//     cout << "Hello world!" << endl;
//     return 0;
// }
// У вказаному коді відсутні префікси std:: перед cout та endl, оскільки використано простір імен std.
// Ось виправлений код:
// #include <iostream>
//
// int main()
// {
//     std::cout << "Hello world!" << std::endl;
//     return 0;
// }
// 4. Перерахуйте три способи усунення помилки, знайденої в коді вправи 3.
// 1.Додати префікс std:: перед cout та endl:
// #include <iostream>
//
// int main()
// {
//     std::cout << "Hello world!" << std::endl;
//     return 0;
// }
// 2.Додати директиву using namespace std перед функцією main:
// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//     cout << "Hello world!" << endl;
//     return 0;
// }
// 3.Використовувати std префікс безпосередньо перед cout та endl:
#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
