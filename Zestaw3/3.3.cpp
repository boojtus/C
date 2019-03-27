#include <iostream>
#include <string>

using namespace std;

void szukajFrazy( string  tekst, string szukanaFraza )
{
    size_t znalezionaPozycja = tekst.find( szukanaFraza );
    if( znalezionaPozycja == string::npos )
    {
        cout << -1 <<endl;
    }
    else{cout<<znalezionaPozycja<<endl;}


}

int main()
{
    string tekst,szukana;

    cout << "Podaj lancuch 1: ";
    getline(cin, tekst);

    cout << "Podaj szukany ";
    getline(cin, szukana);

    szukajFrazy(tekst, szukana);

    return 0;
}
