#include <iostream>
using namespace std;
int main() {
	std::setlocale(LC_ALL, "Russian");
	int a = 0;
	int quan;
	while (true) {
		cout << "[ + ] Введите количество кругов от 1 до 15: ";
		cin >> quan;
		if (quan >= 1 && quan <= 15) {
			while (quan != 0) {
				a = a + 1;
				quan = quan - 1;
				cout << "[ + ]Круг [ " << a << " ]" << endl;
			}

		}
		else {
			cout << "[ - ] Введённое число не входит в допустимые значения!" << endl << endl;
		}
		a = 0;
	}
}
