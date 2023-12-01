/*
In this code we write an array. And then ask to user which index user want to change and which
value user want to enter. And then write on the screen new array.

Developer: Bar?? Somero?lu
Date: 01.12.23 / 4:00 p.m.
*/



#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int a, y;

	int x[5] = { 10,8,9,7,6 };

	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << endl;
	}
	
	cout << "Which Element of the Array You Want to Change: ";
	cin >> a;

	cout << "Please Enter New Value: ";
	cin >> y;

	x[a] = y;


	for (int i = 0; i < 5; i++)
	{
		cout << x[i] << endl;
	}


	return 0;
}