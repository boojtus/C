
#include <iostream>
#include<string>
#include <ctime>


using namespace std;
int x,limit=49;
void rysuj()
{
    int k=0;
    int linia=0;
    int XD=limit/x;
    while(k<limit||linia<XD)
    {
        for(int a=linia*x+1;a<=(linia+1)*x;a++)
        {

            k++;
            cout<<a<<" ";
        }
        int d=k;
        linia++;
        cout<<endl;
        for(int b=(1+linia)*x;b>linia*x;b--)
        {
            cout<<b<<" ";
            k++;
        }
        linia++;
        cout<<endl;
    }
}

int main()
{
    cout<<"Podaj ile liczb w lini"<<endl;
    cin>>x;
    rysuj();
 return 0;
}

