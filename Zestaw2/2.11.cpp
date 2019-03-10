#include <iostream>
#include<string>
#include <ctime>
using namespace std;
int x;
int mini=0,maxi=100;
bool xyz=1;

void sprawdz(int n){
    if(n<x){
        cout<<"Za ma³o"<<endl;
        mini=n;
        xyz= 1;
    }
    else if(n>x){
        cout<<"Za duzo"<<endl;
        maxi=n;
        xyz= 1;
    }
    else if(n==x){
        cout<<"zgadles"<<endl;
        xyz= 0;
    }
}

int main()
{
    int y;
    srand((unsigned)time(0));
    x = rand() %101;
    cout<<x<<endl;
    while(x!=y){
    cout<<"Twoj szczesliwy strzal :), podaj liczbe z przedzialu <"<<mini<<";"<<maxi<<">"<<endl;
    cin>>y;
    sprawdz(y);
    cout<<mini<<" "<<maxi<<" "<< xyz<<endl;
    }
    cout<<"Liczba odkryta "<<y<<endl;
    return 0;
}



