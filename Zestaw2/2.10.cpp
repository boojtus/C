#include <iostream>
#include<string>
#include <ctime>
#define N 9 //ilosc wierszy
#define M 10 // ilosc kolumn
using namespace std;
int n;
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
    for(int a =0;a<M;a++)
    {
        int najm = tab[0][a];
        cout<<najm<<endl;
        for(int b=0;b<N;b++)
        {
            if(tab[a][b]<najm){najm=tab[b][a];}
        }
        cout<<"Najmniejszym elementem w kolumnie "<<a<<" jest "<<najm<<endl;
    }


}

void elminprze()
{
    for(int a =0;a<M;a++)
    {
            tab[a][a]=-9;

    }
}

int main()
{
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
    //elemincalej();
    cout<<"--------------------------------"<<endl;
    //eleminwiersza();
    cout<<"--------------------------------"<<endl;
    //eleminkolumn();
   //cout<<N<<" "<<M;
   elminprze();
    for(int a =0;a<N;a++)
    {
        for(int b=0;b<M;b++)
        {
            cout<<tab[a][b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
