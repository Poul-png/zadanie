#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    vector<int> array(5);

    cout << "===========================" << endl;
    cout << "Инициализация массива из 5 элементов" << endl;
    cout << "Введите целые числа:" << endl;

    cout << "Элемент 1 : ";
    cin >> array[0];
    cout << "Элемент 2 : ";
    cin >> array[1];
    cout << "Элемент 3 : ";
    cin >> array[2];
    cout << "Элемент 4 : ";
    cin >> array[3];
    cout << "Элемент 5 : ";
    cin >> array[4];

    cout << "===========================" << endl;

    for (int index = 0; index < 5; index++) {
        int value = array[index];

        cout << "________________________________________________" << endl;
        cout << "Таблица для элемента №" << index + 1 << " = " << value << endl;
        cout << "________________________________________________" << endl;

        cout << "|" << setw(15) << "Значение"
            << "|" << setw(15) << "Операция"
            << "|" << setw(15) << "Результат" << "|" << endl;
        cout << string(48, '-') << endl;

        int res;

        const int line_length = 48;

        res = value + value;
        cout << "|" << setw(15) << value
            << "|" << setw(15) << "+" + to_string(value)
            << "|" << setw(15) << res << "|" << endl;
        cout << string(line_length, '_') << endl;

        res = value - value;
        cout << "|" << setw(15) << value
            << "|" << setw(15) << "-" + to_string(value)
            << "|" << setw(15) << res << "|" << endl;
        cout << string(line_length, '_') << endl;

        res = value * value;
        cout << "|" << setw(15) << value
            << "|" << setw(15) << "*" + to_string(value)
            << "|" << setw(15) << res << "|" << endl;
        cout << string(line_length, '_') << endl;

        res = (value != 0) ? value / value : 0;
        cout << "|" << setw(15) << value
            << "|" << setw(15) << "/" + to_string(value)
            << "|" << setw(15) << res << "|" << endl;
        cout << string(line_length, '_') << endl;

        cout << "________________________________________________" << endl;
        cout << endl;
    }

    cout << "________________________________________________" << endl;
    return 0;
}
