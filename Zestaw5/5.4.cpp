#include <iostream>
#include <cmath>
using namespace std;

double suma=0,n;
char x;

void dodaj()
{
    cout<<"Podaj liczbe"<<endl;
    cin>>n;
    suma+=n;
}
void odejmij()
{
    cout<<"Podaj liczbe"<<endl;
    cin>>n;
    suma-=n;
}
void mnozenie()
{
    cout<<"Podaj liczbe"<<endl;
    cin>>n;
    suma*=n;
}
void dzielenie()
{
    cout<<"Podaj liczbe"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"Nie dzielimy przez zero!!!"<<endl;
    }
    if(n!=0)
    {
        suma/=n;
    }
}
void dzieleniezreszta()
{
    cout<<"Podaj liczbe"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"Nie dzielimy przez zero!!!"<<endl;
    }
    if(n!=0)
    {
        suma=suma-(suma/n);
    }
}
void potegownaie()
{
    cout<<"Podaj potenge"<<endl;
    cin>>n;
    suma=pow(suma, n);
}

int main()
{
    cout<<"Podaj liczbe"<<endl;
    cin>>n;
    suma+=n;
    while(x != '=')
    {
            cout<<"Podaj dzialanie (+,-,*,/,%,^)"<<endl;
            cin>>x;

            if(x=='+') dodaj();
            if(x=='-') odejmij();
            if(x=='*') mnozenie();
            if(x=='/') dzielenie();
            if(x=='%') dzieleniezreszta();
            if(x=='^') potegownaie();
    }
    cout<<suma<<endl;

}


