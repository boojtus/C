#include <iostream>
#include <cmath>

using namespace std;
int n;
double zaokraglij(double x)
{
  int y = x * pow(10,n+1);
  if (y % 10 >= 5) y += 10;
  return (y / 10) * 1/pow(10,n);
}
int main()
{
    double x,y;
    cout << "Podaj a" << endl;
    cin >> x;
    cout << "Podaj b" << endl;
    cin >> y;
    cout<<"Do ilu miejsc po przecinku"<<endl;
    cin>>n;

    cout << "a+b= " <<zaokraglij(x+y)<< endl;
    cout << "a-b= " <<zaokraglij(x-y)<< endl;
    cout << "a*b= " <<zaokraglij(x*y)<< endl;
    cout << "a/b= " <<zaokraglij(x/y)<< endl;
    return 0;
}
