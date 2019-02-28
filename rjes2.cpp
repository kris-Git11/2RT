#include <iostream>
#include <math.h>


using namespace std;

class Kutija
{
private:
    int c,p,z;
    string ime;
public:
    double zbrojKuglica(){return c + p + z ;}
    void upisKuglica();
    void najviseKuglica();
    string imeKutije(){cin>>ime;};
    void ispis(){cout<<"Kutija"<<ime<<zbrojKuglica()<<"Kuglica";}
    };
void Kutija::upisKuglica(){
    cout<<"Crvene: ";cin>>c;
    cout<<"Plave: ";cin>>p;
    cout<<"Zelene: ";cin>>z;
}
void Kutija::najviseKuglica(){
    if (c>p&&c>z)
        cout<<"Najvise ima crvenih kuglica"<<endl;
    else if (p>c&&p>z)
        cout<<"najvise ima zelenih kuglica"<<endl;
    else cout<<"najvise ima zelenih kuglica"<<endl;
}

int main(){
    Kutija K1,K2,K3;
    K1.upisKuglica();
    K2.najviseKuglica();

    return 0;
}