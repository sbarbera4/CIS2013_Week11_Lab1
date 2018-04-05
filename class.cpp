#include<iostream>
#include<cstring>
using namespace std;

class BirthDate 
{
public:
	int year = 0;
	int month = 0;
	int day = 0;
	void print()
	{
		cout << month << "/" << day << "/" << year;
	}

	void set(int d, int m, int y)
	{
		year = y;
		month = m;
		day = d;
	}
};

int main()
{
	BirthDate bob;

	cout << "enter bobs birthday" << endl;
	cin >> bob.day;

	cout << "enter bobs birth month" << endl;
	cin >> bob.month;

	cout << "enter bobs birth year" << endl;
	cin >> bob.year;

	cout << "bobs birthdate is: ";
	bob.print();
	cout << endl;

	BirthDate tom;
	tom.set(20, 5, 1984);
	cout << "toms birhtday is ";
	tom.print();

	return 0;

}
