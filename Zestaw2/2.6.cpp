#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int tab[10];
    int iloczyn,iloparz,ilonparz,ilem0,ilew0;
    srand((unsigned)time(0));
    for(int i=0; i<10;i++){
        tab[i]=rand() %51 -25;//<-10,10>
    }
    for(int i=0;i<10;i++)
    {
        cout<<"["<<tab[i]<<"] ";
        iloczyn *= tab[i];
        if(tab[i]%2==0) iloparz*=tab[i];
        if(tab[i]%2!=0) ilonparz*= tab[i];
        if(tab[i]<0) ilem0*=tab[i];
        if(tab[i]>0) ilew0*=tab[i];
    }
    cout<<endl;
    cout<<"Iloczyn wszystkich liczb = "<<iloczyn<<endl;
    cout<<"Iloczyn liczb parzystych = "<<iloparz<<endl;
    cout<<"Iloczyn liczb nieparzystych = "<<ilonparz<<endl;
    cout<<"Iloczyn liczb mniejszych od zera = "<<ilem0<<endl;
    cout<<"Iloczyn liczb wiekszych od zera = "<<ilew0<<endl;
}


