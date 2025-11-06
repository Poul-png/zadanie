#include <iostream>  
#include <string>
#include <cstdlib>  

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int a;
	int length;
	int width;
	int userFigure;
	int userTypeFigure;
	string sim;

	cout << "[ === ПРОГРАММА - 'Геометрические фигуры' === ]" << endl << "[ 1 ] Линия\n" << "[ 2 ] Квадрат\n" << "[ 3 ] Прямоугольник\n" << "[ > ] Выберите фигуру: ";
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
					length--;
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
					length--;
				}
			}
			else {
				cout << "[ - ] Введена некорректная длина!";
			}
		}
		else {
			cout << "[ - ] Введен некорректный тип";
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
		if (userTypeFigure == 2) {
			for (int i = 0; i < length; i++) {
				for (int j = 0; j < length; j++) {
					cout << sim;
				}
				cout << endl;
			}
		}
		else if (userTypeFigure == 1) {
			for (int i = 0; i < length; i++) {		
				for (int j = 0; j < length; j++) {
					if (i == 0 || i == length - 1 || j == 0 || j == length - 1) {
						cout << sim;
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
	}
	else if (userFigure == 3) {
		cout << "[ + ] Ваша фигура == Прямоугольник ==\n\n";
		cout << "[ 1 ] Пустой" << endl << "[ 2 ] Заполненый" << endl;
		cout << "[ > ] Введите тип фигуры: ";
		cin >> userTypeFigure;
		cout << endl << "[ > ] Введите длину фигуры: ";
		cin >> length;
		cout << endl << "[ > ] Введите ширину фигуры: ";
		cin >> width;
		cout << "[ > ] Введите символ: ";
		cin >> sim;

		if (userTypeFigure == 1) {
			for (int i = 0; i < width; i++) {
				for (int j = 0; j < length; j++) {
					if (i == 0 || i == width - 1 || j == 0 || j == length - 1) {
						cout << sim;
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		else if (userTypeFigure == 2) {
			for (int i = 0; i < width; i++) {
				for (int j = 0; j < length; j++) {
					cout << sim;
				}
				cout << endl;
			}
		}
		else {
			cout << "[ - ] Введен некорректный тип";
		}
	}
	else {
		cout << "[ + ] Такой фигуры не существует!";
	}
}
