//Zadatak 2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

class kutija {
public:
	string nazivproizvoda;
	float cijenajedproiz;
	float brproizpojed;
};
int main()
{
	fstream file;
	kutija proizvodi[100];
	kutija cijena[100];
	kutija n;
	int i = 0;

	file.open("C:\\Users\\Pc\\Desktop\\Kutija.txt", ios::app);
		while (i < 5) {
			cout << "unesi naziv proizvoda: ";
			cin >> n.nazivproizvoda;
			file << n.nazivproizvoda << " ";
			cout << "unesi cijenu jedinicnog proizvoda bez davanja: ";
			cin >> n.cijenajedproiz;
			file << n.cijenajedproiz << " ";
			cout << "unesi broj proizvoda (jedinicnih pakiranja) u kutiji: ";
			cin >> n.brproizpojed;
			file << n.brproizpojed << " " << endl;
			i++;
		}
		file.close();

		file.open("C:\\Users\\Pc\\Desktop\\Kutija.txt", ios::in);
		int j = 0;
		while (!file.eof())
		{
			file >> n.nazivproizvoda;
			file >> n.cijenajedproiz;
			file >> n.brproizpojed;
			j++;
		}
		file.close();
		
}
