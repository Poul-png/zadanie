#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	while (true) {
		int un;
		cin >> un;

		int pn1 = 1;
		int pn2 = 2;
		int pn3 = 3;
		int pn4 = 4;
		int pn5 = 5;

		int answer_1 = un * pn1;
		int answer_2 = un * pn2;
		int answer_3 = un * pn3;
		int answer_4 = un * pn4;
		int answer_5 = un * pn5;
		cout << "Решите пример:" << un << " x " << pn1 << endl;

		int uans1;
		cin >> uans1;

		if (uans1 == answer_1) {
			cout << "[\x1b[95mПример решен правильно\x1b[0m]";
		}
		else {
			cout << "[\x1b[95mПример решен не правильно\x1b[0m]";
		}

		cout << "Решите пример:" << un << " x " << pn2 << endl;

		int uans2;
		cin >> uans2;

		if (uans2 == answer_2) {
			cout << "[\x1b[95mПример решен правильно\x1b[0m]";
		}
		else {
			cout << "[\x1b[95mПример решен не правильно\x1b[0m]";
		}
		cout << "Решите пример:" << un << " x " << pn3 << endl;

		int uans3;
		cin >> uans3;

		if (uans3 == answer_3) {
			cout << "[\x1b[95mПример решен правильно\x1b[0m]";
		}
		else {
			cout << "[\x1b[95mПример решен не правильно\x1b[0m]";
		}
		cout << "Решите пример:" << un << " x " << pn4 << endl;

		int uans4;
		cin >> uans4;

		if (uans4 == answer_4) {
			cout << "[\x1b[95mПример решен правильно\x1b[0m]";
		}
		else {
			cout << "[\x1b[95mПример решен не правильно\x1b[0m]";
		}
		cout << "Решите пример:" << un << " x " << pn5 << endl;

		int uans5;
		cin >> uans5;

		if (uans5 == answer_5) {
			cout << "[\x1b[95mПример решен правильно\x1b[0m]";
		}
		else {
			cout << "[\x1b[95mПример решен не правильно\x1b[0m]";
		}

		cout << "Завершить программу? (1 = да, 0 = нет)" << endl;
		int check;
		cin >> check;
		
		if (check == 1) {
			return 0;
		}
		else if (check == 0) {

		}
		else {
			return 0;
		}
	}
}
