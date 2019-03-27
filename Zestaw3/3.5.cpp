#include <iostream>
#include <string>

using namespace std;


void rysuj(int n)
{
    int i;

    for (i = 0; i < (n*n)/2; i++)
    {
        for (int a = (n*2*i)+1; a < n+(n*2*i)+1; a++)
        {
            cout << " " << a;
        }
        cout << endl;
        for (int a = n*2*(i+1); a >= n+(n*2*i)+1; a--)
        {
            cout << " " << a;
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Podaj n: ";
    cin >> n;

    rysuj(n);

    return 0;
}
