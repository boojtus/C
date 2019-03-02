#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
double zaokraglij(double x,int n)
{
  int y = x * pow(10,n+1);
  if (y % 10 >= 5) y += 10;
  return (y / 10) * 1/pow(10,n);
}
int main()
{
    double x,y,n;
    cout << "Podaj a" << endl;
    cin >> x;
    cout << "Podaj b" << endl;
    cin >> y;
    cout << "Podaj zaokraglenie" << endl;
    cin >> n;

    cout << "a+b= " <<zaokraglij(x+y,n)<< endl;
    cout << "a-b= " <<zaokraglij(x-y,n)<< endl;
    cout << "a*b= " <<zaokraglij(x*y,n)<< endl;
    cout << "a/b= " <<zaokraglij(x/y,n)<< endl;
    return 0;
}
