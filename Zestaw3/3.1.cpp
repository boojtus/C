
#include <iostream>
#include<string>
#include <ctime>


using namespace std;


int main()
{
    string txt;
    string x;
    int lwystapien=0;
    cout<<"Podaj ciag znakow"<<endl;
    getline(cin,txt);
    cout<<"Podaj znak ktory chcesz sprawdzic"<<endl;
    cin>>x;
    while(x.length()>1)
    {
        cout<<"Podales wiecej niz jeden znak"<<endl;
        cout<<"Podaj znak ktory chcesz sprawdzic"<<endl;
        cin>>x;
    }
    for(int i=0;i<txt.length();i++)
    {
        if(txt[i]==x[0])
        {
            lwystapien++;
        }
    }
    cout<<"Znak "<<x<<" w lancuchu znakow \'"<<txt<<"\' wystapil "<<lwystapien<<" razy"<<endl;
    return 0;
}
