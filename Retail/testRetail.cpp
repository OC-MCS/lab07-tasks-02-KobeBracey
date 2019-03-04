#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Retail.h"

void loadItems(vector<Retail> &);
int main()
{
	vector<Retail> RetailV;

	loadItems(RetailV);

	for (int i = 0; i < RetailV.size(); i++)
	{
		cout << RetailV[i].getDescription() << RetailV[i].getUnits() << RetailV[i].getPrice() << RetailV[i].getStockValue();
	}

	return 0;
}

void loadItems(vector<Retail> & RetailV)
{
	ifstream file;
	string desc, sUnits, sPrice;
	int units;
	double price;

	file.open("retail.csv");

	while (getline(file, desc, ',') && !file.eof())
	{
		getline(file, sUnits, ',');
		getline(file, sPrice, '\n');
		units = stoi(sUnits);
		price = stod(sPrice);
		Retail RetailItem(desc, units, price);
		RetailV.push_back(RetailItem);
	}
	
	file.close();
}
