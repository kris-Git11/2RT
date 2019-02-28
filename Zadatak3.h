// ConsoleApplication55.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Kutija {
private:
	int r[2], g[2], b[2];
	int RK, GK, BK;
public:
	void brojKuglicaR();
	void brojKuglicaG();
	void brojKuglicaB();
	void usporediKutije();
	void ispis();
};

void Kutija::brojKuglicaR() {
	cout << "Broj kuglica u crvenoj kutiji" << endl;
	cout << "Crvenih: "; cin >> r[0];
	cout << "Zelenih: "; cin >> g[0];
	cout << "Plavih: "; cin >> b[0];
	RK = r + g + b;
}

void Kutija::brojKuglicaG() {
	cout << "Broj kuglica u zelenoj kutiji" << endl;
	cout << "Crvenih: "; cin >> r[1];
	cout << "Zelenih: "; cin >> g[1];
	cout << "Plavih: "; cin >> b[1];
	GK = r + g + b;
}

void Kutija::brojKuglicaB() {
	cout << "Broj kuglicau  plavoj kutiji" << endl;
	cout << "Crvenih: "; cin >> r[2];
	cout << "Zelenih: "; cin >> g[2];
	cout << "Plavih: "; cin >> b[2];
	BK = r + g + b;
}

void Kutija::ispis() {
	cout << "U zelenoj kutiji ima " << GK << " kuglica i najvise je kuglica u ";
	cout << "U plavoj kutiji ima " << BK << " kuglica i najvise je kuglica u ";
	cout << "U crvneoj kutiji ima " << RK << " kuglica i najvise je kuglica u ";
}

void Kutija::usporediKutije() {
	if (r[0]>r[1] && r[0]>r[2])
		cout << "Najvise je crvenih kuglica u crvenoj kutiji.";
	else if (r[1]>r[0] && r[1]>r[2])
		cout << "Najvise je crvenih kuglica u zelenoj kutiji.";
	else
		cout << "Najvise je crvenih kuglica u plavoj kutiji";
}
int main()
{
	Kutija k1;
	k1.brojKuglicaR();
	k1.brojKuglicaG();
	k1.brojKuglicaB();
	k1.usporediKutije();
	k1.ispis();
	
}

