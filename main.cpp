#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"rus");

	int height, wight; // make variables
	char symbol; // make variable
	cout << "¬ведите высоту вашей фигуры:";
	cin >> height; // setting variable
	cout << endl;

	cout << "¬ведите ширину вашей фигуры:";
	cin >> wight; // setting variable
	cout << endl;

	cout << "¬ведите символ которым будет напечатанна фигура:";
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