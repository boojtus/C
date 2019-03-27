
#include <iostream>
#include<string>
#include <ctime>


using namespace std;
int x;
void sprawdz(string txt)
{
    int d=0;
    while(d<txt.length())
    {
        cout<<txt[d];
        d+=x;
    }
}

int main()
{
    string txt;
    cout<<"Podaj pierwszy ciag znakow"<<endl;
    getline(cin,txt);
    cout<<"Podaj drugi ciag znakow"<<endl;
    cin>>x;
    sprawdz(txt);
 return 0;
}

