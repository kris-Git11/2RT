// ConsoleApplication71.cpp : Defines the entry point for the console application.
// napraviti metodu koja će ispisati koja je stranica najveća:npr. najveca je stranica b

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
using namespace std;

class Kutija {
private:
	int c, p, z;
	string ime;
public:
	void ucitaj();
	int izracunajUkupno();
	void ispis() 
	{
		cout << "Kutija " << ime << izracunajUkupno() << " kuglica ";
	}
};
void Kutija::ucitaj() {
	cout << "ime: "; cin >> ime;
	cout << "crvene: "; cin >> c;
	cout << "zelene: "; cin >> z;
	cout << "plave: "; cin >> p;
}

int Kutija::izracunajUkupno() {
	return c + z + p;
}

int main()
{
	Kutija K1, K2, K3;
	K1.ucitaj();
	K1.ispis();
	
	return 0;
}

