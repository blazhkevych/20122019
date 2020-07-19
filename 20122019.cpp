// 20122019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a, b = 321, sum, vidn, mnozh, procent; //оголошення змінної без ініціалізації
	double dilenn;
	cout << "Введіть a=";
	cin >> a;
	cout << "Введіть b=";
	cin >> b;
	sum = a + b;
	vidn = a - b;
	mnozh = a * b;
	dilenn = 1.0 * a / b;
	procent = a % b;
	//cout << "sum= " << sum << "vidn= " << vidn << "mnozh= " << mnozh << "dilenn= " << dilenn << "procent= "<< procent << endl;

	cout << a << "+" << b << "=" << sum << endl;
	cout << a << "-" << b << "=" << vidn << endl;
	cout << a << "*" << b << "=" << mnozh << endl;
	cout << a << "/" << b << "=" << dilenn << endl;
	cout << a << "%" << b << "=" << procent << endl;




	/*a = 123; //присвоєння
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	sum = a + b;
	cout << "sum " << sum << endl;



	{
		cout << a * 2 << endl;
	}*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file