#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

struct Kutija{

	string naziv;
	float cijena;
	int brojproizvoda;
};
int main(int argc, char** argv) {
	Kutija podaci[5];
	int cijenakutije[5];
	fstream datoteka;
	datoteka.open("C:\\Users\\User\\Desktop\\datoteka.txt", ios::app);
	for(int i=0; i<5;i++)
	{ 
		cout<<"Unesi naziv proivoda(bez razmaka): ";
		cin>>podaci[i].naziv;
		datoteka<<podaci[i].naziv<<",";
		cout<<"Unesi cijenu jedinicnog proivoda: ";
		cin>>podaci[i].cijena;
		datoteka<<podaci[i].cijena<<",";
		cout<<"Unesi broj proivoda: ";
		cin>>podaci[i].brojproizvoda;
		datoteka<<podaci[i].brojproizvoda<<",";
	}
	datoteka.close();

	datoteka.open("C:\\Users\\User\\Desktop\\datoteka.txt", ios::in);
	int i=0;
	while(!datoteka.eof())
	{
		datoteka>>podaci[i].naziv;
		datoteka>>podaci[i].cijena;
		datoteka>>podaci[i].brojproizvoda;
		i++;
	}
	datoteka.close();
	for(i=0;i<5;i++)
	{
		cijenakutije[i]= podaci[i].cijena * podaci[i].brojproizvoda;
		cout<<"Ukupna cijena kutije "<<podaci[i].naziv<<" iznosi: "<<cijenakutije[i]<<endl;
	}

	return 0;
}
