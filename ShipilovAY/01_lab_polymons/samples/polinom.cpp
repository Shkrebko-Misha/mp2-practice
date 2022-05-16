#include <cstdio>
#include <string>

#include <iostream>
#include "polinom.h"
#include "monom.h"

using namespace std;

void print_menu() {
	cout << "Меню:" << endl;
	cout << "1. Введите 1-й полином" << endl;
	cout << "2. Введите 2-й полином" << endl;
	cout << "3. Сумма полиномов" << endl;
	cout << "4. Разность полиномов" << endl;
	cout << "5. Умножение 1-го полинома на число" << endl;
	cout << "6. Умножение 2-го полинома на число" << endl;
	cout << "7. Произведение полиномов" << endl;
	cout << "8. Вывести результат" << endl;
	cout << "9. Вывести 1-й полином" << endl;
	cout << "10. Вывести 2-й полином" << endl;
};

int main() {
	setlocale(LC_ALL, "Russian");
	TPolinom mass[3];
	TPolinom result;
	string s1, s2;
	cout << "Введите 1-й полином. Пример - 3х^5y^2z^5-5x^4y^3z^3+7x^3y^5z" << std::endl;
	cin >> s1;
	cout << "Введите 2-й полином. Пример - 4x^3y^2z^6-6x^2yz^8" << std::endl;
	cin >> s2;
	TPolinom temp1(s1);
	TPolinom temp2(s2);
	mass[1] = temp1;
	mass[2] = temp2;

	int menu = 1;
	print_menu();
	cin >> menu;
	while (menu != 0)
	{
		switch (menu)
		{
		case 1:
		{
			string s3;
			cout << "Введите 1-й полином" << std::endl;
			cin >> s3;
			TPolinom temp3(s3);
			mass[1] = temp3;
			print_menu();
			cin >> menu;
			break;
		}
		case 2:
		{
			string s4;
			cout << "Введите 2-й полином" << std::endl;
			cin >> s4;
			TPolinom temp4(s4);
			mass[2] = temp4;
			print_menu();
			cin >> menu;
			break;
		}
		case 3:
		{
			result = mass[1] + mass[2];
			print_menu();
			cin >> menu;
			break;
		}
		case 4:
		{
			result = mass[1] - mass[2];
			print_menu();
			cin >> menu;
			break;
		}
		case 5:
		{
			double b1;
			cout << "Введите число, на которые Вы хотите умножить полином" << std::endl;
			cin >> b1;
			result = mass[1] * b1;
			print_menu();
			cin >> menu;
			break;
		}
		case 6:
		{
			double b2;
			cout << "Введите число, на которые Вы хотите умножить полином" << std::endl;
			cin >> b2;
			result = mass[2] * b2;
			print_menu();
			cin >> menu;
			break;
		}
		case 7:
		{
			result = mass[1] * mass[2];
			print_menu();
			cin >> menu;
			break;
		}
		case 8:
		{
			cout << "Результат - " << result << endl;
			cout << "3x^5y^2z^5 - 5x^4y^3z^3 + 7x^3y^5z + 4x^3y^2z^6 - 6x^2yz^8 = 1-й + 2-й" << endl;
			print_menu();
			cin >> menu;
			break;
		}
		case 9:
		{
			cout << "1-й полином - " << mass[1] << endl;
			print_menu();
			cin >> menu;
			break;
		}
		case 10:
		{
			cout << "2-й полином - " << mass[2] << endl;
			print_menu();
			cin >> menu;
			break;
		}
		default:exit(1);
		}
	}
	return 0;
}