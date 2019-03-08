#include <iostream>
#include<string>

using namespace std;
int mini,maxi,suma,sumparz,sumnparz,sumpodz;


int main()
{

    cout<<"Podaj minimalna"<<endl;
    cin>>mini;
    cout<<"Podaj maksymalna"<<endl;
    cin>>maxi;
    for(mini;mini<=maxi;mini++)
    {
        suma+=mini;
        if(mini%2==0) sumparz+=mini;
        if(mini%2!=0) sumnparz+=mini;
        if(mini%3==0) sumpodz+=mini;
    }
    cout<<"Suma= "<<suma<<" nieparzystych ="<<sumnparz<<" parzystych= "<<sumparz<<" podzielnych przez 3= "<<sumpodz<<endl;
    return 0;
}


