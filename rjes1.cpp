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
        trokut x;
        int s;
        cout << "Unesi stranicu a:";
        cin >> x.a;
        cout << "Unesi stranicu b:";
        cin >> x.b;
        cout << "Unesi stranicu c:";
        cin >> x.c;
        float opseg;
        float povrsina;
        s = ((x.a) + (x.b) + (x.c)) / 2;
        cout << "Poluopseg iznosi: " << s << endl;
        opseg = (x.a) + (x.b) + (x.c);
        povrsina = sqrt(s*(s - x.a)*(s - x.b)*(s - x.c));
        cout <<"Opseg iznosi: "<<opseg << endl;
        cout <<"Povrsina iznosi: "<<povrsina << endl;
    return 0;
}
