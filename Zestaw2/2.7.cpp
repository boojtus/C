#include <iostream>
#include<string>

#define N 10

using namespace std;
int n;

int maxTab(int t[N], int n)
{
    if(n<=N && n>0)
    {
        for(int i=n;n<=N;n++) delete[] t[i];
        int sizel = sizeof(t)/sizeof(t[0]);
        for(int i=0;i<sizel;i++) cout<<t[i]<<endl;
        cout<<"ELO"<<endl;
    }
    else return 0;
}

int main()
{
    int tab[N]={2,3,4,23,-32,91,23,-239,-1,10};
    cout<<"Podaj na jaki rozmiar przeskalowac tablice"<<endl;
    cin>>n;
    maxTab(tab,n);
    return 0;
}



