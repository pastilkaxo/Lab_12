#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void files() {
	setlocale(LC_ALL, "Russian");
	string n;
	cout << "������� ������ ��� ����� � ����������� .txt , ���� �� ��������� � ����� ��������� / ����� �� .txt ���� �� ���������� : " << endl;
	cin >> n;

	ifstream fin(n);
	if (!fin) {
		cout << "file is not present";
	}
	string s;
	getline(fin, s);

	cout << s << endl;
}