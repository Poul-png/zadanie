#include <iostream>
#include <string>

using namespace std;

string us1Name = "Player 1";
string us2Name = "Player 2";
string coName = "Computer";
string us1Color = "_";
string us2Color = "_";
string coColor = "_";
char us1Sim = 'X';
char us2Sim = 'O';
char coSim = 'O';
int menuChoice;
int us1Lose = 0;
int us2Lose = 0;
int coLose = 0;
int us1Win = 0;
int us2Win = 0;
int coWin = 0;
int us1Draw = 0;
int us2Draw = 0;
int coDraw = 0;





void exit() {

	setlocale(LC_ALL, "Russian");
	system("cls");
	cout << "До свидания игрок!" << "\n\n\n\n\n";
	system("pause");
}

void statistic() {
	setlocale(LC_ALL, "Russian");
	system("cls");
	cout << "  |" << "     Имя      |" << "   Победы   |" << "  Поражения  |" << "   Ничья   |" << endl;
	cout << "1 |    " << us1Name << "  |     " << us1Win << "      |      " << us1Lose << "      |     " << us1Draw << "     |" << endl;
	cout << "2 |    " << us2Name << "  |     " << us2Win << "      |      " << us2Lose << "      |     " << us2Draw << "     |" << endl;
	cout << "3 |    " << coName << "  |     " << coWin << "      |      " << coLose << "      |     " << coDraw << "     |";

}

void setting() {

	setlocale(LC_ALL, "Russian");

	int settingChoice;
	int userSettingChoice;

	system("cls");
	cout << "[ + ] Настройки игрока\n\n" << "[ 1 ] " << us1Name << endl << "[ 2 ] " << us2Name << endl << "[ 3 ] Назад" << endl << endl << "[ > ] Ввод: ";
	cin >> settingChoice;
	if (settingChoice == 1) {

		system("cls");

		cout << "[ + ] Настройки " << us1Name << endl << endl;
		cout << "[ 1 ] Ник     :  " << us1Name << "\n[ 2 ] Фигура  :  " << us1Sim << "\n[ 3 ] Цвет    :  " << us1Color << "\n\n[ > ] Ввод  :";
		cin >> userSettingChoice;
		switch (userSettingChoice) {
		case 1: {
			system("sleep");
		}; break;
		case 2: {
			system("sleep");
		}; break;
		case 3: {
			system("sleep");
		}; break;
		default: {
			system("sleep");
		}


		}
	}
	else if (settingChoice == 2) {

		system("cls");

		cout << "[ + ] Настройки " << us2Name << endl << endl;
		cout << "[ 1 ] Ник     :  " << us2Name << "\n[ 2 ] Фигура  :  " << us2Sim << "\n[ 3 ] Цвет    :  " << us2Color << "\n\n[ > ] Ввод   :";
		cin >> userSettingChoice;
		switch (userSettingChoice) {
		case 1: {
			system("sleep");
		}; break;
		case 2: {
			system("sleep");
		}; break;
		case 3: {
			system("sleep");
		}; break;
		default: {
			system("sleep");
		}


		}
	}
	else {
		system("sleep");
	}




}





void menu() {
	setlocale(LC_ALL, "Russian");
	cout << "== Меню ==";
	cout << "\n\n[ 1 ] Начать игру" << "\n[ 2 ] Настройки" << "\n[ 3 ] Статистика" << "\n[ 4 ] Выйти";









}



int main() {
	menu();
}
