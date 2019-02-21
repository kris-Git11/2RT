// ConsoleApplication46.cpp : Defines the entry point for the console application.
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

float opseg(int a, int b, int c) {
	float opseg;
	return opseg = (a) + (b) + (c);
}
float povrsina(int a, int b, int c, int s) {
	float povrsina;
	return povrsina = sqrt(s*(s - a)*(s - b)*(s - c));
}


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
	
	if (y.a + y.b > y.c && y.b + y.c > y.a && y.c + y.a > y.b) {
		s = (y.a + y.b + y.c) / 2;
		cout << "Opseg je: " << opseg(y.a, y.b, y.c)<<endl;
		cout << "Povrsina iznosi: " << povrsina(y.a,y.b,y.c,s) << endl;
	}
	else
		cout << "Od tih stranica se ne moze napravit trokut. :)"<<endl;
	return 0;
}

