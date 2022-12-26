#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

void displayClock(int hours, int minutes, int seconds) {
	system("cls"); // Очистка консоли
	cout << setfill(' ') << setw(50) << "Обратный таймер\n";
	cout << setfill(' ') << setw(55) << " ==========================\n";
	cout << setfill(' ') << setw(29);
	cout << "| " << setfill('0') << setw(2) << hours << " hrs / ";
	cout << setfill('0') << setw(2) << minutes << " min / ";
	cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
	cout << setfill(' ') << setw(55) << " ==========================\n";
}

void timer(int hours, int minutes, int seconds) {
	while (true) {
		displayClock(hours, minutes, seconds); // Выводим время на экран
		Sleep(1000); // Приостанавливаем выполнение программы на 1 секунду
		seconds--; // Уменьшаем секунды на 1
		if (seconds == 0) {
			if (hours == 0 && minutes == 0 && seconds == 0) {// Если время закончилось
				displayClock(hours, minutes, 0);
				cout << "Время вышло" << endl;
				return;
			}
			else if (minutes == 0 && seconds == 0) {// Если минуты и секунды закончились
				hours--; // Уменьшаем часы на 1
				minutes = 59;
				seconds = 59;
			}
			else if (seconds == 0) {// Если секунды закончились
				minutes--; // Уменьшаем минуты на 1
				seconds = 59;
			}
		}
	}
}

int timerOutput() {
	system("cls");
	setlocale(LC_ALL, "RUS");
	int hours, minutes, seconds;
	// Проверка на корректность ввода
	do {
		cout << "Введите часы: ";
		cin >> hours;
	} while (hours < 0);
	do {
		cout << "Введите минуты: ";
		cin >> minutes;
	} while (minutes < 0);
	do {
		cout << "Введите секунды: ";
		cin >> seconds;
	} while (seconds < 0);

	timer(hours, minutes, seconds); // Запускаем таймер
	return 0;
}
