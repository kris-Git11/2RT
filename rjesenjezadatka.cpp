
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

struct trokut
{
        int a;
        int b;
        int c;
};


int main()
{
        trokut n;
        int s;
        cout << "unesi prvu stranicu";
        cin >> n.a;
        cout << "unesi drugu stranicu";
        cin >> n.a;
        cout << "unesi trecu stranicu";
        cin >> n.a;
        int opseg;
        int povrsina;
        s = ((n.a) + (n.b) + (n.c)) / 2;
        cout << s << endl;
        opseg = (n.a) + (n.b) + (n.c);
        povrsina = sqrt(s*(s - n.a)*(s - n.b)*(s - n.c));
    cout <<"Opseg iznosi: "<<opseg << endl;
        cout <<"Povrsina iznosi: "<<povrsina << endl;
    return 0;
}
