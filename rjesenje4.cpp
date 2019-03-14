#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Ucenik {
private:
	string ime, prezime;
	int ocjene[5];
public:
	Ucenik() {};
	Ucenik(int) {};
	void set();
	bool ocjene_pozitivne();
	float prosjek();
	float average;
	bool poz = true;
	double najbolji=0;
	string najboljiime;
	string najboljiprezime;
	string getime() { return ime; }
	string getprezime() { return prezime; }
};

void Ucenik::set() {
	cout << "Ime: ";
	cin >> ime;
	cout  << "Prezime: ";
	cin >> prezime;
	for (int i = 0; i < 5; i = i + 1) {
		cout << "Unesi " << i + 1 << ". ocjenu: ";
		cin >> ocjene[i];
	
	}
}

bool Ucenik::ocjene_pozitivne(){
	for (int i = 0; i < 5; i = i + 1) {
		if (ocjene[i] == 1){
			poz = false;
		}
	}
	return poz;
}

float Ucenik::prosjek() {
	average = (ocjene[0] + ocjene[1] + ocjene[2] + ocjene[3] + ocjene[4]) / 5.00;
	cout << "Prosjek je: " << average << endl;;
	if (average > najbolji)
		najbolji = average;
		najboljiime = Ucenik::ime;
		najboljiprezime = Ucenik::prezime;
	return average;
}

int main()
{
	Ucenik ucenik;
	

	ucenik.set();
	ucenik.ocjene_pozitivne();
	if (ucenik.poz)
		ucenik.prosjek();
	ucenik.poz = true;

	ucenik.set();
	ucenik.ocjene_pozitivne();
	if (ucenik.poz)
		ucenik.prosjek();
	ucenik.poz = true;

	ucenik.set();
	ucenik.ocjene_pozitivne();
	if (ucenik.poz)
		ucenik.prosjek();
	ucenik.poz = true;

	ucenik.set();
	ucenik.ocjene_pozitivne();
	if (ucenik.poz)
		ucenik.prosjek();
	ucenik.poz = true;

	ucenik.set();
	ucenik.ocjene_pozitivne();
	if (ucenik.poz)
		ucenik.prosjek();
	ucenik.poz = true;

	cout << "Najbolji je: " << ucenik.najbolji << endl;
	cout << ucenik.najboljiime << " " << ucenik.najboljiprezime << endl;;

	return 0;
}