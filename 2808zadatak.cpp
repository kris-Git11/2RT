// 2808zadatak.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Kutija {
private: int crvena, plava, zelena; string ime;
public:
	void ucitajPodatke() {
		cout << "Upisi ime kutije: ";
		cin >> ime;
		cout << "Broj crvenih kuglica u kutiji: ";
		cin >> crvena;
		cout << "Broj plavih kuglica u kutiji: ";
		cin >> plava;
		cout << "Broj zelenih kuglica u kutiji: ";
		cin >> zelena;
		cout << endl;
	}

	int ukupanBroj()
	{
		return crvena + plava + zelena;
	}
	string maxKuglica()
	{
		if (crvena > plava && crvena > zelena)
			return "crvenih";

		if (plava > crvena && plava > zelena) 
			return "plavih";

		if (zelena > plava && zelena > crvena) 
			return "zelenih";	
	}
	};

	int main()
	{
		Kutija kutija[3];
		for (int i = 0; i < 3; i++)
		{
			kutija[i].ucitajPodatke();
			cout << "Ukupan broj kuglica: " << kutija[i].ukupanBroj() << endl;
			cout<<"Najvise ima "<<kutija[i].maxKuglica()<<endl;
			cout << endl;
		}

		return 0;
	}

