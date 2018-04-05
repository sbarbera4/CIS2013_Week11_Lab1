#include <iostream>
#include <cstring>
using namespace std;

struct myDate 
{
	int day;
	int month;
	int year;
};

void printmyDate(myDate d) 
{
	cout << d.month << "/" << d.day << "/" << d.year;
}

int main() 
{

	myDate bob_bday;
	myDate tom_bday;

	cout << "enter bobs birthday: ";
	cin >> bob_bday.day;

	cout << "enter bobs birth month: ";
	cin >> bob_bday.month;

	cout << "enter bobs birth year: ";
	cin >> bob_bday.year;

	cout << "bobs birthdate is " << ;
	printmyDate(bob_bday)
		cout << endl;

	cout << "tom has the same birthday as bob" << endl;
	tom_bday = bob_bday;
	printmyDate(tom_bday);

	return 0;
}

