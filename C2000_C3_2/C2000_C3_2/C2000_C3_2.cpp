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
	//cin >> name21;
	name21 = "Kim Chu";
	cout << "       cin >> name21            " << endl;
	cout << "       Enter the city your live in:  ";
	//cin >> city21;
	city21 = "Gainesville";
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
	//cin.ignore();
	//getline(cin, name22);
	name22 = "Kim Chu";
	cout << endl;
	cout << "       getline(cin, name22)  " << endl;
	cout << endl;
	cout << "       Enter the city your live in:  ";
	//cin.ignore();
	//getline(cin, city22);
	city22 = "Gainesville";
	cout << endl;
	cout << "       getline(cin, city22)  " << endl;
	cout << endl;
	cout << "       Hello, " << name22 << endl;
	cout << "       You live in " << city22 << endl;
	cout << endl;
	cout << endl;


	// program 3-23
	cout << "\n********************* " << endl;
	cout << "   Program 3-23         " << endl;

	char ch;
		cout << "  Type a character and press Enter: ";
		//cin >> ch;
		ch = 'a';
		cout << "You entered " << ch << endl;
		cout << endl;
		cout << endl;


		// program 3-24
		cout << "\n********************* " << endl;
		cout << "   Program 3-24         " << endl;
		char ch24;
		cout << "This program as paused.  Press Enter to continue.";
		//cin.get(ch24);
		ch24 = 'a';
		cout << "It has paused a second time.  Please press Enter to continue.";
		
		//ch24=cin.get();
		ch24 = 'b';
		cout << "It has paused a third time.  Please press Enter to continue.";
		
		//cin.get();
		ch24 = 'c';
		cout << "Thank you!";

		cout << endl;
		cout << endl;


		// program 3-25
		cout << "\n********************* " << endl;
		cout << "   Program 3-25         " << endl;
		
		string firstName, lastName, fullName;
		string stars;
		int numStars;
		cout << "Please enter your first name : ";
		//getline(cin, firstName);
		firstName = "Kim";
		cout << "Please enter your last name : ";
		//getline(cin, lastName);
		lastName = "Chu";
		fullName = firstName + " " + lastName;
			numStars = fullName.length();
		stars.assign(numStars, '*');
		cout << endl;
		cout << stars << endl;
		cout << fullName << endl;
		cout << stars << endl;
		cout << endl;
		cout << endl;


		// program 3-26
		cout << "\n********************* " << endl;
		cout << "   Program 3-26         " << endl;
		const int SIZE26 = 12;
		char name26[SIZE26];
		cout << "Please enter your first name: ";
		//cin >> name26;
		//*****   use strcpy_s    inorder to copy a str into char***
		strcpy_s(name26, "kim chu");
		cout << "*** use strcpy_s  ****"<< endl <<"  inorder to copy a str into char***"
			<< endl<< "  to stop error message  " << endl;
		cout << "Hello, " << name26 << endl;
		cout << endl;
		cout << endl;


		// program 3-27
		cout << "\n********************* " << endl;
		cout << "   Program 3-27         " << endl;
		const int SIZE27 = 12;
		char name1[SIZE27],
			name2[SIZE27];
		strcpy_s(name1, "Sebastian");
		cout << "name1 now hold the string " << name1 << endl;
		strcpy_s(name2, name1);
		cout << "name2 now also holds the string " << name2 << endl;
		cout << endl;
		cout << endl;


		// program 3-28
		cout << "\n********************* " << endl;
		cout << "   Program 3-28         " << endl;

		const int SIZE28 =5;
		char word28[SIZE28];
		cout << "Enter a word: ";
		//cin >> setw(SIZE28)>> word28;
		strcpy_s(word28,"kdl");
		cout << "You entered " << word28 << endl;
		cout << endl;
		cout << endl;

		// program 3-29
		cout << "\n********************* " << endl;
		cout << "   Program 3-29         " << endl;
		const int SIZE29 = 5;
		char word29[SIZE29];
		cout << "Enter a word: ";
		//cin.width(SIZE29);
		//cin >> word29;
		strcpy_s(word29, "fjd");
		cout << "You entered " << word29 << endl;
		cout << endl;
		cout << endl;

		// program 3-30
		cout << "\n********************* " << endl;
		cout << "   Program 3-30         " << endl;
		const int SIZE30 = 81;
		char sentence[SIZE30];
		cout << "Enter a sentence: ";
		//cin.getline(sentence,SIZE30);
		strcpy_s(sentence, "  'this is a sentence is a lower'  ");
		cout << "You entered " << sentence << endl;
		cout << endl;
		cout << endl;

	cout << endl;
	cout << endl;
	return 0;

}
