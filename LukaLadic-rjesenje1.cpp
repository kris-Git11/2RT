// ConsoleApplication54.cpp : Defines the entry point for the console application.
//

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

float opseg(float a, float b, float c) {
	float opseg;
	return opseg = a + b + c;
}

float povrsina(float a, float b, float c, float s) {
	float povrsina;
	return povrsina = sqrt(s*(s - a)*(s - b)*(s - c));
}

int main()
{
	trokut y;
	cout << "Unesi stranicu a:";
	cin >> y.a;
	cout << "Unesi stranicu b:";
	cin >> y.b;
	cout << "Unesi stranicu c:";
	cin >> y.c;
	if ((y.a + y.b) >= y.c || (y.a + y.c) >= y.b || (y.b + y.c) >= y.a) {
		float s = opseg(y.a, y.b, y.c) / 2;
		cout << "Opseg je: " << opseg(y.a, y.b, y.c) << endl;
		cout << "Povrsina je: " << povrsina(y.a, y.b, y.c, s) << endl;
	}
    return 0;
}