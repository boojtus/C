
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,h;
    int n;
    int figura;
    cout << "Podaj figure"<<endl<<"1 - prostokat"<<endl << "2 - trojkat" <<endl <<"3 - kolo"<<endl <<"4 - trapez"<<endl;
    cin >> figura;
    if (figura == 1){
        cout << "Podaj d³uzszy bok prostokatu" << endl;
        cin >> a;
        cout << "Podaj krutszy XD  boku prostokata" << endl;
        cin >> b;
        cout << "Pole = " << a*b << endl << "Obw = " << 2*a + 2*b <<endl;
    }
    if (figura == 2){
        cout << "Podaj dlugosc 1 boku trojkata" << endl;
        cin >> a;
        cout << "Podaj dlugosc 2 boku trojkata" << endl;
        cin >> b;
        cout << "Podaj dlugosc 2 boku trojkata" << endl;
        cin >> c;
        int p = (a + b + c)/2;
        cout << "Pole = " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl << "Obw = " << p*2 <<endl;
    }if (figura == 3){
        cout << "Podaj promien" << endl;
        cin >> a;
        cout << "Pole = " << M_PI * a * a << endl << "Obw = " << 2*M_PI*a <<endl;
    }if (figura == 4){
        cout << "Podaj dlugosc 1 podstawy trapezu" << endl;
        cin >> a;
        cout << "Podaj dlugosc 2 podstawy trapezu" << endl;
        cin >> b;
        cout << "Podaj dlugosc 1 ramienia trapezu" << endl;
        cin >> c;
        cout << "Podaj dlugosc 2 ramienia trapezu" << endl;
        cin >> d;
        cout << "Podaj wysokosc trapezu" << endl;
        cin >> h;
        cout << "Pole = " << ((a+b)*h)/2 << endl << "Obw = " << a+b+c+d <<endl;
    }
    return 0;
}


