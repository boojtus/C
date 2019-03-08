#include <iostream>
#include<string>
#include <ctime>

using namespace std;
int n;
int ilePodzielnychPrzezX(int *tab, int X)
{
    int ile=0;
    for(int i =0;i<n;i++)
    {
        if(tab[i]%X==0) ile++;
    }
    return ile;
}

int main()
{
    int x,y;
    cout<<"Podaj ilosc elementow ";
    cin>>n;
    int tab[n];
    cout<<endl;
    cout<<"Podaj liczbe ktora ma dzielic ";
    cin>>x;
    srand((unsigned)time(0));
    for(int i =0;i<n;i++) tab[i]=rand() %101 -50;//<-10,10>
    y = ilePodzielnychPrzezX(tab,x);
    for(int i=0;i<n;i++) cout<<tab[i]<<" ";
    cout<<endl;
    cout<<y<<endl;
    return 0;
}


