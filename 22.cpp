#include <iostream>
#include <string>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int Int[10] = { 1,2,3,4,5,6,7,8,9,10 };

	float Float[10] = { 1,2,3,4,5,7,8,9,10 };

	short Short[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double Double[10] = { 1,2,3,4,5,6,7,8,9,10 };

	char Char[10] = {'a','b','c','d','e','f','h','i','j','k'};

	string String[10] = {"a","b","c","d","e","f","g","h","j","k"};

	bool Bool[10] = { true,false,true,false,true,false,true,false,true,false };

	int a;
	while (true) {
		cout << " == Массивы == " << endl;
		cout << "[1] Int\n[2] Float\n[3] Short\n[4] Double\n[5] Char\n[6] String\n[7] String\n";
		cout << "[ > ] Введите нужный массив: ";
		cin >> a;


		switch (a) {
		case 1:for (int i = 0; i < 10; i++) { cout << Int[i] << "\n"; }; break;

		case 2: for (int i = 0; i < 10; i++) { cout << Float[i] << "\n"; }; break;

		case 3:for (int i = 0; i < 10; i++) { cout << Short[i] << "\n"; }; break;

		case 4:for (int i = 0; i < 10; i++) { cout << Double[i] << "\n"; }; break;

		case 5:for (int i = 0; i < 10; i++) { cout << Char[i] << "\n"; }; break;

		case 6:for (int i = 0; i < 10; i++) { cout << String[i] << "\n"; }; break;

		case 7:for (int i = 0; i < 10; i++) { cout << Bool[i] << "\n"; }; break;

		default: {
			cout << endl << endl <<"Выбран несуществующий массив" << endl << endl ;
			continue;
		}
		};
	}
}
