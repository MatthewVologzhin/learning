#include <iostream>
using namespace std;
string username;

int main() {
	setlocale(LC_ALL, "RU");

	cout << "Введите имя пользователя: ";
	cin >> username;
	cout << "Здравствуйте, " << username << "!";
	return 0;
}