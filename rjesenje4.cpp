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
	trokut y;
	int s;
	cout << "Unesi stranicu a:";
	cin >> y.a;
	cout << "Unesi stranicu b:";
	cin >> y.b;
	cout << "Unesi stranicu c:";
	cin >> y.c;
	float opseg;
	float povrsina;
	s = ((y.a) + (y.b) + (y.c)) / 2;
	cout << "Poluopseg iznosi: " << s << endl;
	opseg = (y.a) + (y.b) + (y.c);
	povrsina = sqrt(s*(s - y.a)*(s - y.b)*(s - y.c));
	cout << "Opseg iznosi: " << opseg << endl;
	cout << "Povrsina iznosi: " << povrsina << endl;
	return 0;
}