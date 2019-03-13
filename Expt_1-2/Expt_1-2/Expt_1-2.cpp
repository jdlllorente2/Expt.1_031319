#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	float mass, density;
	cout << "What is the mass(grams)?" << endl;
	cin >> mass;
	cout << "What is the density(grams per cubic centimeeter)?" << endl;
	cin >> density;

	cout << "Mass: " << mass << "g" << endl;
	cout << "Density: " << density << "g/cm^3" << endl;
	cout << "Volume = " << setprecision(2) << fixed << mass*0.25/density << "cm^3" << endl;
	
	_getch();
	return 0;
}

