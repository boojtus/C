#include <iostream>
using namespace std;

int main()
{
    int mini =100,maxi=1000,parz=0,nparz=0;
    for(int i=0; i<100;i++){
        int a=rand();
        if(a%2==0){
            parz+=a;
        }
        else if(a%2!=0){
            nparz+=a;
        }
        if(a>maxi) maxi=a;
        if(a<mini) mini=a;
    }

    cout<<"Najwi�ksza warto�� to "<<maxi<<" najmniejsza warto�� to "<<mini<<" suma wszystkich liczb parzystych to "<<parz<<" nieparzystych to "<<nparz<<endl;
    return 0;
}


