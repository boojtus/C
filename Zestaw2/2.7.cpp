#include <iostream>
#include<string>
#include <ctime>

#define N 10

using namespace std;
int n;
int tab[N];

int maxTab(int t[N], int n)
{
    if(n<=N && n>0)
    {
        int maxi=t[0];
        for(int i;i<n;i++)
        {
            if(maxi<t[i]){
                maxi=t[i];
            }
        }
        cout<<"element maksymalny tablicy to: "<<maxi<<endl;
    }
    else cout<<"Nie da sie tak przeskalowac ziom"<<endl;

}

int main()
{
    srand((unsigned)time(0));
    for(int a =0;a<N;a++)
    {
        tab[a]=rand() %201 -100;//<-10,10>
    }
    cout<<"Podaj na jaki rozmiar przeskalowac tablice"<<endl;
    cin>>n;
    for(int i=0;i<N;i++)
    {
        cout<<tab[i]<<endl;
    }
    cout<<"Tablica po przeskalowaniu"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<tab[i]<<endl;
    }
    maxTab(tab,n);
    return 0;
}



