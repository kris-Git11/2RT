// ConsoleApplication56.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;


class kutija {

private:
	int p, z, c;
	string ime;
public:
	void ucitaj();
	int izracunajUkupno;
	void ispis() { cout << "kutija" << ime << izracunajUkupno() << "kuglica"; }

	};


void kutija::ucitaj() {

	cout << "ime"; cin >> ime;
	cout << "plave"; cin >> plave;


}


int kutija::izracunajUkupno() {
	return c + z + p;

	
}


int main()
{

kutija 	
	
	
	
	return 0;
}

