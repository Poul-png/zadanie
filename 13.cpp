#include <iostream>  
#include <string>
#include <cstdlib>  

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int a;
	int length;
	int userFigure;
	int userTypeFigure;
	string sim;

	cout << "[ === ПРОГРАММА - 'Геометрические фигуры' === ]" << endl << "[ 1 ] Линия\n" << "[ 2 ] Квадрат\n" << "[ > ] Выберите фигуру: ";
	cin >> userFigure;

	system("cls");

	if (userFigure == 1) {
		cout << "[ + ] Ваша фигура == Линия ==\n\n";
		cout << "[ 1 ] Горизонтально" << endl << "[ 2 ] Вертикально" << endl;
		cout << "[ > ] Введите тип фигуры: ";
		cin >> userTypeFigure;
		cout << endl << "[ > ] Введите длину фигуры: ";
		cin >> length;
		cout << "[ > ] Введите символ: ";
		cin >> sim;
		if (userTypeFigure == 1) {
			if (length > 0) {

				while (length != 0) {
					cout << sim;
					length --;
				}

			}

			else {

				cout << "[ - ] Введена некорректная длина!";

			}
		}
		else if (userTypeFigure == 2) {
			if (length > 0) {

				while (length != 0) {
					cout << sim << endl;
					length --;
				}

			}

			else {

				cout << "[ - ] Введена некорректная длина!";

			}
		}
	}
	else if (userFigure == 2) {

		cout << "[ + ] Ваша фигура == Квадрат ==\n\n";
		cout << "[ 1 ] Пустой" << endl << "[ 2 ] Заполненый" << endl;
		cout << "[ > ] Введите тип фигуры: ";
		cin >> userTypeFigure;
		cout << endl << "[ > ] Введите длину фигуры: ";
		cin >> length;
		cout << "[ > ] Введите символ: ";
		cin >> sim;
		if (userTypeFigure == 1) {
			for (int i = length; ;) {
			





			}
		}
	}
	else {
		cout << "[ + ] Такой фигуры не существует!";
	}
}
