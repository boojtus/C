#include <iostream>
#include <iomanip>

using namespace std;
double zaokraglij(double x)
{
  int y = x * 1000;
  if (y % 10 >= 5) y += 10;
  return (y / 10) * 0.01;
}
int main()
{
    double x,y;
    cout << "Podaj a" << endl;
    cin >> x;
    cout << "Podaj b" << endl;
    cin >> y;

    cout << "a+b= " <<zaokraglij(x+y)<< endl;
    cout << "a-b= " <<zaokraglij(x-y)<< endl;
    cout << "a*b= " <<zaokraglij(x*y)<< endl;
    cout << "a/b= " <<zaokraglij(x/y)<< endl;
    return 0;
}
