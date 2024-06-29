// 1. Напишіть програму, яка використовує чотири стандартні об'єкти класу iostream - cin, cout, cerr і clog.
// #include <iostream>
//
// int main() {
//     int x;
//
//     // Reading input from cin
//     std::cout << "Enter a number: ";
//     std::cin >> x;
//
//     // Writing output to cout
//     std::cout << "You entered: " << x << std::endl;
//
//     // Writing error message to cerr
//     std::cerr << "An error occurred!" << std::endl;
//
//     // Writing log message to clog
//     std::clog << "This is a log message" << std::endl;
//
//     return 0;
// }

// 2. Напишіть програму, яка пропонує користувачеві ввести повне ім'я з наступним виведенням цього імені на екран.
// #include <iostream>
// #include <string>
//
// int main() {
//     std::string fullName;
//
//     // Asking the user to enter their full name
//     std::cout << "Please enter your full name: ";
//     std::getline(std::cin, fullName);
//
//     // Displaying the entered full name
//     std::cout << "Your full name is: " << fullName << std::endl;
//
//     return 0;
// }
// 3. Перепишіть лістинг 16.9, відмовившись від використання методів putback() та ignore().
#include <iostream>
#include <string>

int main() {
    char ch;
    std::string sentence;

    std::cout << "Enter a sentence: ";

    // Read characters until newline is encountered
    while (std::cin.get(ch) && ch != '\n') {
        sentence += ch;
    }

    // Display the entered sentence
    std::cout << "You entered: " << sentence << std::endl;

    return 0;
}
