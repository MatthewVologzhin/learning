#include <iostream>
using namespace std;

string username;

int welcome() {
	cout << "Введите имя пользователя: ";
	cin >> username;
	cout << "Добро пожаловать, " << username << "!";
	return 0;
}