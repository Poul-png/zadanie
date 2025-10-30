#include <iostream>  
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	string exit;
	int qQ = 10;
	string userName = "-";
	int menuNum;
	int quanQue = qQ;
	int life = 3;

	while (true) {
		system("cls");
		cout << "== Menu ==" << endl;
		cout << "[ 1 ] Начать игру" << endl << "[ 2 ] Настройки" << endl << "[ 3 ] Правила" << endl << "[ 4 ] Выйти" << endl << "[ > ] ";
		cin >> menuNum;
		system("cls");

		if (menuNum == 1) {
			
			while (quanQue != 0 || life != 0) {

				system("cls");

				int corrAns = 0;
				int answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9, answer10, answer11, answer12;

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого инициализация переменной: ";
				cin >> answer1;
				switch (answer1) {
				case 3: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 4: { quanQue = quanQue - 1; life = life - 1; }; break;

				default: {
					cout << "[ - ] Такого ответа нет";
				}
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого является циклом: ";
				cin >> answer2;
				switch (answer2) {
				case 2: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 4: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer3;
				switch (answer3) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer4;
				switch (answer4) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer5;
				switch (answer5) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer6;
				switch (answer6) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer7;
				switch (answer7) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer8;
				switch (answer8) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer9;
				switch (answer9) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer10;
				switch (answer10) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer11;
				switch (answer11) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

				cout << "== ВИКТОРИНА ==" << endl;

				cout << "[ + ] Количество вопросов " << quanQue << "/" << qQ << endl << "[ + ] Количество жизней " << life << " / 3" << endl << endl;
				cout << "[ 1 ] age = 10 \n" << "[ 2 ] while (true) \n" << "[ 3 ] int userAge = 21 \n" << "[ 4 ] cout << \n";
				cout << "[ > ] Что из этого находится в дополнительной библиотеки: ";

				cin >> answer12;
				switch (answer12) {
				case 4: { corrAns = corrAns + 1; quanQue = quanQue - 1; }; break;
				case 1: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 3: { quanQue = quanQue - 1; life = life - 1; }; break;
				case 2: { quanQue = quanQue - 1; life = life - 1; }; break;
				default: {
					cout << "[ - ] Такого ответа нет";
				}; break;
				}

				system("cls");

			}
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
				system("cls");
				cout << endl << "[ + ] Ваше новое имя: " << userName << endl;
				cout << "[ > ] Введите любой символ для выхода: ";
				cin >> exit;
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
				default:cout << "[ - ]Такого цвета в моей политре нет :("; break;
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

			cout << endl << "[ + ] ББ :)\n\n";
			return 0;
		}
		else {
			cout << "[ - ] Такого в меню нет!";
		}
	}


}

}
