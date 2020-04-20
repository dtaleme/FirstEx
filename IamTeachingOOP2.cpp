
#include <iostream>
#include <math.h>
#include "Header.h"

using namespace std;

int main()
{
	int a1, a2, b1, b2;

	fraction* dr1 = new fraction();

	fraction* dr2 = new fraction();

	do

	{

		cout << "Enter the numerator first fraction" << endl;

		cin >> a1;

		if (a1 == 0)

			cout << "Enter a number!=0" << endl;

	} while (a1 == 0);

	do

	{

		cout << "Enter the denominator first fraction" << endl;

		cin >> b1;

		if (b1 == 0)

			cout << "Enter a number!=0" << endl;

	} while (b1 == 0);

	do

	{

		cout << "Enter the numerator second fraction" << endl;

		cin >> a2;

		if (a2 == 0)

			cout << "Enter a number!=0" << endl;

	} while (a2 == 0);

	do

	{

		cout << "Enter the denominator second fraction" << endl;

		cin >> b2;

		if (b2 == 0)

			cout << "Enter a number!=0" << endl;

	} while (b2 == 0);

	dr1->SetCH(a1);

	dr1->SetZN(b1);

	dr2->SetCH(a2);

	dr2->SetZN(b2);

	cout << *dr1 / *dr2 << endl;

	cout << *dr1 * *dr2 << endl;

	cout << *dr1 + *dr2 << endl;

	cout << *dr1 - *dr2 << endl;

}