#include <iostream>
#include<string>
#include <ctime>


using namespace std;
int x=-1;
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
    while(x<=0){
        cout<<"Podaj skok"<<endl;
        cin>>x;
    }
    sprawdz(txt);
 return 0;
}
