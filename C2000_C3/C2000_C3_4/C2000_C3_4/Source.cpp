//Chpt3
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


const double PRICE_PER_CUBIC_YD = 22.00;


int main()
{	// program 3.36
	cout << "\n********************* " << endl;
	cout << "   program 3.36         " << endl;

	double squareFeet;
	int depth;
	double cubicFeet,
		cubicYards,
		totalPrice;

	cout << "\nNumber of squre feet to be covered with mulch:  ";
	//cin >> squareFeet;
	squareFeet = 270;
	cout << "   squareFeet = 270; " << endl;
	cout << "\nNumber of inches deep:  ";
	//cin >> depth;
	depth = 12;
	cout << "  depth = 12; ";
	cubicFeet = squareFeet *(depth / 12.0);
	cubicYards = cubicFeet / 27;
	totalPrice = cubicYards * PRICE_PER_CUBIC_YD;

	cout << "\n Number of cubic yards needed:  " << cubicYards << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "\n Price per cubic yare:  $" << setw(7)
		<< PRICE_PER_CUBIC_YD << endl;
	cout << "\n  Total price:         $" << setw(7)
		<< totalPrice << endl << endl;
	cout << endl;
	cout << endl;
	// program 3.37
	cout << "\n********************* " << endl;
	cout << "   program 3.37         " << endl;

	string s1 = "There once was a person named ",
		s2 = "  who lived in ",
		s3 = "\nand who loved ",
		s4 = ".  At the age of ",
		s5 = ", ",
		s6 = " gradeuated \nfrom high school and went to work in a ",
		s7 = " factory.\n",
		s8 = " got married and had ",
		s9 = " children and a pet ",
		s10 = " named ",
		s11 = "\nEvery weekend the family and ",
		s12 = " had fun ",
		s13 = " together.";

	string name, city, activity, animal, product, petName;
	int age, kids;

	cout << "Enter the following information and I\'ll "
		<< "tell you a story.\n\n";
	cout << "Your name: ";
	getline(cin, name);

	cout << "The name of a city: ";
	getline(cin, city);
	cout << "A physical activity (e.g. jogging, playing baseball):  ";
	getline(cin, activity);
	cout << "An animal: ";
	getline(cin, animal);
	cout << "A food or product you can buy:  ";
	getline(cin, product);
	cout << "An adjective noun(e.g. blue car):  ";
	getline(cin, petName);
	cout << "A number between 10 and 50: ";
	cin >> age;
	cout << "A number between 0 and 15: ";
	cin >> kids;

	cout << endl << s1 << name
		<< s2 << city << s3 << activity;
	cout << s4 << age
		<< s5 << name
		<< s6 << product
		<< s7 << name
		<< s8 << kids
		<< s9 << animal
		<< s10 << petName
		<< s11 << petName
		<< s12 << activity
		<< s13 << endl;


	cout << endl;
	cout << endl;

	return 0;

}
