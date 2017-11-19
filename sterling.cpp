#include <iostream>
#include <iomanip>
#include "sterling.h"

using namespace std;

sterling make_sterling(int pounds, int shillings, int pence)
{
	sterling temp;

	temp.pounds = pounds;
	temp.shillings = shillings;
	temp.pence = pence;

	return temp;
}

sterling make_sterling(int pence)
{
	// 12 pe = 1 sh
	// 20 sh = 1 po

	sterling temp;

	temp.pounds = pence / 240;
	pence %= 240;
	temp.shillings = pence / 12;
	temp.pence = pence % 12;

	return temp;
}

sterling add(sterling s1, sterling s2)
{
	int i1 = s1.pounds * 240 + s1.shillings * 12 + s1.pence;
	int i2 = s2.pounds * 240 + s2.shillings * 12 + s2.pence;

	return make_sterling(i1 + i2);
}

void print(sterling& s) 
{
	cout << (char)156 << s.pounds << "." << setfill('0') << setw(2) << s.shillings << "." << setfill('0') << setw(2) << s.pence << endl;
}

void read(sterling* s)
{
	cout << "Please enter the pounds: " << endl;
	cin >> s->pounds;

	cout << "Please enter the shillings: " << endl;
	cin >> s->shillings;

	cout << "Please enter the pence: " << endl;
	cin >> s->pence;
}