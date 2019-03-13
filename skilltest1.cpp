#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	double hours;
	cout << "Hours work in a day: ";
	cin >> hours;
	cout << "Daily  Income: " << setprecision(2) << fixed << hours * 15.50 <<endl;

	double days; 
	cout << "days work in a week:  ";
	cin >> days;	
	cout << "Weekly Income: " << setprecision(2) << fixed << days * hours * 15.50 <<endl; 

	cout << "Whole Summer Job Expenses"<<endl;	
	cout << "Gross Income: " << setprecision(2) << fixed << days * hours * 15.50 * 5 <<endl;
	cout << "Net Income:  " << setprecision(2) << fixed << (days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)<<endl;
	
	cout << "Money alloted for:"<<endl;
	
	cout << "Clothes & Accessories : " << setprecision(2) << fixed 
	<< ((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10 <<endl;
	
	cout << "School Supplies: " << setprecision(2) << fixed << ((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01 <<endl;
	
	cout << "Saving Bonds: " << setprecision(2) << fixed 
	<< ((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) - ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01) + (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10)) <<endl;
	
	cout << "Additional Saving Bonds from Parents: " << setprecision(2) << fixed << (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) - ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01) + (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10))) / 2 <<endl;
	
	cout << "Total Saving Bonds: " << setprecision(2) << fixed << ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) - ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01) + (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10))) / 2 ) + ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) - ((((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .01) + (((days * hours * 15.50 * 5) - ((days * hours * 15.50 * 5) * .14)) * .10))))<<endl;

	_getch();
	return 0;
}