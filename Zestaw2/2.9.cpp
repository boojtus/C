#include <iostream>
#include<string>
#include <ctime>


using namespace std;
int n;

double maxi(double tab[])
{
    double maxi1 = tab[0];
    for(int a =0;a<n;a++)
    {
        if(tab[a]>maxi1)
        {
                maxi1=tab[a];
        }
    }
    return maxi1;
}
double mini(double tab[])
{
    double mini1 = tab[0];
    for(int a =0;a<n;a++)
    {
        if(tab[a]<mini1)
        {
                mini1=tab[a];
        }
    }
    return mini1;
}

void skaluj(double tab[])
{
    double a = maxi(tab);
    double b = mini(tab);
    for(int i =0;i<n;i++)
    {
        tab[i]=(tab[i]-b)/(a-b);
    }
    cout<<"PO SKALOWANIU"<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<tab[i]<<" "<<endl;
    }
}

int main()
{
    cout<<"Podaj na jaki rozmiar  tablicy"<<endl;
    cin>>n;
    double tab[n];
    srand((unsigned)time(0));
    for(int a =0;a<n;a++)
    {
        tab[a]=rand() %201 -100;//<-10,10>
    }
    for(int i=0;i<n;i++)
    {
        cout<<tab[i]<<endl;
    }
    cout<<mini(tab)<<" "<<maxi(tab)<<endl;
    skaluj(tab);
    return 0;
}



