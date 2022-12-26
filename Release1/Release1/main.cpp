#include <iostream>
#include "simpleСalculator.h"
#include "calendarOnYear.h"
#include "numberTranslation.h"
#include "timer.h"
#include "calendarWithReminder.h"

using namespace std;

void menu() {
	cout << "Меню:\n"
		<< "1 - Простой калькулятор для работы с целыми числами (арифметические операции)\n"
		<< "2 - Календарь\n"
		<< "3 - Перевод числа из двоичной системы в десятичную и обратно\n"
		<< "4 - Таймер\n"
		<< "5 - Календарь месяца с напоминанием\n"
		<< "6 - Выход" << endl;
}

void main() {
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int choice;

	while (true) {
		menu();
		cout << "Выберите пункт меню: ";
		cin >> choice;
		switch (choice) {
		case 1:
			break;
		case 2:
			system("cls");
			calendarYear();
			break;
		case 3:
			break;
		case 4:
			timerOutput();
			break;
		case 5:
			calendar();
			break;
		case 6:
			cout << "Выход" << endl;
			return;
		default:
			cout << "Неверный выбор" << endl;
			break;
		}
	}
}