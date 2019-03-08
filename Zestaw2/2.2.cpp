#include <iostream>
#include<string>

using namespace std;
float x,y,d;
int sprawdz(int x, int y)
{

    if(x>0 && y>0) return 1;
    else if(x<0 && y>0) return 2;
    else if(x<0 && y<0) return 3;
    else if(x>0 && y<0) return 4;
    else return 0;

}
int main()
{
    cout<<"Podaj wspolrzedna x"<<endl;
    cin>>x;
    cout<<"Podaj wspolrzedna y"<<endl;
    cin>>y;
    d= sprawdz(x,y);
    cout<<d<<endl;
    return 0;
}


