Malo pocelaj
Pocekaj
#include "pch.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;

struct Kutija {

	string ime;
	float cijena;
	int br_pro;
};
int main(int argc, char** argv) {
	Kutija podaci[5];
	int cijenakutije[5];
	fstream datoteka;
	datoteka.open("C:\\proba\\datoteka.txt", ios::app);
	for (int i = 0; i < 5; i++)
	{
		cout << "Unesi ime proivoda: ";
		cin >> podaci[i].ime;
		datoteka << podaci[i].ime << ",";
		cout << "Unesi cijenu jedinicnog proivoda: ";
		cin >> podaci[i].cijena;
		datoteka << podaci[i].cijena << ",";
		cout << "Unesi broj proivoda: ";
		cin >> podaci[i].br_pro;
		datoteka << podaci[i].br_pro << ",";
	}
	datoteka.close();
	datoteka.open("C:\\proba\\datoteka.txt", ios::in);
	int i = 0;
	while (!datoteka.eof())
	{
		datoteka >> podaci[i].ime;
		datoteka >> podaci[i].cijena;
		datoteka >> podaci[i].br_pro;
		i++;
	}
	datoteka.close();
	for (i = 0; i < 5; i++)
	{
		cijenakutije[i] = podaci[i].cijena * podaci[i].br_pro;
		cout << "Ukupna cijena kutije " << podaci[i].ime << " iznosi: " << cijenakutije[i] << endl;
	}
	return 0;
}