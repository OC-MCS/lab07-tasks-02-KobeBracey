#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Retail.h"


Retail::Retail(string desc, int units, double cost)
{
	description = desc;
	unitsOnHand = units;
	price = cost;
}

double Retail::getStockValue()
{
	return unitsOnHand * price;
}
