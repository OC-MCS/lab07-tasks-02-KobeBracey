#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Retail
{
private:
	string description;
	int unitsOnHand;
	double price;
public:
	Retail(string, int, double);
	string getDescription()
	{   return description;   }
	int getUnits()
	{   return unitsOnHand;   }
	double getPrice()
	{	return price;   }
	double getStockValue();
};
