#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

void displayClock(int hours, int minutes, int seconds) {
	system("cls");
	cout << setfill(' ') << setw(49) << "ќбратный таймер\n";
	cout << setfill(' ') << setw(55) << " ==========================\n";
	cout << setfill(' ') << setw(29);
	cout << "| " << setfill('0') << setw(2) << hours << " hrs / ";
	cout << setfill('0') << setw(2) << minutes << " min / ";
	cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
	cout << setfill(' ') << setw(55) << " ==========================\n";
}

void timer(int hours, int minutes, int seconds) {
	while (true) {
		displayClock(hours, minutes, seconds);
		Sleep(1000);
		seconds--;
		if (seconds == 0) {
			if (hours == 0 && minutes == 0 && seconds == 0) {
				displayClock(hours, minutes, 0);
				cout << "¬рем€ вышло" << endl;
				return;
			}
			else if (minutes == 0 && seconds == 0) {
				hours--;
				minutes = 59;
				seconds = 59;
			}
			else if (seconds == 0) {
				minutes--;
				seconds = 59;
			}
		}
	}
}

void timerOutput() {
	setlocale(LC_ALL, "RUS");
	int hours, minutes, seconds;
	system("cls");
	do {
		cout << "¬ведите часы: ";
		cin >> hours;
	} while (hours < 0);
	do {
		cout << "¬ведите минуты: ";
		cin >> minutes;
	} while (minutes < 0);
	do {
		cout << "¬ведите секунды: ";
		cin >> seconds;
	} while (seconds < 0);

	timer(hours, minutes, seconds);
}
