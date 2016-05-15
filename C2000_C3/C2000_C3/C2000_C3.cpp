//Chpt3
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//program 3-12
#define PI 3.14159
//chkpt 3.18
#define E 2.71828
#define YEAR_SECS 5.26e5
#define GRAV_ACC_FT_PER_SEC 32.2
#define GRAV_ACC_M_PER_SEC 9.8
#define METERS_PER_MILE 1609
//chkpt 3.19
#define GREETING1 "This program calculates the number "
#define GREETING2 "of candy pieces sold."
#define QUESTION  "How many jars of candy have you sold? "
#define RESULTS   "The number of pieces sold: "
#define YOUR_COMMISSION "Candy pieces you get for commission: "
#define COMMISSION_RATE .20

//chkpt 3.20
#define CONVERSION 1.467





void calc3_12(double );
int main()
{
	//Program 3-1
	cout << "\n****************";
	cout << "\n  Program 3-1  \n";
	int length1, width1, area1;
	cout << "\n\nThis calc area of rect\n";
	cout  << "\n   What is the length of rect:  ";
	length1 = 10;
	//cin  >> length1;
	cout << "      " << setw(20) << left << length1;
	cout << "\n   What is the width of rect:  ";
	width1 = 20;
	//cin >> width1;
	cout << "       " << setw(20) << left << width1;
	area1 = length1 * width1;
	cout << "\n   The area of rect:  " << "                " 
		<< setw(20) << left << area1 << endl;
	cout << endl;
	cout << endl;
	
	//program 3-2
	cout << "\n****************";
	cout << "\n  Program 3-2   \n";
	int intNumber2;
	double floatNumber2;
	cout << "\n  input a number #1:    ";
	intNumber2 = 12;
	//cin >> intNumber2;
	cout << "\n  input a number #2:    ";
	floatNumber2 = .3;
	//cin >> floatNumber2; 
	cout << "\n        You entered:  "<< setw(10) <<right<< intNumber2 
		 << "  "<<floatNumber2 << endl;
	cout << endl;
	cout << endl;

	//program 3-3
	cout << "\n****************";
	cout << "\n  Program 3-3  \n";
	int length3, width3, area3;
	cout << "\n  This calc area of rect\n";
	cout << "\n  Enter the length and width of the rect \n";
	cout << "\n  separated by a space:";
	//cin >> length3 >> width3;
	length3 = width3 = 10;
	area3 = length3 * width3;
	cout << "      " << setw(10) << right<< length3 << "     " << width3;


	cout << "       " << "\n  The area of rect:           " 
		<< setw(10) << right << area3 << endl;
	cout << endl;
	cout << endl;

	// program 3-4
	cout << "\n****************";
	cout << "\n  Program 3-4  \n";
	int whole;
	double fractional;
	char letter;
	cout << "Enter an integer, a double, and a character:  \n\n";
	whole = 4; fractional = 5.7; letter = 'b';
	//cin >> whole >> fractional >> letter;
	cout <<"       " << setw(20) << left << "whole:       " << whole << endl;
	cout <<"       " << setw(20) << left << "fractional:  " << fractional << endl;
	cout <<"       " << setw(20) << left << "letter:      " << letter << endl;
	cout << endl;
	cout << endl;

	//chkpt 3.6
	cout << "\n****************";
	cout << "\n  chkpt 3.6  \n";
	cout << "\n This program reads value of miles, feet, inches.\n";
	long miles;
	int feet;
	double inches;

	cout << "\n Enter the miles, feet, inches: \n";
	//cin >> miles >> feet >> inches;
	miles = feet = inches = 20;
	
	cout <<"\n       " << setw(20) << left << "the miles   " << miles;
	cout <<"\n       " << setw(20) << left << "the feet    " << feet;
	cout <<"\n       " << setw(20) << left << "the inches  " << inches;

	cout << endl;
	cout << endl;

	
	//chkpt 3.7
	cout << "\n****************";
	cout << "\n  chkpt 3.7  \n";
	double first, second, product;
	cout << "\n This program calc the product of two numbers  \n";
	cout << "\n Enter two numbers separate by a space:     ";
	first = second = 20;
//	cin >> first >> second;
	cout << "      " << setw(10) << right<< first << "     " << second;
	product = first * second;
	cout << "\n the product of the two numbers          "
		 << setw(20) << right << product;

	cout << endl;
	cout << endl;
	
	// chkpt 3.8
	cout << "\n****************";
	cout << "\n  chkpt 3.8  \n";

	double pounds, kilograms;
	cout << " This program calc the kilograms of pounds  \n";
	cout << "\n Enter your weight in pounds:   ";
	//cin >> pounds;
	pounds = 130;
	cout <<  "       " << setw(20) << left << pounds;
	kilograms = pounds / 2.2;
	cout << "\n Your weight in kilograms is:          " << setw(20) << left << kilograms;
	cout << endl;
	cout << endl;
	//program 3-5
	cout << "\n****************";
	cout << "\n  program 3-5  \n";
	double numerator, denominator;
	cout << " This program shows the decimal value of a fraction.\n";
	cout << "\n Enter the numerator:  ";
	numerator = 3;
	//cin >> numerator;
	cout << "         " << setw(20) << left << numerator;
	cout << "\n Enter the denominator:  ";
	denominator = 16;
	//cin >> denominator;
	cout << "       " << setw(20) << left <<denominator;
	cout << "\n       " << setw(20) << left << " the decimal value is " 
		 << "   "<<setw(20) << left<<(numerator / denominator) << endl;
	cout << endl;
	cout << endl;

	//program 3-6
	//#include <cmath>  is needed for cin
	cout << "\n****************";
	cout << "\n  program 3-6  \n";

	double area6, radius6;
	cout << " This program calc the area of circle  \n";
	radius6 = 10;

	cout << "\n  What is the radius of the circle:  ";
	cout << "       " << setw(20) << left<< radius6;
	//cin >> radius6;
	area6 = 3.14159 * pow(radius6, 2);
	cout << "\n  the area of the circle:           " 
		<<"        " << setw(20) << left << area6 << endl;
	cout << endl;
	cout << endl;

	//chkpt 3.10
	cout << "\n****************";
	cout << "\n  chkpt 3.10  \n";

	cout << " This program calc the algebraic expression  \n";

	double value10;
	value10 = 6 + 3 * 5;
	cout << "\n    6 + 3 * 5            " << value10 << endl;
	value10 = 12 / 2 - 4;
	cout << "\n    12 / 2 - 4           " << value10 << endl;
	value10 = 9 + 14 * 2 - 6;
	cout << "\n    9 + 14 * 2 - 6       " << value10 << endl;
	value10 = 5 + 19 % 3 - 1;
	cout << "\n    5 + 19 % 3 - 1       " << value10 << endl;
	value10 = (6 + 2) * 3;
	cout << "\n   (6 + 2) * 3           " << value10 << endl;
	value10 = 14 / (11 - 4);
	cout << "\n    14 / (11 - 4)        " << value10 << endl;
	value10 = 9 + 12 * (8 - 3);
	cout << "\n    9 + 12 * (8-3)       " << value10 << endl;
	value10 = (6 + 17) % 2 - 1;
	cout << "\n   (6 + 17) % 2 - 1      " << value10 << endl;
	value10 = (9 - 3) *(6 + 9) / 3;
	cout << "\n   (9 - 3) *(6 + 9) /3   " << value10 << endl;
	cout << endl;
	cout << endl;

	//chkpt 3.11
	cout << "\n****************";
	cout << "\n  chkpt 3.11  \n";

	cout << " This program calc the algebraic expression  \n";

	double y11, x11;
	double a11, b11, c11, y12;
	int x12;
	double g13;
	int x13, z13;
	double y14;
	int x14, z14;
	x11 = x12= b11=c11=x13=z13=x14=z14=11;
	y11 = 6 * x11;
	
	a11 = 2 * b11 + 4 * c11;
	y12 = pow(x12,3);
	g13 = (x13 + 2) / pow(z13,2);
	y14 = pow(x14,2) / pow(z14,2);
	cout << "\n x11                           =    " << x11
		 << "\n y11 = 6 * x11                 =    " << y11
		 << endl
		 << endl
		 << "\n b11                           =    " << b11
		 << "\n c11                           =    " << c11
		 << "\n a11 = 2 * b11 + 4 * c11;      =    " << a11
	     << endl
	     << endl
	     << "\n x12                           =    " << x12
		 << "\n y12 = pow(x12,3)              =    " << y12
		 << endl
         << endl
	     << "\n x13                           =    " << x13
		 << "\n z13                           =    " << z13
		 << "\n g13 =(x13 + 2) / pow(z13,2)   =    " << g13
		 << endl
	     << endl
	     << "\n x14                           =    " << x14
		 << "\n z14                           =    " << z14
		 << "\n y14 = pow(x14,2) / pow(z14,2) =    " << y14;

	cout << endl;
	cout << endl;


	//chkpt 3.12
	cout << "\n****************";
	cout << "\n  chkpt 3.12  \n";

	cout << "\n This program calc the algebraic expression \n\n ";

//#include <iomanip>
	cout << "User number:                              Display   \n"<<endl;
	double value121;

		//cin >> value121;
	value121 = 2;
	calc3_12(value121);
	value121 = 5;
	calc3_12(value121);
	value121 = 4.3;
	calc3_12(value121); 
	value121 = 6;
	calc3_12(value121);
	cout << endl;
	cout << endl;

		//chkpt 3.13
	cout << "\n****************";
	cout << "\n  chkpt 3.13  \n";

	double volume, radius, height;
	cout << "This program calc volume of tank\n\n";
	height = 10;
	cout << "\n         tank heigth:  ";
	//cin >> height;
	cout << "        " << setw(20) << left<< height;
	radius = 10;

	cout << "\n         tank radius:  ";
	//cin >> radius;
	cout << "        " << setw(20) << left<<radius;
	volume = 3.14159 *pow(radius, 2)* height;
	cout << "\n    The volume of the tank is  " << volume << endl;
	cout << endl;
	cout << endl;

	// program 3-7
	cout << "\n****************";
	cout << "\n  program 3-7  \n";

	cout << "This program calc books per months\n";
	int	books,
		months;
	double booksPerMonth;
	cout << "\n  How many books do u plans to read?  ";
	//cin >> books;
	
	books = 30;
	cout << "          " << setw(20) << left << books;
	cout << "\n  How many months will it take u to read them?  ";
	//cin >> months;
	months = 7;
	cout << months;

	booksPerMonth = static_cast<double>(books) / months;
	cout << "\n\n     booksPerMonth = static_cast<double>(books) / months;  \n";
	cout << "\n  That is  " << "        " << setw(20) << left << booksPerMonth << " books per months.\n";

	cout << endl;
	cout << endl;

	//program 3-8
	cout << "\n****************";
	cout << "\n  program 3-8  \n";

	int number = 65;
	cout << "             int                 " << setw(40) << left << number << endl;
	cout << "     static_cast<char>(number)   " << static_cast<char>(number) << endl;
	cout << endl;
	cout << endl;

	//program 3-9
	cout << "\n****************";
	cout << "\n  program 3-9  \n";

	cout << "This program calc books per months\n\n";

	double booksPerMonth2;
	booksPerMonth2 = double(books) / months;
	cout << "     booksPerMonth2 = double(books) / months \n";
	cout << "\nThat is          " << setw(20) << left << booksPerMonth2 << "books per months.\n";

	cout << endl;
	cout << endl;

	// chkpt 3.14
	cout << "\n****************";
	cout << "\n  chkpt 3.14  \n";

	int a = 5, b = 12;
	double x = 3.2, z = 9.1;
	double result;
	//a
	result = b / a;
	cout << "\n                       result = b / a        " << result << endl;
	//b
	result = x * a;
	cout << "\n                       result = x * a        " << result << endl;
	//c
	result = static_cast<double>(b / a);
	cout << "\n    result = static_cast<double>( b / a)     " << result << endl;
	//d
	result = static_cast<double>(b) / a;
	cout << "\n    result = static_cast<double>( b) / a     " << result << endl;
	//e
	result = b / static_cast<double>(a);
	cout << "\n    result = b / static_cast<double>(a)      " << result << endl;
	//f
	result = static_cast<double>(b) / static_cast<double>(a);
	cout << "\n    result = static_cast<double>( b) / static_cast<double>(a)";
    cout << "\n                                             " << result << endl;
	//g
	result = b/ static_cast<int>(x) ;
	cout << "\n    result = b/ static_cast<int>(x)          " << result <<endl;
	//h
	result = static_cast<int>(x) * static_cast<int>(z);
	cout << "\n    result = static_cast<int>(x) * static_cast<int>(z)";
	cout << "\n                                             " << result << endl;
	//i
	result = static_cast<int>(x*z);
	cout << "\n    result = static_cast<int>(x*z)           " << result << endl;
	//j
	result = static_cast<double>(static_cast<int>(x)*static_cast<int>(z));
	cout << "\n    result = static_cast<double>(static_cast<int>(x) * static_cast<int>(z))";
	cout << "\n                                             " << result << endl;

	cout << endl;
	cout << endl;

	// chkpt 3.15
	
	cout << "\n****************";
	cout << "\n  chkpt 3.15  \n";
	char letter15;
	cout << "\n    The ASCII values of uppercase letters are "
		<< setw(10) <<right<< static_cast<int>('A') << " - "
		<< static_cast<int>('Z') << endl;
	cout << "\n    The ASCII values of lowercase letters are "
		<< setw(10) <<right<< static_cast<int>('a') << " - "
		<< static_cast<int>('z') << endl<<endl;
	cout << "\n    Enter a letter and I will tell you its ASCII code: ";
	//cin >> letter;
	
	letter15 = 'u';
	cout << "\n    The ASCII values for         " << letter15 << "     is      ";
	cout << setw(10) << right;
	cout << static_cast<int>(letter15) << endl;

	cout << endl;
	cout << endl;

	//chkpt 3.16
	cout << "\n****************";
	cout << "\n  chkpt 3.16  \n"; 

	int integer1 = 19,
		integer2 = 2;
	double doubleVal;
	cout << "\n     int integer1 =                                           " << integer1;
	cout << "\n     integer2 =                                               " << integer2;
	cout << endl;
	doubleVal = integer1 / integer2;
	cout << "\n     doubleVal = integer1 / integer2                          ";
	cout << doubleVal << endl; 
	doubleVal = static_cast<double>(integer1) / integer2;
	cout << "     doubleVal = static_cast<double>(integer1) / integer2     ";
	cout << doubleVal << endl;
	doubleVal = static_cast<double>(integer1 / integer2);
	cout << "     doubleVal = static_cast<double>(integer1 / integer2)     ";
	cout << doubleVal << endl;
	cout << endl;
	cout << endl;

	//program 3-10
	cout << "\n****************";
	cout << "\n  program 3-10  \n";

	short intVar = 32767;
	float floatVar = 3.0E-47;
	cout << "     Original vlaue of intVar                                 ";
	cout << intVar << endl;
	intVar = intVar + 1;
	cout << "     intVar after overflow    intVar = intVar + 1             ";
	cout << intVar << endl;
	intVar = intVar - 1;
	cout << "     intVar after  2nd overflow      intVar = intVar - 1      ";
	cout << intVar << endl;
	cout << "     Value of very tiny floatVar                              ";
	cout << floatVar << endl;
	cout << endl;
	cout << endl;
	
	// program 3-11
	cout << "\n****************";
	cout << "\n  program 3-11  \n";

	//const double PI = 3.14159;
	
	double area11, radius11;
	cout << " This program calc the area of circle  \n";
	radius11 = 10.0;

	cout << "\n  What is the radius of the circle:  ";
	cout << "       " << setw(20) << left << radius11;
	//cin >> radius11;
	area11 = PI * pow(radius11, 2);
	cout << "\n  the area of the circle:           "
		<< "        " << setw(20) << left << area11 << endl;
	cout << endl;
	cout << endl;

	// program 3-12
	cout << "\n****************";
	cout << "\n  program 3-12  \n";

	//const double PI = 3.14159;
	//#define PI 3.14159           //add to beginning of program
	double area12, radius12;
	cout << " This program calc the area of circle  \n";
	radius12 = 10.0;

	cout << "\n  What is the radius of the circle:  ";
	cout << "       " << setw(20) << left << radius12;
	//cin >> radius11;
	area12 = PI * pow(radius12, 2);
	cout << "\n  the area of the circle:           "
		<< "        " << setw(20) << left << area12 << endl;
	cout << endl;
	cout << endl;

	//chkpt 3.17
	cout << "\n****************";
	cout << "\n  chkpt 3.17   \n";
	/*
	const double E = 2.71828;
	const double MIN_PER_YEAR = 5.256E5;
	const double GRAV_ACC_FT_PER_SEC = 32.2;
	const double GRAV_ACC_M_PER_SEC = 9.8;
	const int METERS_PER_MILE = 1609;
	cout << endl;
	cout << endl;
	*/
	//chkpt 3.18
	cout << "\n****************";
	cout << "\n  chkpt 3.18  \n";
	/*
	//add to beginning of program
	#define E 2.71828
	#define YEAR_SECS 5.26e5
	#define GRAV_ACC_FT_PER_SEC 32.2;
	#define GRAV_ACC_M_PER_SEC 9.8;
	define METERS_PER_MILE 1609;
	*/
	//chkpt 3.19
	cout << "\n****************";
	cout << "\n  chkpt 3.19  \n";
	// see above main for #define
	/*
	#define GREETING1 "This program calculates the number "
	#define GREETING2 "of candy pieces sold."
	#define QUESTION  "How many jars of candy have you sold? "
	#define RESULTS   "The number of pieces sold: "
	#define YOUR_COMMISSION "Candy pieces you get for commission: "
	#define COMMISSION_RATE .20
	*/
	const int PIECES_PER_JAR = 1860;
	int jars, pieces;
	double commission;
	cout << GREETING1;
	cout << GREETING2 << endl;
	cout << QUESTION;
	//cin >> jars;
	jars = 6;
	cout << setw(20) << right;
	cout << jars<<endl;
	pieces = jars* PIECES_PER_JAR;
	cout << RESULTS;
	cout << setw(35) << right;
	cout<< pieces << endl;
	commission = pieces *COMMISSION_RATE;
	cout << YOUR_COMMISSION;
	cout << setw(24) << right;
	cout << commission << endl;
	cout << endl;
	cout << endl;

	//chkpt 3.20
	cout << "\n****************";
	cout << "\n  chkpt 3.20  \n";
	double milesPerHour, feetPerSecond;
	cout << "This program converts miles per hour to \n";
	cout << "feet-per-second.\n";
	cout << "Enter a speed in MPH: ";
	//cin >> milesPerHour;
	milesPerHour = 10;
	cout << setw(25) << right;
	cout << milesPerHour<<endl;
	feetPerSecond = milesPerHour * CONVERSION;
	cout << "That is   ";
	cout << setw(40) << right;
	cout << feetPerSecond << "   feet-per-second.\n" << endl;
	cout << endl;
	cout << endl;

	//chkpt 3.20
	cout << "\n****************";
	cout << "\n  chkpt 3.20  \n";
	return 0;

}
void calc3_12(double value121)
{
	
		double value122, value123;
		cout <<"      "<<setw(20)<<left<<value121 ;
		value122 = 2 * pow(value121, 2);
		value123 = 3 + value122 / 2 - 1;
		cout << "                    " <<value123 << endl;
	
}