#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Pravokutnik
{
	double a, b;
}prav1, prav2;

double opseg(double a, double b) {
	return 2 * (a + b);
}

int main()
{
	cout << "Unesite stranice prvog pravokutnika ";
	cin>> prav1.a >> prav1.b;
	cout << "Unesite stranice drugog pravokutnika ";
	cin>> prav2.a >> prav2.b;
	cout << "Opseg pravokutnika je " << opseg(prav1.a, prav1.b);
    return 0;
}
