#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Kutija {
private:
	int c, z, p;
	string ime;
public:
	int uk1, uk2, uk3;
	void kutija1();
	void kutija2();
	void kutija3();
	int ukupno1();
	int ukupno2();
	int ukupno3();
};

void Kutija::kutija1() {
	cout << "Crvena 1: ";
	cin >> c;
	cout << "Zelena 1: ";
	cin >> z;
	cout << "Plava 1: ";
	cin >> p;
}

int Kutija::ukupno1() {
	uk1 = c + z + p;
	cout << "Ukupni broj kuglica u kutiji 1: " << uk1 << endl;
	return uk1;
}

void Kutija::kutija2() {
	cout << "Crvena 2: ";
	cin >> c;
	cout << "Zelena 2: ";
	cin >> z;
	cout << "Plava 2: ";
	cin >> p;
}

int Kutija::ukupno2() {
	uk2 = c + z + p;
	cout << "Ukupni broj kuglica u kutiji 2: " << uk2 << endl;
	return uk2;
}

void Kutija::kutija3() {
	cout << "Crvena 3: ";
	cin >> c;
	cout << "Zelena 3: ";
	cin >> z;
	cout << "Plava 3: ";
	cin >> p;
}

int Kutija::ukupno3() {
	uk3 = c + z + p;
	cout <<"Ukupni broj kuglica u kutiji 3: "<< uk3<<endl;
	return uk3;
}

int main()
{
	Kutija K1,K2,K3;
	K1.kutija1();
	K2.kutija2();
	K3.kutija3();
	K1.ukupno1();
	K2.ukupno2();
	K3.ukupno1();

    return 0;
}

