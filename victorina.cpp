#include <iostream>  
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	string exit;
	int qQ;
	string userName = "-";
	int menuNum;
	while (true) {
	system("cls");
	cout << "== Menu ==" << endl;
	cout << "[ 1 ] Начать игру" << endl << "[ 2 ] Настройки" << endl << "[ 3 ] Правила" << endl << "[ 4 ] Выйти" << endl<<"[ > ] ";
	cin >> menuNum;
	system("cls");
	
		if (menuNum == 1) {

		}
		else if (menuNum == 2) {
			
			int instUser;
			cout << "[ 1 ] Поменять имя" << endl;
			cout << "[ 2 ] Поменять цвет" << endl;
			cout << "[ 3 ] Поменять количество вопросов" << endl;
			cout << "[ > ] ";
			cin >> instUser;
			if (instUser == 1) {
				system("cls");
				cout << "[ + ] Ваше имя сейчас: " << userName << endl;
				cout << "[ > ] Введите новое имя: ";
				cin >> userName;
			}
			else if (instUser == 2) {
				system("cls");
				int color;
				cout << "[ 1 ] Красный" << endl << "[ 2 ] Зелёный" << endl << "[ 3 ] Синий" << endl << "[ > ] Выберите цвет: ";
				cin >> color;
				switch (color) {
				case 1: system("color 04"); break;
				case 2: system("color 02"); break;
				case 3: system("color 01"); break;
				default:cout << "[ - ]Такого цвета в моей политре нет :(";
				}
			}
			else if (instUser == 3) {
				
				system("cls");
				cout << endl << "[ + ] Выберите количество вопросов (8, 10, 12) : ";
				cin >> qQ;
				if (qQ == 8 || qQ == 10 || qQ == 12) {
					cout << "[ + ] Количество вопросов изменено: " << qQ << endl;
				}
				else {
					cout << "[ - ] Такого количества нет :(";
				}
				cout << "[ > ] Введите любой символ для выхода: ";
				cin >> exit;
			}
			


		}
		else if (menuNum == 3) {
			
			cout << "== Правила ==" << endl;
			cout << "[ + ]Игрок получает очки за правильный ответ на вопрос" << endl;
			cout << "[ + ]Игрок проходит дальше за правильный ответ" << endl;
			cout << "[ + ]Игрок теряет жизнь при неправильном ответе" << endl;
			cout << "[ > ] Введите любой символ для выхода: ";
			cin >> exit;
		}
		else if (menuNum == 4) {
			cout << "[ + ] ББ :)";
		}
		else {
			cout << "[ - ] Такого в меню нет!";
		}
	}


}
