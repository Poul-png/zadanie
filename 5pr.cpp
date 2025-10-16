#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	while (true) {

		int num_1;
		cout << "Введите первое число: " << endl;
		cin >> num_1;

		char sym;
		cout << "Введите действие(*,/, %, +, -)" << endl;
		cin >> sym;

		int num_2;
		cout << "Введите второе число: " << endl;

		cin >> num_2;
		int answer_1 = num_1 * num_2;
		int answer_2 = num_1 / num_2;
		int answer_3 = num_1 % num_2;
		int answer_4 = num_1 + num_2;
		int answer_5 = num_1 - num_2;

		if (sym == '*') {
			cout << "Ваш результат: " << num_1 << " x " << num_2 << " = " << answer_1 << endl;
		}
		else if (sym == '/') {
			cout << "Ваш результат: " << num_1 << " / " << num_2 << " = " << answer_2 << endl;
		}
		else if (sym == '%') {
			cout << "Ваш результат: " << num_1 << " % " << num_2 << " = " << answer_3 << endl;
		}
		else if (sym == '+') {
			cout << "Ваш результат: " << num_1 << " + " << num_2 << " = " << answer_4 << endl;
		}
		else if (sym == '-') {
			cout << "Ваш результат: " << num_1 << " - " << num_2 << " = " << answer_5 << endl;
		}
	}
}
