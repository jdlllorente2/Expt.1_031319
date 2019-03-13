#include <iostream>
#include <conio.h>

using namespace std;

int main() 
{
	double a, b, c, d;

	cout << "Ticket Price       " << endl;
	cout << "Box: $250" << endl;
	cout << "Sideline: $100" << endl;
	cout << "Premium: $50" << endl;
	cout << "General Admission: $25" << endl;
	cout << "Enter number of tickets sold for Box: " << endl;
	cin >> a;
	cout << "Enter number of tickets sold for Sideline: " << endl;
	cin >> b;
	cout << "Enter number of tickets sold for Premium: " << endl;
	cin >> c;
	cout << "Enter number of tickets sold for General Admission: " << endl;
	cin >> d;

	cout << "Sale amount per ticket: " << endl;
	cout << "For Box: " << 250.00 * a << endl;
	cout << "For Sideline: " << 100.00 * b << endl;
	cout << "For Premium: " << 50.00 * c << endl;
	cout << "For General Admission: " << d * 25.00 << endl;
	cout << "Total Sale Amount: " << 250.00 * a + 100.00 * b + 50.00 * c + d * 25.00 << endl; 
	_getch();
	return 0;
}