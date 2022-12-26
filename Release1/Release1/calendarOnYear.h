#include <iostream>
#include <conio.h>

using namespace std;

void calendarYear()
{
	setlocale(LC_ALL, "RUS");
	int jan_1_start_day, num_days_per_month, width, month, date, leap_year_flag; // Укажите день недели 1 января
	cout << "Пожалуйста введите день недели для 1 Января;\n";
	// 0 — указывает, что 1 января — воскресенье
	cout << "\n0 — указывает, что 1 января — воскресенье,";
	// 1 — указывает, что 1 января — понедельник
	cout << "\n1 — указывает, что 1 января — понедельник,";
	// 2 — указывает, что 1 января — вторник и т.д.
	cout << "\n2 — указывает, что 1 января — вторник и т.д.: ";
	cin >> jan_1_start_day;
	// Укажите, на какой год вы хотите составить календарь:
	cout << "\nУкажите, на какой год вы хотите составить календарь: ";
	cin >> leap_year_flag;
	// Календарь на год
	cout << "\n\n Календарь на год " << leap_year_flag; leap_year_flag = leap_year_flag % 4;
	// признак високосного года (0)

	cout.width(20);
	for (month = 1; month <= 12; month++) {
		switch (month) {
		case 1:
			cout << "\n\n\n" << " Январь" << "\n"; // Январь
			num_days_per_month = 31;
			break;
		case 2:
			cout << "\n\n\n" << " Февраль" << "\n"; // Февраль
			num_days_per_month = leap_year_flag ? 28 : 29;
			break;
		case 3:
			cout << "\n\n\n" << " Март " << "\n"; // Март
			num_days_per_month = 31;
			break;
		case 4:
			cout << "\n\n\n" << " Апрель " << "\n"; // Апрель
			num_days_per_month = 30;
			break;
		case 5:
			cout << "\n\n\n" << " Май " << "\n"; // Май
			num_days_per_month = 31;
			break;
		case 6:
			cout << "\n\n\n" << " Июнь " << "\n"; // Июнь
			num_days_per_month = 30;
			break;
		case 7:
			cout << "\n\n\n" << " Июль " << "\n"; // Июль
			num_days_per_month = 31;
			break;
		case 8:
			cout << "\n\n\n" << " Август " << "\n"; // Август
			num_days_per_month = 31;
			break;
		case 9:
			cout << "\n\n\n" << "Сентябрь" << "\n"; // Сентябрь
			num_days_per_month = 30;
			break;
		case 10:
			cout << "\n\n\n" << " Октябрь " << "\n"; // Октябрь
			num_days_per_month = 31;
			break;
		case 11:
			cout << "\n\n\n" << "Ноябрь " << "\n"; // Ноябрь
			num_days_per_month = 30;
			break;
		case 12:
			cout << "\n\n\n" << "Декабрь " << "\n"; // Декабрь
			num_days_per_month = 31;
			break;
		}

		cout.width(0);
		// Bc Пн Вт Ср Чт Пт Сб
		cout << "\nBc   Пн   Вт   Ср   Чт   Пт   Сб   \n";
		cout << "---  ---  ---  ---  ---  ---  --- \n";
		for (date = 1; date <= 1 + jan_1_start_day * 5; date++)
			cout << " ";
		for (date = 1; date <= num_days_per_month; date++) {
			cout.width(2);
			cout << date;
			if ((date + jan_1_start_day) % 7 > 0)
				cout << "   ";
			else
				cout << "\n ";
		}
		jan_1_start_day = (jan_1_start_day + num_days_per_month) % 7;
	}
	cin >> date;

}