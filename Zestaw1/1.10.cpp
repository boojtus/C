
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void wielokrotnosci(int *tab,int n){
    for(int i =0;i<=100;i=i+n){
        tab[i]=0;
    }
}

int main()
{
    int tab[100];
    int x;
    cout<<"podej liczbe ktora ma sprawdzac"<<endl;
    cin>>x;
    cout<<"###################"<<endl;
    for(int i = 0; i<= 100 ; i++) tab[i]=1;
    wielokrotnosci(tab,x);
    for(int i=0;i<=100;i++){
        if (tab[i]!=1) cout<<i<<endl;
    }
   return 0;
}


