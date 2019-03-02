#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x,y,n;
    cout << "Podaj a" << endl;
    cin >> x;
    cout << "Podaj b" << endl;
    cin >> y;
    cout<<"Do ilu miejsc po przecinku"<<endl;
    cin>>n;

    cout<<setprecision(n+1)<< "a+b= " <<x+y<< endl;
    cout <<setprecision(n+1)<< "a-b= " <<x-y<< endl;
    cout <<setprecision(n+1)<< "a*b= " <<x*y<< endl;
    cout <<setprecision(n+1)<< "a/b= " <<x/y<< endl;
    return 0;
}
