//Chpt3
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;





int main()
{	// chkpt 3.26
	cout << "\n********************* " << endl;
	cout << "   Chkpt 3.26         " << endl;
	//char name26[4] = "John";
	//cout << name26;
	cout << endl;
	cout << endl;
	// chkpt 3.27
	cout << "\n********************* " << endl;
	cout << "   Chkpt 3.27         " << endl;
	string name27;
	//cin >> name27;
	//cin.getline(name27, 20);
	//cout << name27;
	name27 = "John";

	cout << endl;
	cout << endl;
	//chkpt 3.28
	cout << "\n********************* " << endl;
	cout << "   Chkpt 3.28         " << endl;
	
	char name28[20];
	//cin >> name28;
	//cin.getline(name28, 20);
	//cout << name28;
	//name28 = "John";
	cout << endl;
	cout << endl;

	//program 3.31
	cout << "\n********************* " << endl;
	cout << "   Program 3.31         " << endl;

	//must have           #include<cmath>   added to header

	double a31, b31, c31;
	cout << "\nEnter the length of the side a: ";
	//cin >> a31;
	a31 = 5.0;
	cout << "\nEnter the length of the side b: ";
	//cin >> b31;
	b31 = 12.0;
	c31 = sqrt(pow(a31, 2.0) + pow(b31, 2.0));
	cout << "\nThe length of the hypotenuse is ";
	cout << c31 << endl;
	cout << endl;
	cout << endl;

	//program 3.32
	cout << "\n********************* " << endl;
	cout << "   Program 3.32         " << endl;
	//******   #include <cstdlib>     *********** added
	cout << rand() << "       " << endl;
	cout << rand() << "       "<<endl;
	cout << rand() << "       "<<endl;
	cout << endl;
	cout << endl;

	//program 3.33
	cout << "\n********************* " << endl;
	cout << "   Program 3.33         " << endl;
	unsigned seed;
	cout << "Enter a seed value:  ";
	cin >> seed;
	srand(seed);

	cout << rand() << "       ";
	cout << rand() << "       ";
	cout << rand() << endl;
	cout << endl;
	cout << endl;


	cout << endl;
	cout << endl;
	return 0;

}
