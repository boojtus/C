#include <iostream>
#include<string>
#include <ctime>
using namespace std;
int x,z;
int mini=0,maxi=100;
bool xyz=1;

void sprawdz(int n){
    if(n<x){
        cout<<"Podales za malo"<<endl;
        mini=n+1;
        xyz= 1;
    }
    else if(n>x){
        cout<<"Podales za duzo"<<endl;
        maxi=n-1;
        xyz= 1;
    }
    else if(n==x){
        cout<<"Zgadles"<<endl;
        xyz= 0;
    }
}
void sprawdzkomputer(int n){
    if(n<x){
        cout<<"Komputer dal za malo"<<endl;
        mini=n+1;
        xyz= 1;
    }
    else if(n>x){
        cout<<"Komputer dal za duzo"<<endl;
        maxi=n-1;
        xyz= 1;
    }
    else if(n==x){
        cout<<"Zgadl komputer"<<endl;
        xyz= 0;
    }
}
int probakomp(){
    z = rand() %(maxi - mini+1) + mini;
    cout<<"Komputer wylosowal: "<<z<<endl;
    return z;
}

int main()
{
    int y;
    srand((unsigned)time(0));
    x = rand() %101;
    cout<<x<<endl;
    while(x!=y&&z!=y&&xyz!=0){
        cout<<"Twoj szczesliwy strzal :)"<<endl;

        while(y < mini || y>maxi){
            cout<<"Podaj liczbe z <"<<mini<<","<<maxi<<">"<<endl;
            cin>>y;
        }

        sprawdz(y);
        //cout<<mini<<" "<<maxi<<" "<<endl;
        if(xyz==0){break;}
        probakomp();
        sprawdzkomputer(z);
        //cout<<mini<<" "<<maxi<<" "<<endl;
        y=-5;
    }
    cout<<"Liczba odkryta "<<x<<endl;
    return 0;
}



