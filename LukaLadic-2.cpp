#include "pch.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;

struct Kutija {

	string i;
	float c;
	int bp;
};

int main(int argc, char** argv) {
	Kutija podaci[5];
	int ukcijena[5];
	fstream file;
	file.open("C:\\proba\\file.txt", ios::app);
	do{
		cout << "Unesi ime proivoda: ";
		cin >> podaci[i].i;
		file << podaci[i].i << ",";
		cout << "Unesi cijenu proivoda: ";
		cin >> podaci[i].c;
		file << podaci[i].c << ",";
		cout << "Unesi broj proivoda: ";
		cin >> podaci[i].bp;
		file << podaci[i].bp << ",";
		int i = 0;
		i++;
	}while(i<5);
	file.close();
	file.open("C:\\proba\\file.txt", ios::in);
	int i = 0;
	while (!file.eof())
	{
		file >> p[i].i;
		file >> p[i].c;
		file >> p[i].bp;
		i++;
	}
	file.close();
	do
	{
		ukcijena[i] = podaci[i].c * podaci[i].bp;
		cout << "Ukupna cijena kutije " << podaci[i].i << " iznosi: " << ukcijena[i] << endl;
		i = 0;
		i++;
	}while(i < 5)
	return 0;
}