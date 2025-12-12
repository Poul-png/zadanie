#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int menu;
	while (true) {
		system("cls");
		cout << "== Крестики-Нолики" << endl;
		cout << "[ 1 ] Начать игру\n[ 2 ] Статистика \n[ 3 ] Настройки\n[ 4 ] Выйти\n[ > ]";
		cin >> menu;

		if (menu == 1) {



		}

		else if (menu == 2) {



		}

		else if (menu == 3) {
			


		}

		else if (menu == 4) {
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                                       До свидания!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			return 0;
		}
		else {
			system("cls");
			cout << "[ - ] Введено некорректное значение!\n\n";
			system("pause");
			continue;
		}
	}
}
