//Chpt3
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;





int main()
{	// program 3-21
	cout << "\n********************* "<< endl;
	cout << "   Program 3-21         " << endl;
	string name21;
	string city21;
	cout << "       Please enter your name:  ";
	cin >> name21;
	cout << "       cin >> name21            " << endl;
	cout << "       Enter the city your live in:  ";
	cin >> city21;
	cout << "       cin >> city21            " << endl;

	cout << "       Hello, " << name21 << endl;
	cout << "       You live in "<< city21 << endl;

	cout << endl;
	cout << endl;
	

	// program 3-22
	cout << "\n********************* " << endl;
	cout << "   Program 3-22         " << endl;
	string name22;
	string city22;
	cout << "       Please enter your name:  ";
	cin.ignore();
	getline(cin, name22);
	cout << endl;
	cout << "       getline(cin, name22)  " << endl;
	cout << endl;
	cout << "       Enter the city your live in:  ";
	getline(cin, city22);
	cout << endl;
	cout << "       getline(cin, city22)  " << endl;
	cout << endl;
	cout << "       Hello, " << name22 << endl;
	cout << "       You live in " << city22 << endl;

	cout << endl;
	cout << endl;
	return 0;

}
