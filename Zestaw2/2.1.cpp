#include <iostream>
#include<string>

using namespace std;

int main()
{
    string znaki;
    cout<<"Poadj ciag znakow"<<endl;
    getline(cin,znaki);
    for(int i =0;i<znaki.length();i++)
    {
        if(znaki[i]==' ') znaki[i]='_';
    }
    cout<<znaki<<endl;
    return 0;
}


