#include<iostream>
using namespace std;

int main()
{
    int d,m;
    char dni[7][15]={"poniedzialek","wtorek","sroda","czwartek","piatek","sobota","niedziela"};
    char miesiace[12][15] ={"styczen","luty","marzec","kwiecien","maj","czerwiec","lipiec","sierpien","wrzesien","pazdziernik","listopad","grudzien"};

    cout<<"Podej numer meisiaca"<<endl;
    cin>>m;
    cout<<"Podej numer dnia"<<endl;
    cin>>d;
    while (m>12) m = m -12;
    while (d>7) d = d -7;
    cout<<dni[d-1]<<" "<<miesiace[m-1]<<endl;
    return 0;
}


