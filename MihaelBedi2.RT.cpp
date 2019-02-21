// big.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
/*Raznostranični trokut, strukture i funkcije
Napraviti program koji će računati opseg i površinu raznostraničnog trokuta.
Podaci za trokut spremljeni su u strukturu.
Površina i opseg računaju se pozivima odgovarajućih funkcija.
Funkcije vraćaju brojeve.Ispis je iz funkcije main().
Provjeriti i da li stranice čine trokut.
Površina se računa pomoću Heronove formule.*/

struct trokut
{
	float a;
	float b;
	float c;
};
float povrsina(float a, float b, float c) {
	float p;
	float s;
	s = (a + b + c) / 2;
	p = sqrt(s*(s - a)*(s - b)*(s - c));
	return p;
}
float opseg(float a, float b, float c) {
	float o;
	o = a + b + c;
	return o;
}

int main()
{

	trokut tr;
	cout << "upisi stranice trokuta" << endl;
	cin >> tr.a >> tr.b >> tr.c;
	if (tr.a + tr.b > tr.c && tr.b + tr.c > tr.a && tr.a + tr.c > tr.b) {
		cout <<"Povrsina je "<<povrsina(tr.a, tr.b, tr.c)<<endl;
		cout <<"Opseg je "<< opseg(tr.a, tr.b, tr.c) << endl;
	}else {
		cout << "nije raznostranican trokut" << endl;
	}
	


	return 0;
}

