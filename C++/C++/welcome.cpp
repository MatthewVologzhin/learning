#include <iostream>
using namespace std;

string username;

int welcome() {
	cout << "������� ��� ������������: ";
	cin >> username;
	cout << "����� ����������, " << username << "!";
	return 0;
}