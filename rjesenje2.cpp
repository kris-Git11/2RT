#include "pch.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;

struct box {

	string ime;
	float cijena;
	int broj;
};
int main(int argc, char** argv) {
	box podaci[5];
	int boxcijena[5];
	fstream datoteka;
	datoteka.open("D:\\file.txt", ios::app);
	for (int i = 0; i < 5; i++)
	{
		cout << "Unesi ime proivoda: ";
		cin >> podaci[i].ime;
		datoteka << podaci[i].ime << ",";
		cout << "Unesi cijenu jedinicnog proivoda: ";
		cin >> podaci[i].cijena;
		datoteka << podaci[i].cijena << ",";
		cout << "Unesi broj proivoda: ";
		cin >> podaci[i].broj;
		datoteka << podaci[i].broj << ",";
	}
	datoteka.close();
	datoteka.open("D:\\file.txt", ios::in);
	int i = 0;
	while (!datoteka.eof())
	{
		datoteka >> podaci[i].ime;
		datoteka >> podaci[i].cijena;
		datoteka >> podaci[i].broj;
		i++;
	}
	datoteka.close();
	for (i = 0; i < 5; i++)
	{
    boxcijena[i] = podaci[i].cijena * podaci[i].broj;
		cout << "Ukupna cijena kutije " << podaci[i].ime << " iznosi: " << boxcijena[i] << endl;
	}
	return 0;
}
