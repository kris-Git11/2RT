#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

float Povrsina (float s,float a,float b,float c){
    float pov = sqrt(s*(s-a)*(s-b)*(s-c));
    return pov;
}
float szapov (float a, float b, float c){
float s = ((a+b+c)/2);
return s;}
float Opseg (float a, float b, float c){
float ops = a+b+c;
return ops;}
struct Podaci{
float a,b,c;};

int main()
{
Podaci trokut;
float a,b,c,s,pov,ops;
cout<<"Unesis stranicu a: "; cin>>a;
cout<<"Unesis stranicu b: "; cin>>b;
cout<<"Unesis stranicu c: "; cin>>c;
s = szapov (a,b,c);
pov = Povrsina (s,a,b,c);
ops = Opseg (a,b,c);
cout<<"Povrsina: "<<pov<<endl;
cout<<"Opseg: "<<ops;


}
