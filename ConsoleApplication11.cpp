// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include<iostream>

using namespace std;

struct Trokut {
	float a,b,c;
};

float Povrsina( float a, float b, float c) {
	float s;
	s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}
float Opseg(float a, float b, float c) {
	return a + b + c;
}
int main()
{
	Trokut trokut;

	cin >> trokut.a;
	cin >> trokut.b;
	cin >> trokut.c;

	if ( (trokut.a+trokut.b)> trokut.c && (trokut.a+trokut.c)>trokut.b && (trokut.b+trokut.c)>trokut.a ) {
		cout << "Povrsina: " << Povrsina(trokut.a, trokut.b, trokut.c)<<endl;
		cout << "Opseg: " << Opseg(trokut.a, trokut.b, trokut.c)<<endl;
	}
	else
		cout << "Trokut nije ispravan." << endl;
    return 0;
}

