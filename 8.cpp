#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	
	int word;
	string nWord;
	string word_rus;
	while (true) {
		cout << "[ + ] Переводчик " << endl;
		cout << "[ 1 ] Дом" << endl;
		cout << "[ 2 ] Граната" << endl;
		cout << "[ 3 ] Дверь" << endl;
		cout << "[ 4 ] Дерево" << endl;
		cout << "[ 5 ] Окно" << endl;
		cout << "[ 6 ] Дорога" << endl;
		cout << "[ + ] Выберите слово: ";
		cin >> word;

		switch (word) {
		case 1: word_rus = "Дом"; break;
		case 2:word_rus = "Граната"; break;
		case 3:word_rus = "Дверь"; break;
		case 4:word_rus = "Дерево"; break;
		case 5:word_rus = "Окно"; break;
		case 6:word_rus = "Дорога"; break;

		default: cout << "[ + ] Такого слова нет в моём словаре! " << endl;
		}

		switch (word) {
		case 1: nWord = "House"; break;
		case 2: nWord = "Granade"; break;
		case 3: nWord = "Door"; break;
		case 4:nWord = "Tree"; break;
		case 5:nWord = "Window"; break;
		case 6:nWord = "Road"; break;
		}

		cout << "[ + ]Выбранное слово " << word_rus << "->" << nWord << endl << endl;

	}
}
