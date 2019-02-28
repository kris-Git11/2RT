// ConsoleApplication70.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Kutija {
private:
	int crvene, plave, zelene;
	string ime;
public:
	void Ucitajkuglice();
	int BrojKuglica() { return crvene + plave + zelene; };
	string NadiMaxKuglica();
};
void Kutija::Ucitajkuglice() {
	cout << "Crvene: "; cin >> crvene;
	cout << "Plave: "; cin >> plave;
	cout << "Zelene: "; cin >> zelene;
	cout << "Ime: "; cin >> ime;
}
string Kutija::NadiMaxKuglica() {
	int max = 0;
	string boja;
	if (crvene > max)
	{
		max = crvene; boja = "crvenih"; return boja;
	}
	else if (zelene > max)
	{
		max = zelene; boja = "zelenih"; return boja;
	}
	else if (plave > max)
	{
		max = plave; boja = "plavih"; return boja;
	}

}
int main()
{
	Kutija K[3];
	for (int i = 0; i < 3; i++) {
		K[i].Ucitajkuglice();
	}
	for (int i = 0; i < 3; i++) {
		cout << "Ukupan broj kuglica iz kutije "<<K[i].ime<<" : "<< K[i].BrojKuglica() << endl;
		cout << "Najvise ima: "<<K[i].NadiMaxKuglica() <<" kuglica." << endl;
	}

    return 0;
}

