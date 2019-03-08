#include <iostream>
#include<cmath>

using namespace std;
int d;

int generuj(int tab[],int d)
{
    for(int i=0;i<=d;i++) tab[i]=0;
    return tab[d];
}
int sito(int d)
{
    int tab[d];
    generuj(tab,d);
    for(int i =2;i<= sqrt(d);i++)
    {
        if(tab[i]==0)
        {
            for(int j=pow(2,i);j<=d;j+=i)
            {
                tab[j]=1;
            }
        }
    }

    for(int i=0;i<=d;i++) if(tab[i]!=0 && i==d) cout<<d<<" jest liczba pierwsza"<<endl;

}


int main()
{

    cout<<"Podaj liczbe do sprawdzenia"<<endl;
    cin>>d;
    sito(d);

    //sprawdz(d);
    return 0;
}


