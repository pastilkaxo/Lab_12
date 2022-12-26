#include <fstream>
#include <string>
#include <iostream>

using namespace std;

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
