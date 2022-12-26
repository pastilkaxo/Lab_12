#include <iostream>
#include <cmath>
using  namespace std;

void calculator() {
    int a = 0;
    int b = 0;
    char operation;
    cout << "Введите первое число a: ";
    cin >> a;
    cout << "Введите второе число b : ";
    cin >> b;
    cout << "Выберите операцию: (+,-,*,/,^) ";
    cin >> operation;

    switch (operation) {
    case '-':
        cout << "a - b = " << a - b << '\n';
        break;
    case '+':
        cout << "a + b = " << a + b << '\n';
        break;
    case '*':
        cout << "a * b = " << a * b << '\n';
        break;
    case '/':
        cout << "a / b = " << a / b << '\n';
        break;
    case '^':
        cout << "a**b = " << pow(a, b) << '\n';
        break;
    default:
        cout << "Error\n";
    }
   
}