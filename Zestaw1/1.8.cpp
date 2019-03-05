
#include<iostream>
#include<iomanip>
using namespace std;
int x;

void automat(){
    cout<<"Automat"<<endl;
    cout<<setfill('*')<<setw(x)<<'*'<<endl;

}
void napiechote(){
    cout<<"Na piechote"<<endl;
    for(int i=0;i<x;i++) cout<<'*';
    cout<<endl;
}
int main()
{
    cout<<"Podaj ilosc gwiazdek"<<endl;
    cin>> x;
    automat();
    napiechote();
    return 0;
}


