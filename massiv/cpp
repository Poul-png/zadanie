#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printMenu() {
    setlocale(LC_ALL, "Russian");
    cout << "\n[ + ] Настройки массива:\n";
    cout << "[ 1 ] Сортировка по возрастанию\n";
    cout << "[ 2 ] Сортировка по убыванию\n";
    cout << "[ 3 ] Перемножить массив\n";
    cout << "[ 4 ] Сложить массив\n";
    cout << "[ 5 ] Разделить массив\n";
    cout << "[ 6 ] Обнулить массив\n";
    cout << "[ 9 ] Задать новые значения массиву\n";
    cout << "[ 0 ] Выход\n";
    cout << "Введите номер действия: ";
}

vector<int> initializeArray() {
    vector<int> arr = { 8, 120 };
    arr.resize(7, 0);
    return arr;
}

int main() {
    setlocale(LC_ALL, "Russian");
    vector<int> array = initializeArray();
    cout << "Изначальный массив: ";
    for (int v : array) cout << v << " ";
    cout << endl;

    int choice;
    while (true) {
        printMenu();
        cin >> choice;

        if (choice == 0) {
            cout << "Выход из программы.\n";
            break;
        }
        else if (choice == 1) {
            sort(array.begin(), array.end());
            cout << "Массив отсортирован по возрастанию: ";
            for (int v : array) cout << v << " ";
            cout << endl;
        }
        else if (choice == 2) {
            sort(array.begin(), array.end(), greater<int>());
            cout << "Массив отсортирован по убыванию: ";
            for (int v : array) cout << v << " ";
            cout << endl;
        }
        else if (choice == 3) {
            int num;
            cout << "Введите число для перемножения: ";
            cin >> num;
            for (int& v : array) v *= num;
            cout << "Массив после перемножения: ";
            for (int v : array) cout << v << " ";
            cout << endl;
        }
        else if (choice == 4) {
            int num;
            cout << "Введите число для сложения: ";
            cin >> num;
            for (int& v : array) v += num;
            cout << "Массив после сложения: ";
            for (int v : array) cout << v << " ";
            cout << endl;
        }
        else if (choice == 5) {
            int num;
            cout << "Введите число для деления: ";
            cin >> num;
            if (num == 0) {
                cout << "Деление на ноль невозможно.\n";
            }
            else {
                for (int& v : array) v /= num;
                cout << "Массив после деления: ";
                for (int v : array) cout << v << " ";
                cout << endl;
            }
        }
        else if (choice == 6) {
            for (int& v : array) v = 0;
            cout << "Массив обнулен: ";
            for (int v : array) cout << v << " ";
            cout << endl;
        }
        else if (choice == 9) {
            for (int i = 0; i < 7; i++) {
                cout << "Введите значение для ячейки " << i << ": ";
                cin >> array[i];
            }
            cout << "Новый массив: ";
            for (int v : array) cout << v << " ";
            cout << endl;
        }
        else {
            cout << "Некорректный выбор. Попробуйте снова.\n";
        }
    }

    return 0;
}
