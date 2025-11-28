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

	cout << "[ === ПРОГРАММА - 'Геометрические фигуры' === ]" << endl << "[ 1 ] Линия\n" << "[ 2 ] Квадрат\n" << "[ 3 ] Прямоугольник\n" << "[ 4 ] Треугольник\n" << "[ 5 ] Решетка\n" << "[ 6 ] Крестик\n" << "[ 7 ] Плюс\n" << "[ 8 ] Ромб\n" << "[ 9 ] Змейка\n" << "[ > ] Выберите фигуру: ";
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
		system("cls");
		cout << "[ + ] Ваша фигура линия\n" << "[ + ] Длина: " << length << "\n[ + ] Символ: " << sim << endl << endl;
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
		system("cls");
		cout << "[ + ] Ваша фигура квадрат\n" << "[ + ] Длина: " << length << "\n[ + ] Символ: " << sim << endl << endl;
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
		system("cls");
		cout << "[ + ] Ваша фигура прямоугольник\n" << "[ + ] Длина: " << length << "\n[ + ] Ширина: " << width << "\n[ + ] Символ: " << sim << endl << endl;
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

	else if (userFigure == 4) {
		cout << "[ + ] Ваша фигура == Треугольник ==\n\n";
		cout << "[ 1 ] Пустой" << endl << "[ 2 ] Заполненый" << endl;
		cout << "[ > ] Введите тип фигуры: ";
		cin >> userTypeFigure;
		cout << endl << "[ > ] Введите высоту фигуры: ";
		cin >> length;
		cout << "[ > ] Введите символ: ";
		cin >> sim;
		system("cls");
		cout << "[ + ] Ваша фигура треугольник\n" << "[ + ] Длина: " << length << "\n[ + ] Символ: " << sim << endl << endl;
		if (userTypeFigure == 1) {
			for (int i = 1; i <= length; ++i) {
				for (int j = 0; j < length - i; ++j) {
					cout << " ";
				}
				for (int j = 0; j < 2 * i - 1; ++j) {
					cout << sim;
				}
				cout << endl;
			}
		}
		else if (userTypeFigure == 2) {
			for (int i = 1; i <= length; ++i) {
				for (int j = 0; j < length - i; ++j) {
					cout << " ";
				}
				for (int j = 0; j < 2 * i - 1; ++j) {
					if (i == length || j == 0 || j == 2 * i - 2) {
						cout << sim;
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		else {
			cout << "[ - ] Введена некорректная длина!";
		}
	}

	else if (userFigure == 5) {
		cout << "[ + ] Ваша фигура == Решетка ==\n\n";
		cout << endl << "[ > ] Введите длину фигуры: ";
		cin >> length;
		cout << endl << "[ > ] Введите ширину фигуры: ";
		cin >> width;
		cout << "[ > ] Введите символ: ";
		cin >> sim;
		system("cls");
		cout << "[ + ] Ваша фигура решетка\n" << "[ + ] Длина: " << length << "\n[ + ] Символ: " << sim << endl << endl;
		if (length > 0 && width > 0) {
			for (int i = 0; i < length; ++i) {
				for (int j = 0; j < width; ++j) {
					if (i % 2 == 0 || j % 2 == 0) {
						cout << sim;
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		else {
			cout << "[ - ] Введена некорректная длина или ширина!";
		}
	}

	else if (userFigure == 6) {
		cout << "[ + ] Ваша фигура == Крестик ==\n\n";
		cout << endl << "[ > ] Введите размер фигуры: ";
		cin >> length;
		cout << "[ > ] Введите символ: ";
		cin >> sim;
		system("cls");
		cout << "[ + ] Ваша фигура крестик\n" << "[ + ] Размер: " << length << "\n[ + ] Символ: " << sim << endl << endl;
		if (length > 0) {
			for (int i = 0; i < length; ++i) {
				for (int j = 0; j < length; ++j) {
					if (i == j || j == length - i - 1) {
						cout << sim;
					}
					else {
						cout << " ";
					}
				}
				cout << std::endl;
			}
			return 0;
		}
		else {
			cout << "[ - ] Введена некорректная длина!";
		}
	}

	else if (userFigure == 7) {
		cout << "[ + ] Ваша фигура == Плюс ==\n\n";
		cout << endl << "[ > ] Введите размер фигуры: ";
		cin >> length;
		cout << "[ > ] Введите символ: ";
		cin >> sim;
		system("cls");
		cout << "[ + ] Ваша фигура крестик\n" << "[ + ] Размер: " << length << "\n[ + ] Символ: " << sim << endl << endl;
		if (length > 0) {
			for (int i = 0; i < length; ++i) {
				for (int j = 0; j < length; ++j) {
					if (i == length / 2 || j == length / 2) {
						std::cout << sim;
					}
					else {
						std::cout << " ";
					}
				}
				std::cout << std::endl;
			}
			return 0;
		}
		else {
			cout << "[ - ] Введена некорректный размер!";
		}
	}

	else if (userFigure == 8) {
		cout << "[ + ] Ваша фигура == Ромб ==\n\n";
		cout << endl << "[ > ] Введите размер фигуры: ";
		cin >> length;
		cout << "[ > ] Введите символ: ";
		cin >> sim;
		system("cls");
		cout << "[ + ] Ваша фигура крестик\n" << "[ + ] Размер: " << length << "\n[ + ] Символ: " << sim << endl << endl;
		if (length > 0) {
			for (int i = 0; i < length; ++i) {
				for (int j = 0; j < length; ++j) {
					if (i == length / 2 || j == length / 2) {
						cout << sim;
					}
					else {
						cout << " ";
					}
				}
				cout << std::endl;
			}
			return 0;
		}
		else {
			cout << "[ - ] Введена некорректный размер!";
		}
	}

	else if (userFigure == 9) {
		cout << "[ + ] Ваша фигура == Змейка ==\n\n";
		cout << endl << "[ > ] Введите размер фигуры: ";
		cin >> length;
		cout << "[ > ] Введите символ: ";
		cin >> sim;
		system("cls");
		cout << "[ + ] Ваша фигура крестик\n" << "[ + ] Размер: " << length << "\n[ + ] Символ: " << sim << endl << endl;
		if (length > 0) {
			int scoreZ = 1;
			for (int i = 1; i <= length + 1; i++) {
				if (i % 2 == 0) {
					if (scoreZ % 2 != 0) {
						for (int j = 0; j <= length; j++) {
							cout << "  ";
						}
						cout << sim;
						scoreZ++;
					}
					else {
						cout << sim;
						for (int j = 0; j <= length; j++) {
							cout << "  ";
						}
						scoreZ++;
					}
				}
				else {

					for (int j = 0; j <= length; j++) {
						cout << sim << " ";
					}

				}
				cout << endl;
			}
		}
		else {
			cout << "[ - ] Введена некорректный размер!";
		}
	}

	else if (userFigure == 10) {



	}

	else {
		cout << "[ + ] Такой фигуры не существует!";
	}

}
