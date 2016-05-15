//Chpt3
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;





int main()
{
	//program 3-13
	cout << "*******************" << endl;
	cout << "   program 3-13 \n" << endl;
	int begInv,
		sold,
		store1,
		store2;
	cout << "One week ago, 2 new widget stores opend\n";
	cout << "at the the same time with the same beginning\n";
	cout << "inventory.  What was the beginning inventory?  ";
	//cin >> begInv;
	begInv = 100;
	cout << setw(10) << right;
	cout << begInv << endl;

	store1 = store2 = begInv;
	cout << "How many widgets had store 1 sold?     ";
	//cin >> sold;
	sold = 25;
	cout << setw(17) << right;
	cout << sold << endl;
	store1 -= sold;
	cout << "How many widgets had store 2 sold?     ";
	//cin >> sold;
	sold = 15;
	cout << setw(17) << right;
	cout << sold << endl;
	store2 -= sold;
	cout << "\n The current inventory of each store\n";
	cout << setw(38) << right;
	cout << "   store 1:    ";
	cout << setw(18) << right; 
	cout << store1 << endl;
	cout << setw(38) << right; 
	cout << "   store 2:    ";
	cout << setw(18) << right;
	cout << store2 << endl;
	cout << endl;
	cout << endl;

	//chkpt 3.21
	cout << "*******************"<<endl;
	cout << "   chkpt 3.21 \n" << endl;

	int total, subtotal, tax, shipping;
	total = subtotal = tax = shipping = 0;
	// chkpt 3.22
	cout << "*******************" << endl;
	cout << "   chkpt 3.22 \n" << endl;

	//a
	int x22 = 10;
	cout << setw(25) << left << "         a";
	

	cout << setw(30) << left ;
	cout << "   x         ";
	cout << setw(10) << left;
	cout << x22 << endl;

	x22 += 6;
	cout << setw(25) << left;
	cout << "  ";

	cout << setw(30) << left;
	cout << "   x += 6    ";
	cout << setw(10) << left;
	cout << x22 << endl;
	cout << endl;
	cout << endl;

	//b
	int amount22 = 10;
	cout << setw(25) << left << "         b";

	cout << setw(30) << left;
	cout << "   amount    ";
	cout << setw(10) << left;
	cout << amount22 << endl;


	amount22 -= 4;
	cout << setw(25) << left << "  ";

	cout << setw(30) << left;
	cout << "   amount -= 4 ";
	cout << setw(10) << left;
	cout << amount22 << endl;
	cout << endl;
	cout << endl;
	//c
	int y22 = 1;
	cout << setw(25) << left << "         c";

	cout << setw(30) << left;
	cout << "   y         ";
	cout << setw(10) << left;
	cout << y22 << endl;

	y22 *= 4;
	cout << setw(25) << left << "  ";
	cout << setw(30) << left;
	cout << "   y *= 4    ";
	cout << setw(10) << left;
	cout << y22 << endl;
	cout << endl;
	cout << endl;
	//d
	double total22 = 1; 
	cout << setw(25) << left << "         d";

	cout << setw(30) << left;
	cout << "   total     ";
	cout << setw(10) << left;
	cout << total22 << endl;

	total22 /= 27;
	cout << setw(25) << left << "  ";

	cout << setw(30) << left;
	cout << "   total /= 27 ";
	cout << setw(10) << left;
	cout << total22 << endl;
	cout << endl;
	cout << endl;
	
	//e
	int x22e;
	x22e = 38;
	cout << setw(25) << left << "         e";

	cout << setw(30) << left;
	cout << "   x     ";
	cout << setw(10) << left;
	cout << x22e << endl;
	
	x22e %= 7;
	cout << setw(25) << left << "  ";

	cout << setw(30) << left;
	cout << "   x %= 7     ";
	cout << setw(10) << left;
	cout << x22e << endl;
	cout << endl;
	cout << endl;
	
	//f
	int y22f = 10;
	int x22f = 20;

	cout << setw(25) << left << "         f";

	cout << setw(30) << left;
	cout << "   y     ";
	cout << setw(10) << left;
	cout << y22f << endl;

	cout << setw(25) << left << "  ";

	cout << setw(30) << left;
	cout << "   x     ";
	cout << setw(10) << left;
	cout << x22f << endl;
	
	x22f += (y22f * 5);

	cout << setw(25) << left << "  ";

	cout << setw(30) << left;
	cout << "   x += (y * 5)     ";
	cout << setw(10) << left;
	cout << x22f << endl;
	cout << endl;
	cout << endl;

	//g

	double discount22g = 25.5;
	double total22g= 355.5;

	cout << setw(25) << left << "         g";

	cout << setw(30) << left;
	cout << "   discount     ";
	cout << setw(10) << left;
	cout << discount22g << endl;
	
	cout << setw(25) << left << "  ";

	cout << setw(30) << left;
	cout << "   total        ";
	cout << setw(10) << left;
	cout << total22g << endl;

	total22g -= (discount22g * 4);
	cout << setw(25) << left << "  ";

	cout << setw(30) << left;
	cout << "   total -= (discount * 4)    ";
	cout << setw(10) << left;
	cout << total22g << endl;
	cout << endl;
	cout << endl;

	//h
	double increase22h = 10.5;
	double salesRep22h = 20.5;

	cout << setw(25) << left << "         h";

	cout << setw(30) << left;
	cout << "   salesRep     ";
	cout << setw(10) << left;
	cout << salesRep22h << endl;

	cout << setw(25) << left << "         ";

	cout << setw(30) << left;
	cout << "   increase     ";
	cout << setw(10) << left;
	cout << increase22h << endl;

	increase22h *= (salesRep22h * 5);

	cout << setw(25) << left << "         ";

	cout << setw(30) << left;
	cout << "  increase *= (salesRep * 5) ";
	cout << setw(10) << left;
	cout << increase22h << endl;

	cout << endl;
	cout << endl;

	//i
	int shares = 1250;
	double profit = 1250.5;
	cout << setw(25) << left << "         i";

	cout << setw(30) << left;
	cout << "   shares     ";
	cout << setw(10) << left;
	cout << shares << endl;

	cout << setw(25) << left << "         ";

	cout << setw(30) << left;
	cout << "   profit     ";
	cout << setw(10) << left;
	cout << profit << endl;

	profit /= (shares - 1000);

	cout << setw(25) << left << "         ";

	cout << setw(30) << left;
	cout << "   profit /= (shares - 1000) ";
	cout << setw(10) << left;
	cout << profit << endl;
	
	cout << endl;
	cout << endl;

	// chkpt 3.23
	cout << "*******************" << endl;
	cout << "   chkpt 3.23 \n" << endl;

	int unus, duo, tres;
	unus = duo = tres = 5;
	unus += 4;
	duo *= 2;
	tres -= 4;
	unus /= 3;
	duo += tres;
	cout <<  unus << endl  << duo << endl << tres << endl;

	cout << endl;
	cout << endl;

	// program 3-14
	cout << "*******************" << endl;
	cout << "   program 3-14 \n" << endl;
	int num1 = 2897,	num2 = 5,		num3 = 837,
		num4 = 34,		num5 = 7,		num6 = 1623,
		num7 = 390,		num8 = 3456,	num9 = 12;

	cout << num1 << "  " << num2 << "  " << num3 << endl;
	cout << num4 << "  " << num5 << "  " << num6 << endl;
	cout << num7 << "  " << num8 << "  " << num9 << endl;

	cout << endl;
	cout << endl;

	// program 3-15
	cout << "*******************" << endl;
	cout << "   program 3-15 \n" << endl;
	cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
	cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;
	cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl;
	cout << endl;
	cout << endl;

	// program 3-16
	cout << "*******************" << endl;
	cout << "   program 3-16 \n" << endl;

	int intValue = 3928;
	double doubleValue = 91.5;
	string stringValue = "Jill Q. Jones";
	// #include <string> //added to beginning of program

	cout << "(" << setw(5)  << intValue    << ")" << endl;
	cout << "(" << setw(8)  << doubleValue << ")" << endl;
	cout << "(" << setw(16) << stringValue << ")" << endl;

	cout << endl;
	cout << endl;

	//program 3-17
	cout << "*******************" << endl;
	cout << "   program 3-17 \n" << endl; 

	double number1 = 132.364, number2 = 26.91;
	double quotient = number1 / number2;

	cout << quotient << endl;

	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;
	cout << endl;
	cout << endl;

	//program 3-18
	cout << "*******************" << endl;
	cout << "   program 3-18 \n" << endl;

	double day1, day2, day3, total18;
	cout << "\n  Enter the sales for day 1   ";
	//cin >> day1;
	day1 = 321.57;
	cout << setprecision(5);
	cout << setw(8) << day1;
	cout << "\n  Enter the sales for day 2   ";
	//cin >> day2;
	day2 = 269.60;
	cout << setprecision(5);
	cout << setw(8) << day2;
	cout << "\n  Enter the sales for day 3   ";
	//cin >> day3;
	day3 = 307.00;
	cout << setprecision(5);
	cout << setw(8) << day3;
	total18 = day1 + day2 + day3;
	cout << "\n-----------------------\n";

	cout << "\n  Sales Figures \n";
	cout << "-----------------------\n";
	cout << setprecision(5);
	cout << "      Day 1:  " << setw(8) << day1 << endl;
	cout << "      Day 2:  " << setw(8) << day2 << endl; 
	cout << "      Day 3:  " << setw(8) << day3 << endl;
	cout << "      Total:  " << setw(8) << total18 << endl;
	cout << endl;
	cout << endl;

	//program 3-19
	cout << "*******************" << endl;
	cout << "   program 3-19 \n" << endl;

	double x = 6.0;
	cout << "      " << "   x                      ";
	cout << x << endl;
	cout << "      " << "   showpoint              ";
	cout << showpoint << x << endl;
	cout << "      " << "   setprecision(2)        ";
	cout << setprecision(2) << x << endl;
	cout << "      " << "   fixed                  ";
	cout << fixed << x << endl;

	cout << endl;
	cout << endl;

	//program 3-20
	cout << "*******************" << endl;
	cout << "   program 3-20 \n" << endl;

	string	month1 = "January",
			month2 = "February",
			month3 = "March";

	int days1 = 31,
		days2 = 28,
		days3 = 31;

	double	high1 = 22.6,
			high2 = 37.4,
			high3 = 53.9;

	cout << fixed << showpoint << setprecision(1);
	cout << "      " <<"Month        Days    High\n";
	cout << "      " << left << setw(12) << month1
		 << right << setw(4)  << days1 << setw(9) << high1 << endl;
	cout << "      " << left << setw(12) << month2
		 << right << setw(4)  << days2 << setw(9) << high2 << endl;
	cout << "      " << left << setw(12) << month3
		 << right << setw(4)  << days3 << setw(9) << high3 << endl;
	cout << endl;
	cout << endl;

	//chkpt 3.24
	cout << "*******************" << endl;
	cout << "   chkpt 3.24 \n" << endl;
	//a
	double a = 34.789;
	cout << "    a       double a = 34.789                        " << endl;
	cout << "            << a <<                                      " << a << endl;
	cout << "            <<setw(9) << setprecision(2)<<           " 
		<< fixed << setprecision(2) << setw(9) << a << endl;
	cout << endl;
	//b
	double b = 7.0;
	cout << "    b       double b = 7.0                           " << endl;
	cout << "            << b <<                                            " << b << endl;
	cout << "            << fixed<< showpoint << setprecision(3)<< setw(5)  "
		<< fixed<< showpoint << setprecision(3) <<setw(5)<< b << endl;
	cout << endl;
	//c
	double c1= 5.789e+12;
	float c2 = 5.789e+12;
	cout << "    c       double c1 = 5.789e+12                    " << endl;
	cout << "            << c1 <<                                    " << c1 << endl;
	cout << "            << fixed <<                                 "
	     << fixed << c1 << endl;

	cout << "            float c2 = 5.789e+12                     " << endl;
	cout << "            << c2 <<                                    " << c2 << endl;
	cout << "            << fixed <<                                 "
	     << fixed << c2 << endl;

	cout << endl;
	//d
	int d = 67;
	cout << "    d       int d = 67                               " << endl;
	cout << "            << d <<                                     " << d << endl;
	cout << "            << left << setw(7)                          "
		<< left << setw(7) << d << endl;
	cout << endl;
	cout << endl;
	//chkpt 3.25
	cout << "*******************" << endl;
	cout << "   chkpt 3.25 \n" << endl;

	const double PI = 3.14159;
	double degrees, radians;
	cout << "           Enter an angle in degrees and I will convert it \n";
	cout << "           to radians for you:  ";
	//cin >> degrees;
	degrees = 90;
	cout << "                        " <<setprecision(2);
	cout << setw(8) << degrees << endl;
	radians = degrees * PI / 180;
	cout << "           " << degrees << " degrees        is equal to  ";
	cout << "           " << fixed << showpoint << setprecision(4);
	cout << left << setw(7) << radians << " radians.\n";
	cout << endl;
	cout << endl;
	
	cout << endl;
	cout << endl;
	return 0;

}
