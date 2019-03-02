
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double cent,cal;
int x;


int main()
{
    cout<<"W jakiej jednosctce podajesz?"<<endl<<"1 - cal"<<endl<<"2 - centymetr"<<endl;
    cin>> x;
    if (x==1){
        cout<<"Podaj ilosc cali do zamiany na centymetry"<<endl;
        cin >> cal;
        cout<<"Podales "<<cal<<" cala/i co daje "<< cal*2.54 <<" centymetra/ow"<<endl;
    }
    if (x==2){
        cout<<"Podaj ilosc centymetrow do zamiany na cale"<<endl;
        cin >> cent;
        cout<<"Podales "<<cent<<" centymetra/owco daje "<< cent/2.54 <<" cala/i "<<endl;
    }
    return 0;
}


