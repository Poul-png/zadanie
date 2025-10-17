#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "[ + ]Календарь\n";
	cout << "[ 1 ] Январь\n";
	cout << "[ 2 ] Февраль\n";
	cout << "[ 3 ] Март\n";
	cout << "[ 4 ] Апрель\n";
	cout << "[ 5 ] Май\n";
	cout << "[ 6 ] Июнь\n";
	cout << "[ 7 ] Июль\n";
	cout << "[ 8 ] Август\n";
	cout << "[ 9 ] Сентябрь\n";
	cout << "[ 10 ] Октябрь\n";
	cout << "[ 11 ] Ноябрь\n";
	cout << "[ 12 ] Декабрь\n";

	while (true) {

		int month;
		int day;
		string nMonth;

		cout << "[ + ] Выберите месяц: ";
		cin >> month;

		switch (month) {
		case 1: nMonth = "Январь"; break;
		case 2: nMonth = "Февраль"; break;
		case 3: nMonth = "Март"; break;
		case 4: nMonth = "Апрель"; break;
		case 5: nMonth = "Май"; break;
		case 6: nMonth = "Июнь"; break;
		case 7: nMonth = "Июль"; break;
		case 8: nMonth = "Август"; break;
		case 9: nMonth = "Сентябрь"; break;
		case 10: nMonth = "Октябрь"; break;
		case 11: nMonth = "Ноябрь"; break;
		case 12: nMonth = "Декабрь"; break;
		default:
			cout << "Упс! Такого месяца не существует\n";
			return 1;
		}

		cout << "[ + ]Выбранный месяц: " << nMonth << endl;

		cout << "[ + ] Выберите день: ";

		cin >> day;
		string nDay;
		switch (day) {
		case 1: nDay = "1"; break;
		case 2: nDay = "2"; break;
		case 3: nDay = "3"; break;
		case 4: nDay = "4"; break;
		case 5: nDay = "5"; break;
		case 6: nDay = "6"; break;
		case 7: nDay = "7"; break;
		case 8: nDay = "8"; break;
		case 9: nDay = "9"; break;
		case 10: nDay = "10"; break;
		case 11: nDay = "11"; break;
		case 12: nDay = "12"; break;
		case 13: nDay = "13"; break;
		case 14: nDay = "14"; break;
		case 15: nDay = "15"; break;
		case 16: nDay = "16"; break;
		case 17: nDay = "17"; break;
		case 18: nDay = "18"; break;
		case 19: nDay = "19"; break;
		case 20: nDay = "20"; break;
		case 21: nDay = "21"; break;
		case 22: nDay = "22"; break;
		case 23: nDay = "23"; break;
		case 24: nDay = "24"; break;
		case 25: nDay = "25"; break;
		case 26: nDay = "26"; break;
		case 27: nDay = "27"; break;
		case 28: nDay = "28"; break;
		case 29: nDay = "29"; break;
		case 30: nDay = "30"; break;
		case 31: nDay = "31"; break;
		default:
			cout << "Упс! В этом месяце нет такого дня" << endl;
			return 1;
		}
		cout << "[ + ]Календарь: " << nMonth << "," << nDay << endl;






































	}

}
