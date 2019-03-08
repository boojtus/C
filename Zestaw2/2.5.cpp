#include <iostream>
#include<cmath>

using namespace std;
int a,b;

int NWD(int x,int d)
{
    int tmp;
    if(x>d)
    {
        tmp=x;
        x=d;
        d=tmp;
    }
    while(d!=0)
    {
        tmp=d;
        d=x%d;
        x=tmp;
    }
    return x;
}

int main()
{

    cout<<"Podaj a"<<endl;
    cin>>a;
    cout<<"Podaj b"<<endl;
    cin>>b;
    cout<<"NWW("<<a<<","<<b<<")= "<<a/NWD(a,b)*b<<endl;
    return 0;
}


