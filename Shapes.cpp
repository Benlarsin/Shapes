// Your Name
// Date:
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants

int main()
{

	// Variable declaration

	int choice;
	double height, width;
	double area;

	//Program title and description for the user

	cout << "MENU TEMPLATE with IF ELSE" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - Calculate area of a Rectangel" << endl;
	cout << "2 - task #2" << endl;
	cout << "3 - task #3" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Calculations

	// Output to the screen

	if (choice == 1)
	{
		cout << "Perform task #1 : Rectangle area" << endl;

		//user input
		cout << "what is the height in cm?" << endl;
		cin >> height;
		cout << "what is the width in cm?" << endl;
		cin >> width;

		//calculation
		area = height * width;

		//output
		cout << "The area of the rectangle is: " << area << "cm squared" << endl;

	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Circle area" << endl;
	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Triangle area" << endl;
	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}