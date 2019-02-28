#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

/* class Kutija {
private:
	int crvene, plave, zelene;
	string imekutije;
public:
	void ucitaj();
	int ukupnokuglica();
	void ispis() {
		cout << "Kutija " << imekutije << " sadrzi " << ukupnokuglica() << " kuglica, "<<" "<<crvene<<"c, " << plave << "p, " << zelene << "z."<< endl;
};

void Kutija::ucitaj() {
	cout << "Unesi ime za kutiju:"; cin >> imekutije;
	cout << "Unesi koliko ima crvenih kuglica [c]:"; cin >>crvene;
	cout << "Unesi koliko ima plavih kuglica [p]:"; cin >>plave;
	cout << "Unesi koliko ima zelenih kuglica [z]:"; cin >>zelene;
}
int Kutija::ukupnokuglica() {
	return crvene + plave + zelene;
}

int main() {
	Kutija K1, K2, K3;
	K1.ucitaj();
	K1.ispis(); 
	K2.ucitaj();
	K2.ispis();
	K3.ucitaj();
	K3.ispis();

} */

/*class Trokut {
private:
	int a, b, c;
public:
	double izracunajpovrsinu();
	double izracunajopseg() { return a + b + c; }
	bool dalitrokut() { if ((a + b) > c && (a + c) > b) return 1; else return 0; };
	void ucitajstranice();
};

void Trokut::ucitajstranice() {
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
}

double Trokut::izracunajpovrsinu() {
	double s = (a + b + c) / 2.;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main()
{
	Trokut T1;
	
	T1.ucitajstranice();
	if (T1.dalitrokut()) {
		cout << "Opseg je: " << T1.izracunajopseg() << endl;
		cout << "Povrsina je: " << T1.izracunajpovrsinu() << endl;
	}
	else
		cout << "Stranice nisu ispravne." << endl;
    return 0;
}
*/