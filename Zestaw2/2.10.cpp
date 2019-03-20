#include <iostream>
#include<string>
#include <ctime>
#define N 7 //ilosc wierszy
#define M 7 // ilosc kolumn
using namespace std;
int n=6,m=6;
int tab[N][M]; //[wiersze]{KOLUMNY]

void elemincalej()
{
    int najm = tab[0][0];
    //cout<<"najm ="<< najm<<endl;
    for(int a =0;a<N;a++)
    {
        for(int b=0;b<M;b++)
        {
            if(tab[a][b]<najm){najm=tab[a][b];}
        }
        //cout<<najm<<endl;
    }
    cout<<"Najmniejszym elementem w calej tablicy jest: "<< najm<<endl;
}

void eleminwiersza()
{
    for(int a =0;a<N;a++)
    {
        int najm = tab[a][0];
        for(int b=0;b<M;b++)
        {
            if(tab[a][b]<najm){najm=tab[a][b];}
        }
        cout<<"Najmniejszym elementem w wierszu "<<a<<" jest "<<najm<<endl;
    }

}

int eleminkolumn()
{
    cout<<N<<" "<<M<<endl;
    for(int a =0;a<M;a++)
    {
        int najm = tab[0][a];
        //cout<<najm<<endl;
        for(int b=0;b<N;b++)
        {
            if(tab[b][a]<najm){najm=tab[b][a];}
        }
        cout<<"Najmniejszym elementem w kolumnie "<<a<<" jest "<<najm<<endl;
    }

}

void elminprze()
{
    if(N==M)
    {
        int najm = tab[0][0];
        for(int a =0;a<M;a++)
        {
            if(tab[a][a]<najm){najm=tab[a][a];}
        }
        cout<<"Najmniejszym elementem w glownej przekatnej jest "<<najm<<endl;
    }
    else cout<<"nico"<<endl;
}

void pomniejsz(int n,int m)
{
    #undef N
    #undef M
    #define N n
    #define M m
    cout<<"tablica zmienszona do "<<N<<"x"<<M<<endl;
}

int main()
{

    while(n<N)
    {
        cout<<"Podaj do jakiej wartosci chcesz ilosc wierszy"<<endl;
        cin>>n;
    }
    while(m>M)
    {
        cout<<"Podaj do jakiej wartosci chcesz ilosc wierszy"<<endl;
        cin>>m;
    }

    srand((unsigned)time(0));
    for(int a =0;a<N;a++)
    {
        for(int b=0;b<M;b++)
        {
            tab[a][b]=rand() %1001;//<-10,10>
        }
    }
    for(int a =0;a<N;a++)
    {
        for(int b=0;b<M;b++)
        {
            cout<<tab[a][b]<<" ";
        }
        cout<<endl;
    }
    cout<<"-------------------------------"<<endl;
    elemincalej();
    cout<<"--------------------------------"<<endl;
    eleminwiersza();
    cout<<"--------------------------------"<<endl;
    eleminkolumn();
    cout<<"--------------------------------"<<endl;
    elminprze();
    cout<<"--------------------------------"<<endl;
    pomniejsz(n,m);
    cout<<"POMNIEJSZONA"<<endl;
    for(int a =0;a<N;a++)
    {
        for(int b=0;b<M;b++)
        {
            cout<<tab[a][b]<<" ";
        }
        cout<<endl;
    }
    cout<<"-------------------------------"<<endl;
    elemincalej();
    cout<<"--------------------------------"<<endl;
    eleminwiersza();
    cout<<"--------------------------------"<<endl;
    eleminkolumn();
    cout<<"--------------------------------"<<endl;
    elminprze();
    cout<<"--------------------------------"<<endl;
    return 0;
}

