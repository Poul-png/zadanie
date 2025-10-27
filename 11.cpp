#include <iostream>  
#include <string>
#include <windows.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int a;
	int length;
	int userFigure;
	int userTypeFigure;

	cout << "[ === ПРОГРАММА - 'Геометрические фигуры' === ]" << endl   << "[ 1 ] Линия"<< endl << "[ > ] Выберите фигуру: ";
	cin >> userFigure;
	
	if (userFigure == 1) {
		cout << "[ 1 ] Горизонтально" << endl << "[ 2 ] Вертикально" << endl;
		cout << "[ > ] Введите расположение фигуры: ";
		cin >> userTypeFigure;
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
