#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"rus");

	int height, wight; // make variables
	char symbol; // make variable
	cout << "������� ������ ����� ������:";
	cin >> height; // setting variable
	cout << endl;

	cout << "������� ������ ����� ������:";
	cin >> wight; // setting variable
	cout << endl;

	cout << "������� ������ ������� ����� ����������� ������:";
	cin >> symbol; // setting variable
	cout << endl;

	for (int i=0; i != height; i++) // cycle about height
	{

		for (int i2=0; i2 !=wight ;i2++) // cycle about wight
		{
			cout << symbol;
		}
		cout << endl;
	}
}