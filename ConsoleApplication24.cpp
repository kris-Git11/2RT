// ConsoleApplication24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

class kutija {
private:
	int c, z, p;
	string ime;
public:
	void ucitajpodatke() {
		cout << "upisi ime kutije: ";
		cin >> ime;
		cout << "broj crvenih kuglica u kutiji: ";
		cin >> c;
		cout << "broj zelenih kuglica: ";
		cin >> z;
		cout << "broj plavih kuglica: ";
		cout >> p;
	}

	int ukupanbroj()
	{
		return c + z + p;

	}

	int maxkuglica()
	{
		if (c > p && z)









    return 0;


