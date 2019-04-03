#include <iostream>
#include <cstdlib>
using namespace std;
int n;

void ciag_harmoniczny()
{
    double suma;
    for(double i=1;i<=n;i++)
    {
        double x = 1/i;
        suma+= x;
    }
    cout<<"Ciag harmoniczny o dlugosci n wyonis: "<<suma<<endl;
}
int main()
{
    while(n<1)
    {
        cout<<"Podaj n >= 1: ";
        cin>>n;
    }
    ciag_harmoniczny();
}


