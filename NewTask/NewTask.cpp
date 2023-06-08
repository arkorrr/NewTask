#include <iostream>
using namespace std;


int main()
{
	int sum = 0,		//Task1
		a;
	cout << "Enter number: ";
	cin >> a;
	for (a; a <= 500; a++) {
		sum += a;
	}
	cout << sum << endl;

	int x,		//Task2
		y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << pow(x, y);

	int sumOfAverage = 0;		//Task3
	for (int i = 0; i <= 1000; i++) {
		sumOfAverage += i;
	}
	cout << "Average of 1 to 1000 = " << sumOfAverage / 1000 << endl;

	long long int product = 1,		//Task4
		b;
	cout << "Enter number: ";
	cin >> b;
	for (b; b <= 20; b++) {
		product *= b;
	}
	cout << "Product = " << product << endl;

	int number1;		//Task5
	cout << "Enter number by 1 to 10: ";
	cin >> number1;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " * " << number1 << " = " << number1 * i << endl;
	}
}
