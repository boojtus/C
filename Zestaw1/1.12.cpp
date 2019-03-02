#include <iostream>
using namespace std;

int maksimum(int a,int b){
    if(a>b) return a;
    else if(a<b) return b;
    else return 0;
}
int minimum(int a,int b){
    if(a>b) return b;
    else if(a<b) return a;
    else return 0;
}

int main()
{
    int x,y,maxi,mini;
    //for(int i=0;i<10;i++){
        cout<<"Podaj liczbe"<<endl;
        cin>>x;
        cout<<"Podej liczbe"<<endl;
        cin>>y;
        cout<<"Maksimum "<<maksimum(x,y)<<endl;
        cout<<"Minimum "<<minimum(x,y)<<endl;
    //}
    return 0;
}


