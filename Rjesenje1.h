#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

struct trokut
{
	float a, b, c;
};


int main()
{
	trokut podaci;
	int s;
	float opseg;
	float povrsina;

	cout << "Unesi stranicu a:";
	cin >> podaci.a;
	cout << "Unesi stranicu b:";
	cin >> podaci.b;
	cout << "Unesi stranicu c:";
	cin >> podaci.c;

	s = ((podaci.a) + (podaci.b) + (podaci.c)) / 2;
	cout << "Poluopseg je: " << s << endl;

	opseg = (podaci.a) + (podaci.b) + (podaci.c);
	povrsina = sqrt(s*(s - podaci.a)*(s - podaci.b)*(s - podaci.c));

	cout << "Opseg je: " << opseg << endl;
	cout << "Povrsina je: " << povrsina << endl;
	return 0;
}