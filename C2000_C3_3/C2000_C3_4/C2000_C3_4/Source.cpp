//Chpt3
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
#define WHO "Columbus"
#define DID "sailed"
#define WHAT "the ocean blue."

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
		s6 = " graduated \nfrom high school and went to work in a ",
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
	//getline(cin, name);
	name = "kim";
	cout << name;
	cout << "The name of a city: ";
	//getline(cin, city);
	city = "gainesville";
	cout << city;
	cout << "A physical activity (e.g. jogging, playing baseball):  ";
	//getline(cin, activity);
	activity = "walking ";
	cout << activity;
	
	cout << "An animal: ";
	//getline(cin, animal);
	animal = "dog";
	cout << animal;
	cout << "A food or product you can buy:  ";
	//getline(cin, product);
	product = "taco";
	cout << product;
	cout << "An adjective noun(e.g. blue car):  ";
	//getline(cin, petName);
	petName = "Nate";
	
	cout << "A number between 10 and 50: ";
	//cin >> age;
	age = 20;
	cout << age;
	cout << "A number between 0 and 15: ";
	//cin >> kids;
	kids = 10;
	cout << kids;
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
	// RQ 11
	cout << "\n********************* " << endl;
	cout << "   RQ 11         " << endl;

	int a, b = 2;
	double c = 4.3;
	a = b*c;
	cout << " a  =b*c =   " << a;

	cout << endl;
	cout << endl;
	// RQ 25
	cout << "\n********************* " << endl;
	cout << "   RQ 25A         " << endl;

	double salary, monthly;
	cout << "   what is your annual salary?  ";
	//cin >> salary;
	salary = 38711;
	cout << salary;
	monthly = static_cast<int>(salary) / 12;
	cout << "\n Your monthly wages are " << monthly << endl;

	cout << endl;
	cout << endl;
	// RQ 25B
	cout << "\n********************* " << endl;
	cout << "   RQ 25B         " << endl;
	long x, y, z;
	x = y = z = 4;
	x += 2;
	y -= 1;
	z *= 3;

	cout <<"   "<< x << " " << y << " " << z << endl;
	cout << endl;
	cout << endl;
	// RQ 25C
	cout << "\n********************* " << endl;
	cout << "   RQ 25C         " << endl;

	const int WHEN = 1492;
	cout << "  In " << WHEN << " " << WHO << " "
		<< DID << " " << WHAT << endl;
	cout << endl;
	cout << endl;
	// RQ 27A
	cout << "\n********************* " << endl;
	cout << "   RQ 27A         " << endl;
	double number1, number2, sum;
	cout << "  Enter a number:  ";
	//cin >> number1;
	number1 = 36;
	cout << number1 << endl;
	cout << "  Enter another number:  ";
	//cin >> number2;
	number2 = 38;
	cout << number2 << endl;
	sum = number1 + number2;
	cout << "  The sum of the two numbers is " << sum;
	cout << endl;
	cout << endl;
	// RQ 27B
	cout << "\n********************* " << endl;
	cout << "   RQ 27B         " << endl;
	int number27B1, number27B2;
	double quotient;
	cout << "Enter two numbers and I will divide\n";
	cout << "the first by the second for you.  ";
	//cin >> number27B1 >> number27B2;
	number27B1 = 54;
	number27B2 = 9;

	cout << number27B1 << "  " << number27B2 << endl;
	quotient = static_cast<double>(number27B1) / number27B2;
	cout << quotient;
	cout << endl;
	cout << endl;
	// RQ 29A
	cout << "\n********************* " << endl;
	cout << "   RQ 29A         " << endl;

	double number29A, half29A;
	cout << "  Enter a number and I will divide it\n";
	cout << " in half for you.  ";
	//cin >> number29A;
	number29A = 58;
	cout << number29A;
	half29A = number29A / 2;

	cout << "\n  "<<half29A;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	return 0;

}
