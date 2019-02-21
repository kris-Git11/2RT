// ConsoleApplication36.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

struct trokut {
	float a,b,c;
};

float opseg(float a, float b, float c) {
	float opseg;
	return opseg = a + b + c;
}

float povrsina(int a, int b, int c,int opseg) {
	float povrsina;
	float opseg2 = opseg / 2.00;
	return povrsina = sqrt(opseg2*(opseg2 - a)*(opseg2 - b)*(opseg2 - c));
}

int main()
{
	trokut tr1;
	cout << "Unesi stranicu a:";
	cin >> tr1.a;
	cout << "Unesi stranicu b:";
	cin >> tr1.b;
	cout << "Unesi stranicu c:";
	cin >> tr1.c;

	if ( (tr1.a + tr1.b > tr1.c) && (tr1.a + tr1.c > tr1.b) && (tr1.b + tr1.c > tr1.a) ) {
		cout << "Trokut je ispravan." << endl;
	}
	else {
		cout << "Trokut je neispravan." << endl;
		return 0;
	}

	cout << "Opseg trukuta je:" << opseg(tr1.a, tr1.b, tr1.c) << endl;
	cout << "Povrsina trokuta je:" << povrsina(tr1.a, tr1.b, tr1.c, opseg(tr1.a, tr1.b, tr1.c)) << endl;
    return 0;
}
