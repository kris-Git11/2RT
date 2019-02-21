// 2102_raznostranicni_trokut.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;

struct Trokut {

	float a, b, c;
};

float Povrsina(float a, float b, float c)
{
	float povrsina,s;
	s = (a + b + c) / 2;
	return povrsina = sqrt(s*(s - a)*(s - b)*(s - c));	
}

float Opseg(float a, float b, float c)
{
	float opseg;
	return opseg = a + b + c;
}

int main()
{
	Trokut trokut;
	cout << "Upisi duljinu prve stranice: ";
	cin >> trokut.a;
	cout << "Upisi duljinu druge stranice: "; 
	cin >> trokut.b; 
	cout << "Upisi duljinu trece stranice: ";
	cin >> trokut.c;
	if((trokut.a+trokut.b)>trokut.c && (trokut.a+trokut.c)>trokut.b && (trokut.b+trokut.c)>trokut.a)
	{ 
		cout << "Opseg trokuta je: " << Opseg(trokut.a,trokut.b,trokut.c) << endl;
		cout << "Povrsina trokuta je: " << Povrsina(trokut.a, trokut.b, trokut.c) << endl;
	}
	else cout << "Zadane stranice ne mogu ciniti trokut" << endl;
    return 0;

}

