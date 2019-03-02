#include <iostream>
using namespace std;
int a,b,c;

void suma(){
    c=a+b;
}

int main()
{
    for(int i=0;i<10;i++){
        cout<<"Podaj a"<<endl;
        cin>>a;
        cout<<"Podej b"<<endl;
        cin>>b;
        suma();
        cout<<c<<endl;
    }
    return 0;
}


