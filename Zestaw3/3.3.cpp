#include <iostream>
#include <string>

using namespace std;

int sprawdz(string l_1, string l_2)
{
    slowo = l_1.find(l_2);

    if (slowo != string::npos)
    {
        cout << slowo ;
    }
    else
    {
        cout << -1;
    }

    return 0;
}

int main()
{
    string l_1;
    string l_2;

    cout << "Podaj lancuch 1: ";
    getline(cin, l_1);

    cout << "Podaj lancuch 2: ";
    getline(cin, l_2);

    sprawdz(l_1, l_2);

    return 0;
}
