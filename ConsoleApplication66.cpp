// ConsoleApplication66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Kutija{
private: 
	int c, z, p;
	string ime;
public:
	void brojKugliceC();
	void brojKuglicaZ();
	void brojKuglicaP();
	void usporediKutije();
	void ispisKutije();
};
void Kutija::brojKuglicaP() {
	cout << "Broj kuglica u plavoj kutiji" << endl;
	cout << "Plavih: "; cin >> p;
	cout << "Crvena: "; cin >> c;
	cout << "Zelenih: "; cin >> z;
	PK = p + c + z;
}
void Kutija::brojKuglicaC() {
	cout << "Broj kuglica u crvenoj kutiji" << endl;
	cout << "Plavih: "; cin >> p;
	cout << "Crvena: "; cin >> c;
	cout << "Zelenih: "; cin >> z;
	CK = p + c + z;
}
void Kutija::brojKuglicaZ() {
	cout << "Broj kuglica u zelenoj kutiji" << endl;
	cout << "Plavih: "; cin >> p;
	cout << "Crvena: "; cin >> c;
	cout << "Zelenih: "; cin >> z;
	ZK = p + c + z;
}
void Kutija::ispisKutije() {

}


{
	Kutija K1, K2, K3;
    return 0;
}

