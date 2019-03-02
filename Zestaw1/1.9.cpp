#include<iostream>
#include<cmath>
using namespace std;
    int x=0,znaki,xd=0;
    char znak;

void piramida(int znaki,char znak){
    if (znaki%2==0) xd = 1;
    x=ceil(znaki/2.0);

    for(int i=0; i<x; i++)
    {
        for(int j=(x-i); 0<=j; j--)
        {
                cout << " ";
        }
        for(int b=0;b<=i*2+xd;b++) cout<<znak;
        cout << endl;
    }
}
int main()
{
    cout<<"Podaj ilosc znakow w podstawie"<<endl;
    cin>> znaki;
    cout<<"Podaj znak"<<endl;
    cin>> znak;
    piramida(znaki,znak);
    return 0;
}


