// 1. Яким буде значення змінної x після завершення циклу for (int x = 0; x < 100; x++)?
// Значення змінної x після завершення циклу for (int x = 0; x < 100; x++) буде рівним 100.
// 2. Створіть вкладений цикл for, що заповнює нулями масив розміром 10×10.
// #include <iostream>
//
// int main() {
//     int array[10][10];
//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 10; j++) {
//             array[i][j] = 0;
//         }
//     }
//
//     // Display the array
//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j < 10; j++) {
//             std::cout << array[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }
//
//     return 0;
// }
// 3. Організуйте цикл for, лічильник якого змінюється від 100 до 200 з кроком 2.
// #include <iostream>
//
// int main() {
//     for (int i = 100; i <= 200; i += 2) {
//         std::cout << i << std::endl;
//     }
//
//     return 0;
// }
// 4. Організуйте цикл while, лічильник якого змінюється від 100 до 200 з кроком 2.
// #include <iostream>
//
// int main() {
//     int i = 100;
//     while (i <= 200) {
//
//         std::cout << i << std::endl;
//         i += 2;
//     }
//
//     return 0;
// }
// 5. Організуйте цикл do… while, лічильник якого змінюється від 100 до 200 з кроком 2.
// #include <iostream>
//
// int main() {
//     int i = 100;
//     do {
//
//         std::cout << i << std::endl;
//         i += 2;
//     } while (i <= 200);
//
//     return 0;
// }
// 6. Баги: знайдіть помилку у наведеному фрагменті програми.
//
//
//
//
//
// int counter = 0;
// while (counter < 10)
// {
//     cout << "counter: " << counetr:
//    }
// Помилка в цьому фрагменті програми полягає в тому, що замість cout використовано cout і є помилка у назві змінної counter. Ось виправлений фрагмент:
// int counter = 0;
// while (counter < 10)
// {
//     std::cout << "counter: " << counter;
//     counter++;
// }
// Повний код:
// #include <iostream>
//
// int main() {
//     int counter = 0;
//     while (counter < 10)
//     {
//         std::cout << "counter: " << counter;
//         counter++;
//     }
//
//     return 0;
// }

// 7. Баги: знайдіть помилку у наведеному фрагменті програми.
//
//
//
//
// for (int counter = 0; counter < 10: counter++);
// cout << counter << " ";
// Помилка в цьому фрагменті програми полягає в тому, що в операторі for використано двокрапку замість крапки з комою для розділення виразів. Також, якщо ви хочете вивести значення counter після циклу, ви повинні використовувати фігурні дужки для включення більше, ніж одного виразу.
// #include <iostream>
//
// int main() {
//     int counter = 0;
//     for (counter = 0; counter < 10; counter++)
//     {
//
//     }
//
//     std::cout << counter << " ";
//
//     return 0;
// }
// 8. Баги: знайдіть помилку у наведеному фрагменті програми.
//
//
//
//
// int counter = 100;
// while (counter < 10)
// {
//     cout << "counter now: " << counter;
//     counter--;
// }
// Помилка в цьому фрагменті програми полягає в умові в циклі while. Оскільки counter вже починається зі значення 100 і менше за 10, цикл while не буде виконуватись жодного разу. Оскільки умова while (counter < 10) вже не виконується, цикл не виконається ніколи
// Ось виправлений фрагмент:
// #include <iostream>
//
// int main() {
//     int counter = 100;
//     while (counter > 10)
//     {
//         std::cout << "counter now: " << counter;
//         counter--;
//     }
//
//     return 0;
// }
