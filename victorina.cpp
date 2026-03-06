#include <iostream>  
#include <string>
#include <cstdlib>
#include <windows.h>

using namespace std;

int questionQuantity = 10;

string name = "Player";
string color = "Белый";

void setting();
void menu();




int main() {

	setlocale(LC_ALL, "Rus");
	menu();
}

void menu() {
	while (true) {
		int menuNum;

		cout << "== Викторина ==\n";
		cout << "[ 1 ] Начать игру\n[ 2 ] Настройки\n[ 3 ] Правила\n[ 4 ] Выйти\n[ > ] ";
		cin >> menuNum;
		switch (menuNum) {
		case 1: {}; break;
		case 2: {
			system("cls");
			setting(); }; break;
		case 3: {}; break;
		case 4: { return; }; break;
		default: { 
			system("cls");
			continue; }; break;
		}
		
	}
}
void setting() {

	int settingNum;

	system("cls");
	cout << "==Настройки==\n";
	cout << "[ 1 ] Редактирование имени Игрока \n[ 2 ] Редактировать кол-во вопросов \n[ 3 ] Редактировать цвет\n[ > ] ";
	cin >> settingNum;
	switch (settingNum) {
	case 1: {
		int nameSettingNum;
		system("cls");
		cout << "[ + ] Ваше имя сейчас >> " << name << endl;
		cout << "[ 1 ] Изменить имя\n[ 2 ] Выйти в меню\n[ > ] ";
		cin >> nameSettingNum;
		if (nameSettingNum == 1) {
			cout << "[ + ] Введите новое имя\n[ > ] ";
			cin >> name;
			system("cls");
			menu();
		}
		else if (nameSettingNum == 2) {
			system("cls");
			menu();
		}
		else {
			cout << "[ - ] Введено неверное значение\n";
			system("pause");
			setting();
		}
	}; break;
	case 2: {
		int questionSettingNum;
		int questionNum;
		system("cls");
		cout << "[ + ] Кол-во вопросов >> " << questionQuantity << endl;
		cout << "[ 1 ] 8\n[ 2 ] 10\n[ 3 ] 12\n[ > ] ";
		cin >> questionSettingNum;
		if (questionSettingNum == 1) {
			questionQuantity = 8;
			system("cls");
		}
		else if (questionSettingNum == 2) {
			questionQuantity = 10;
			system("cls");
		}
		else if (questionSettingNum == 3) {
			questionQuantity = 12;
			system("cls");
		}
		else {
			cout << "[ - ] Введено неверное значение\n";
			system("pause");
			setting();
		}

	
	}; break;
	case 3: {
		int colorSettingNum;
		cout << "[ + ] Сейччас ваш цвет >> " << color;
		cout << "[ 1 ] Красный\n[ 2 ] Синий\n[ 3 ] Зеленый\n[ 4 ] Фиолетовый\n[ 5 ] Выйти\n[ > ] ";
		switch (colorSettingNum) {
		case 1: {}; break;
		case 2: {}; break;
		case 3: {}; break;
		case 4: {}; break;
		case 5: {}; break;
		}
	
	
	
	
	
	
	}; break;
	default: {
		system("cls");
		menu(); }; break;
	}





}
