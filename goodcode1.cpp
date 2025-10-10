#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	while (true) {
		cin >> a;
		if (a >= 1 and a <= 10) {
			cout << a << " находится в промежутке 1 - 10" << endl;
		}
		else if (a >= 11 and a <= 20) {
			cout << a << " находится в промежутке 11 - 20" << endl;
		}
		else if (a >= 21 and a <= 30) {
			cout << a << " находится в промежутке 21 - 30" << endl;
		}
		else if (a >= 31 and a <= 40) {
			cout << a << " находится в промежутке 31 - 40" << endl;
		}
		else if (a >= 41 and a <= 50) {
			cout << a << " находится в промежутке 41 - 50" << endl;
		}
		else if (a >= 51 and a <= 60) {
			cout << a << " находится в промежутке 51 - 60" << endl;
		}
		else if (a >= 61 and a <= 70) {
			cout << a << " находится в промежутке 61 - 70" << endl;
		}
		else if (a >= 71 and a <= 80) {
			cout << a << " находится в промежутке 71 - 80" << endl;
		}
		else if (a >= 81 and a <= 90) {
			cout << a << " находится в промежутке 81 - 90" << endl;
		}
		else if (a >= 91 and a <= 100) {
			cout << a << " находится в промежутке 91 - 100" << endl;
		}
		else {
			cout << "ваше  число не находится в промежутке 1-100";
		}
	}
}
