#include <iostream>
#include <conio.h> 
#include <time.h>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

void displayClock(int hours, int minutes, int seconds) {
	system("cls"); 
	cout << setfill(' ') << setw(49) << "Обратный таймер\n";
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
				cout << "Время вышло" << endl;
				return;
			} else if (minutes == 0 && seconds == 0) {
				hours--;
				minutes = 59;
				seconds = 59;
			} else if (seconds == 0) {
				minutes--;
				seconds = 59;
			}
		}
	}
}


void files()
{
	setlocale(LC_ALL, "Russian");
	string n;
	cout << "Введите полное имя файла с расширением .txt , если он находится в папке программы / адрес на .txt файл на компьютере : " << endl;
	cin >> n;
	
	ifstream fin(n);
	if (!fin) {
		cout << "file is not present";
	}
	string s;
	getline(fin, s);

	cout << s << endl;


}

int main() {
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "Выберите проект который хотите посмотреть:\n"
		<< "1 - Таймер\n"
		<< "2 - Программа для чтения текстовых файлов\n"
		<< "3 - \n"
		<< "4 - \n"
		<< "5 - \n"
		<< "6 - Выход" << endl;
	cin >> number;

	switch (number) {
	case 1:
		system("cls");
		int hours, minutes, seconds;
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
		timer(hours, minutes, seconds);
		break;
	case 2:
		system("cls");
		files();
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		cout << "Выход" << endl;
		break;
	default:
		cout << "Неверный выбор" << endl;
		break;
	}
}	