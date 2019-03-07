
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Kutija {
private: int CrveneK, PlaveK, ZeleneK; string ImeK;
public:
	void Upis() {
		cout << "Upisi zeljeno ime kutije: ";
		cin >> ImeK;
		cout << "Upisi broj crvenih kuglica u kutiji: ";
		cin >> CrveneK;
		cout << "Upisi broj plavih kuglica u kutiji: ";
		cin >> PlaveK;
		cout << "Upisi broj zelenih kuglica u kutiji: ";
		cin >> ZeleneK;
		cout << endl;}

	int Ukupno()
	{
		return CrveneK + PlaveK + ZeleneK;}
	string Kuglice()
	{
		if (CrveneK > PlaveK && CrveneK > ZeleneK)
			return "Najvise ima crvenih kuglica.";

		if (PlaveK > CrveneK && PlaveK > ZeleneK)
			return "Najvise ima plavih kuglica.";

		if (ZeleneK > PlaveK && ZeleneK > CrveneK)
			return "Najvise ima zelenih kuglica.";}
};

int main()
{
	Kutija kutija[3];
	for (int i = 0; i < 3; i++)
	{
		kutija[i].Upis();
		cout << "Ukupan broj kuglica je " << kutija[i].Ukupno() << endl;
		cout << kutija[i].Kuglice() << endl;
		cout << endl;}

	return 0;}