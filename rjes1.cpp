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
	trokut tr;
	int s;
	cout << "Unesi stranicu a:";
	cin >> tr.a;
	cout << "Unesi stranicu b:";
	cin >> tr.b;
	cout << "Unesi stranicu c:";
	cin >> tr.c;
	float ops;
	float pov;
	s = ((tr.a) + (tr.b) + (tr.c)) / 2;
	ops = (tr.a) + (tr.b) + (tr.c);
	pov = sqrt(s*(s - tr.a)*(s - tr.b)*(s - tr.c));
	cout << "Opseg iznosi: " << ops << endl;
	cout << "Povrsina iznosi: " << pov << endl;
	return 0;
}
