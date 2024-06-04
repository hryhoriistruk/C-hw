//1. Оголосіть двомірний масив, який представляє поле для ірги в хрестики і нулики.
// Повний код :
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
//
// using namespace std;
//
// void printField(char field[3][3]) {
//     cout << "---------" << endl;
//     for (int i = 0; i < 3; i++) {
//         cout << "| ";
//         for (int j = 0; j < 3; j++) {
//             cout << field[i][j] << " ";
//         }
//         cout << "|" << endl;
//         cout << "---------" << endl;
//     }
// }
//
// bool checkWin(char field[3][3]) {
//     // Check rows
//     for (int i = 0; i < 3; i++) {
//         if (field[i][0] != ' ' && field[i][0] == field[i][1] && field[i][1] == field[i][2]) {
//             return true;
//         }
//     }
//     // Check columns
//     for (int j = 0; j < 3; j++) {
//         if (field[0][j] != ' ' && field[0][j] == field[1][j] && field[1][j] == field[2][j]) {
//             return true;
//         }
//     }
//     // Check diagonals
//     if (field[0][0] != ' ' && field[0][0] == field[1][1] && field[1][1] == field[2][2]) {
//         return true;
//     }
//     if (field[0][2] != ' ' && field[0][2] == field[1][1] && field[1][1] == field[2][0]) {
//         return true;
//     }
//     return false;
// }
//
// void playGame() {
//     char field[3][3];
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             field[i][j] = ' ';
//         }
//     }
//     srand(time(NULL));
//     bool gameOver = false;
//     while (!gameOver) {
//         printField(field);
//         cout << "Player " << (field['1']['1'] == 'X' ? "X" : "O") << ", enter your move: ";
//         int row, col;
//         cin >> row >> col;
//         if (field[row-1][col-1] == ' ') {
//             field[row-1][col-1] = (field['1']['1'] == 'X' ? 'X' : 'O');
//             if (checkWin(field)) {
//                 printField(field);
//                 cout << "Player " << (field['1']['1'] == 'X' ? "X" : "O") << " wins!" << endl;
//                 gameOver = true;
//             } else if (field['2']['2'] == ' ') {
//                 printField(field);
//                 cout << "It's a tie!" << endl;
//                 gameOver = true;
//             } else {
//                 field['1']['1'] = (field['1']['1'] == 'X' ? 'O' : 'X');
//             }
//         } else {
//             cout << "Invalid move, try again." << endl;
//         }
//     }
// }
//
// int main() {
//     playGame();
//     return 0;
// }
// Масив :
// char field[3][3] = {
//     {' ', ' ', ' '},
//     {' ', ' ', ' '},
//     {' ', ' ', ' '}
// };
// 2. Запишіть програмний код, який ініціалізує значенням 0 всі елементи створеного перед цим масиву.
// int myArray[3][3] = {
//     {0, 0, 0},
//     {0, 0, 0},
//     {0, 0, 0}
// };
// Повний код:
// #include <iostream>
//
// using namespace std;
//
// int main() {
//     int myArray[3][3];
//
//     // Initialize all elements to 0
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             myArray[i][j] = 0;
//         }
//     }
//
//     // Print the initialized array
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << myArray[i][j] << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
// Ще одна версія:
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
//
// using namespace std;
//
// void printField(char field[3][3]) {
//     cout << "---------" << endl;
//     for (int i = 0; i < 3; i++) {
//         cout << "| ";
//         for (int j = 0; j < 3; j++) {
//             cout << field[i][j] << " ";
//         }
//         cout << "|" << endl;
//         cout << "---------" << endl;
//     }
// }
//
// bool checkWin(char field[3][3]) {
//     // Check rows
//     for (int i = 0; i < 3; i++) {
//         if (field[i][0] != ' ' && field[i][0] == field[i][1] && field[i][1] == field[i][2]) {
//             return true;
//         }
//     }
//     // Check columns
//     for (int j = 0; j < 3; j++) {
//         if (field[0][j] != ' ' && field[0][j] == field[1][j] && field[1][j] == field[2][j]) {
//             return true;
//         }
//     }
//     // Check diagonals
//     if (field[0][0] != ' ' && field[0][0] == field[1][1] && field[1][1] == field[2][2]) {
//         return true;
//     }
//     if (field[0][2] != ' ' && field[0][2] == field[1][1] && field[1][1] == field[2][0]) {
//         return true;
//     }
//     return false;
// }
//
// void playGame() {
//     char field[3][3];
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             field[i][j] = ' ';
//         }
//     }
//     srand(time(NULL));
//     bool gameOver = false;
//     while (!gameOver) {
//         printField(field);
//         cout << "Player " << (field['1']['1'] == 'X' ? "X" : "O") << ", enter your move: ";
//         int row, col;
//         cin >> row >> col;
//         if (field[row-1][col-1] == ' ') {
//             field[row-1][col-1] = (field['1']['1'] == 'X' ? 'X' : 'O');
//             if (checkWin(field)) {
//                 printField(field);
//                 cout << "Player " << (field['1']['1'] == 'X' ? "X" : "O") << " wins!" << endl;
//                 gameOver = true;
//             } else if (field['2']['2'] == ' ') {
//                 printField(field);
//                 cout << "It's a tie!" << endl;
//                 gameOver = true;
//             } else {
//                 field['1']['1'] = (field['1']['1'] == 'X' ? 'O' : 'X');
//             }
//         } else {
//             cout << "Invalid move, try again." << endl;
//         }
//     }
// }
//
// int main() {
//     playGame();
//     return 0;
// }
// 3. Жучки: що неправильно у наступній програмі?
// unsigned short SomeArray[5][4];
// for (int i = 0; i < 4; i++)
//     for (int j = 0; j < 5; j++)
//         SomeArray[i][j] = i + j;
// Проблема з заданим кодом полягає в тому, що вкладений цикл перебирає неправильні індекси. Зовнішній цикл повинен перебирати рядки масиву, а внутрішній цикл повинен перебирати стовпці.
// Ось виправлений код:
// unsigned short SomeArray[5][4];
// for (int i = 0; i < 5; i++)
//     for (int j = 0; j < 4; j++)
//         SomeArray[i][j] = i + j;
// У цьому виправленому коді зовнішній цикл перебирає рядки масиву (i), а внутрішній цикл перебирає стовпці масиву (j).
// Ось повний код програми:
// #include <iostream>
//
// using namespace std;
//
// int main() {
//     unsigned short SomeArray[5][4];
//
//     // Initialize the array
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 4; j++) {
//             SomeArray[i][j] = i + j;
//         }
//     }
//
//     // Print the initialized array
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << SomeArray[i][j] << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
// 4. Жучки: що неправильно в наступній програмі?
// unsigned short SomeArray[5][4];
// for (int i = 0; i <= 5; i++)
//     for (int j = 0; j <= 4; j++)
//         SomeArray[i][j] = 0;
// Проблема з заданим кодом полягає в тому, що умови циклу є неправильними. Цикл повинен перебиратися до розміру масиву мінус одиниця, а не до розміру масиву.
// Ось виправлений код:
// unsigned short SomeArray[5][4];
// for (int i = 0; i < 5; i++) {
//     for (int j = 0; j < 4; j++) {
//         SomeArray[i][j] = 0;
//     }
// }
// У цьому виправленому коді зовнішній цикл перебирається до розміру першого виміру масиву (i), а внутрішній цикл перебирається до розміру другого виміру масиву (j). Значення, присвоєне кожному елементу, дорівнює 0.
// Ось повний код:
// #include <iostream>
//
// using namespace std;
//
// int main() {
//     unsigned short SomeArray[5][4];
//
//     // Initialize the array with 0
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 4; j++) {
//             SomeArray[i][j] = 0;
//         }
//     }
//
//     // Print the initialized array
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << SomeArray[i][j] << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
