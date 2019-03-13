#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double netBalance, payment, d1, d2,interestrate, ave_dailybalance, interest;
	cout<<"What is your Net Balance?"<<endl;
	cin>>netBalance;

	cout<<"Amount of payment made?"<<endl;
	cin>>payment;

	cout<<"What is the number of days in your billing cycle?"<<endl;
	cin>>d1;

	cout<<"What is the number of days payment made before billing cycle?"<<endl;
	cin>>d2;

	cout<<"What is your interest rate"<<endl;
	cin>>interestrate;

	ave_dailybalance = (netBalance*d1-payment*d2)/d1;
	interest = (ave_dailybalance*interestrate);
	cout<<"interest = "<< setprecision(2) << fixed << interest<<endl;

	_getch();
	return 0;
}