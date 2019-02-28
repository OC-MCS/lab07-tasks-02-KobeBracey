#include <iostream>
#include "Die.h"
using namespace std;
// client code to use the Die class goes here

int main()
{
	Die d1(6);
	Die d2(12);
	int counter1[7] = { 0 };
	int counter2[13] = { 0 };

	for (int i = 0; i < 1000000; i++)
	{
		d1.roll();
		d2.roll();
		counter1[d1.getValue()]++;
		counter2[d2.getValue()]++;

	}

	d1.displayPct(counter1, 6);
	d2.displayPct(counter2, 12);

	return 0;
}