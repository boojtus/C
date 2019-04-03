#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string tekst;
int licznik=0;

void licz()
{
        for (int i = 0; i < tekst.length(); i++)
        {
            if (tekst[i] == tekst[i+1])
            {
                licznik++;
            }
            else
            {
                licznik++;
                cout << tekst[i] << " wystepuje " << licznik << " razy " << endl;
                licznik = 0;
            }
        }
}
void sortt()
{
    sort(tekst.begin(), tekst.end());
    licz();
}
void usunspacje()
{
    string Usuniety;

    for (int i = 0; i < tekst.size(); i ++)
    {
    if(tekst[i] != ' ') Usuniety += tekst[i];
    }

    tekst = Usuniety;

    sortt();
}

void upper()
{
    int i;
    for (i = 0; i < tekst.length(); i++)
    {
        tekst[i] = toupper(tekst[i]);
    }
    usunspacje();
}

bool sprawdz()
{
    for (int i=0;i<tekst.length();i++)
    {
        if ( isalpha(tekst[i]))
        {
            continue;
        }
        else return 1;
    }
    return 0;
}
int main()
{
    cout << "Podaj tekst: " << endl;
    getline(cin, tekst);
    while(sprawdz())
    {
        cout << "Podaj ponownie tekst: " << endl;
        getline(cin, tekst);
    }
    upper();
    return 0;
}
