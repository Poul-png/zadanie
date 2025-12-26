#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

const double M_PI = 3.14159265358979323846;

double inputNumber(const string& prompt) {
    double num;
    while (true) {
        cout << prompt;
        cin >> num;
        if (cin.fail()) {
            cin.clear(); // Очистка флага ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Игнорировать неправильный ввод
            cout << "Некорректный ввод. Попробуйте снова." << endl;
        }
        else {
            return num;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;
    system("cls");
    do {
        cout << "\nВыберите операцию:\n";
        cout << "1. Сложение (+)\n";
        cout << "2. Вычитание (-)\n";
        cout << "3. Умножение (*)\n";
        cout << "4. Деление (/)\n";
        cout << "5. Деление по остатку (%)\n";
        cout << "6. Степень (^)\n";
        cout << "7. Корень (√)\n";
        cout << "8. Куб (^3)\n";
        cout << "9. Синус (sin)\n";
        cout << "10. Косинус (cos)\n";
        cout << "0. Выход\n";

        cout << "Введите номер операции: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Выход из программы." << endl;
            break;
        }

        double num1, num2, result;
        switch (choice) {
        case 1:
            num1 = inputNumber("Введите первое число: ");
            num2 = inputNumber("Введите второе число: ");
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            num1 = inputNumber("Введите первое число: ");
            num2 = inputNumber("Введите второе число: ");
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            num1 = inputNumber("Введите первое число: ");
            num2 = inputNumber("Введите второе число: ");
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            num1 = inputNumber("Введите делимое: ");
            num2 = inputNumber("Введите делитель: ");
            if (num2 == 0) {
                cout << "Ошибка: деление на ноль запрещено." << endl;
            }
            else {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        case 5:
            num1 = inputNumber("Введите число: ");
            num2 = inputNumber("Введите делитель: ");
            if (num2 == 0) {
                cout << "Ошибка: деление на ноль запрещено." << endl;
            }
            else {
                int intNum1 = static_cast<int>(num1);
                int intNum2 = static_cast<int>(num2);
                cout << intNum1 << " % " << intNum2 << " = " << (intNum1 % intNum2) << endl;
            }
            break;
        case 6:
            num1 = inputNumber("Введите число: ");
            num2 = inputNumber("Введите степень: ");
            result = pow(num1, num2);
            cout << num1 << " ^ " << num2 << " = " << result << endl;
            break;
        case 7:
            num1 = inputNumber("Введите число для извлечения корня: ");
            if (num1 < 0) {
                cout << "Ошибка: невозможно извлечь корень из отрицательного числа." << endl;
            }
            else {
                result = sqrt(num1);
                cout << "√" << num1 << " = " << result << endl;
            }
            break;
        case 8:
            num1 = inputNumber("Введите число: ");
            result = pow(num1, 3);
            cout << num1 << "^3 = " << result << endl;
            break;
        case 9:
            num1 = inputNumber("Введите угол в градусах: ");
            result = sin(num1 * M_PI / 180);
            cout << "sin(" << num1 << "°) = " << result << endl;
            break;
        case 10:
            num1 = inputNumber("Введите угол в градусах: ");
            result = cos(num1 * M_PI / 180);
            cout << "cos(" << num1 << "°) = " << result << endl;
            break;
        default:
            cout << "Некорректный выбор. Попробуйте снова." << endl;
        }

    } while (true);

    return 0;
}
