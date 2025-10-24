#include <iostream>
#include <string>
#include <random>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int attemp = 5;
	int is_rand = 0;
	int numMenu;
	int userNum;
	int a = 10;

	int ran1 = rand() % 10 + 1;
	int ran2 = rand() % 10 + 1;
	int ran3 = rand() % 10 + 1;

	cout << "[ + ] === МЕНЮ ===" << endl;
	cout << "[ 1 ] Начать игру" << endl << "[ 2 ] Завершить " << endl << "--> ";
	cin >> numMenu;
	if (numMenu == 1) {
		while (attemp != 0) {



			cout << "[ + ] Угадай число от 1 до 10!" << endl << "[ + ] Попыток осталось " << "[ " << attemp << " ]" << endl;
			cout << "[ + ] Введите число: ";
			cin >> userNum;
			if (userNum == ran1 || userNum == ran2 || userNum == ran3) {

				attemp = attemp - 1;
				is_rand = is_rand + 1;
				cout << "[ + ] Вы угадали!" << "[" << is_rand << " / 3 ]" << endl << endl;
			}
			else {
				attemp = attemp - 1;
				cout << "[ + ] Вы не угадали!" << "[" << is_rand << " / 3 ]" << endl << endl;
			}
		}
	}
	else {
		cout << "[ + ] До свидания!";
	}
}
