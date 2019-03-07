class Trokut {
private:
int a, b, c;
public:
double izracunajpovrsinu();
double izracunajopseg() { return a + b + c; }
bool dalitrokut() { if ((a + b) > c && (a + c) > b) return 1; else return 0; };
void ucitajstranice();
};

void Trokut::ucitajstranice() {
cout << "a: "; cin >> a;
cout << "b: "; cin >> b;
cout << "c: "; cin >> c;
}

double Trokut::izracunajpovrsinu() {
double s = (a + b + c) / 2.;
return sqrt(s*(s - a)*(s - b)*(s - c));
}

int main()
{
Trokut T1;

T1.ucitajstranice();
if (T1.dalitrokut()) {
cout << "Opseg je: " << T1.izracunajopseg() << endl;
cout << "Povrsina je: " << T1.izracunajpovrsinu() << endl;
}
else
cout << "Stranice nisu ispravne." << endl;
return 0;
}