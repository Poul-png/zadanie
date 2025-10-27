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

	cout << "[ === ПРОГРАММА - 'Геометрические фигуры' === ]" << endl   << "[ 1 ] Линия"<< endl << "[ > ] Выберите фигуру: ";
	cin >> userFigure;
	system("cls");
	if (userFigure == 1) {
		cout << "[ + ] Ваша фигура == Линия ==" << endl << endl;
	}
	if (userFigure == 1) {
		cout << "[ 1 ] Горизонтально" << endl << "[ 2 ] Вертикально" << endl;
		cout << "[ > ] Введите тип фигуры: ";
		cin >> userTypeFigure;
		cout << endl;
		cout << "[ > ] Введите длину фигуры: ";
		cin >> length;
		if (userTypeFigure == 1 ) {
			if (length > 0) {

				while (length != 0) {
					cout << "#";
					length = length - 1;
				}

			}

			else {

				cout << "[ - ] Введена некорректная длина!";

			}
		}
		else if (userTypeFigure == 2) {
			if (length > 0) {

				while (length != 0) {
					cout << "#" << endl;
					length = length - 1;
				}

			}

			else {

				cout << "[ - ] Введена некорректная длина!";

			}
		}
	}
	else {
		cout << "[ + ] Такой фигуры не существует!";
	}
}
