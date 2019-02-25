#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

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
    kutija n;
    int i = 0;

    file.open("C:\\Users\\Mac\\Desktop\\zadatak.txt", ios::app);
       while (i < 5) {

			cout << "Unesi naziv proizvoda: ";

			cin >> n.nazivproizvoda;

			file << n.nazivproizvoda << " ";

			cout << "Unesi cijenu jedinicnog proizvoda bez davanja: ";

			cin >> n.cijenajedproiz;

			file << n.cijenajedproiz << " ";

			cout << "Unesi broj proizvoda (jedinicnih pakiranja) u kutiji: ";

			cin >> n.brproizpojed;

			file << n.brproizpojed << " " << endl;

			i++;

		}

		file.close();

	Kutija podaci[5];
	int cijenakutije[5];

	file.open("C:\\Users\\Mac\\Desktop\\zadatak.txt", ios::in);
	int i=0;
	while(!file.eof())
	{
		file>>podaci[i].nazivproizvoda;
		file>>podaci[i].cijenajedproiz;
		file>>podaci[i].brproizpojed;
		i++;
	}
	file.close();
	for(i=0;i<5;i++)
	{
		cijenakutije[i]= podaci[i].cijenajedproiz * podaci[i].brproizpojed;
		cout<<"Ukupna cijena kutije "<<podaci[i].nazivproizvoda<<" iznosi: "<<cijenakutije[i]<<endl;
	}

	return 0;
}
