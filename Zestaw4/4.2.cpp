#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int wiersze = 1,kolumny=0;
fstream plik;

void wszystkiedzialania()
{
    int i,j;
    ifstream plik("dane.txt");
    int macierz[wiersze][kolumny];
    int macierztransponowana[kolumny][wiersze];
    int macierzodwrotna[wiersze][kolumny];
    cout<<"Macierz z pliku"<<endl;
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            plik >> macierz[i][j];
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            macierztransponowana[j][i]=macierz[i][j];
        }
    }
    cout<<"Transponowana"<<endl;
    for (i = 0; i < kolumny; i++)
    {
        for (j = 0; j < wiersze; j++)
        {
            cout << macierztransponowana[i][j] << " ";
        }
        cout << endl;
    }

}
void rozmiary()
{
    int ch;
    FILE *fp = fopen("dane.txt", "r");
    while (EOF != (ch=getc(fp)))
    {
        if(isspace(ch)&&wiersze==1)
        {
            kolumny++;
        }//zliczanie kolumn. Zakladam ze uzytkownik nie popelnil bledu i wprowadzil taka sama liczbe elementow w kazdym wierszu
        if ('\n' == ch)
            wiersze++;
    } // zliczanie wierszy
}
int main() {


    plik.open( "dane.txt");
    if( plik.is_open() )
         cout << "Plik otwarty" << endl;
    else
    {
        cout << "Brak pliku" << endl;
        return 0;
    }
    rozmiary();
    cout<<"wiersze "<<wiersze<<" Kolumny "<<kolumny<<endl;
    wszystkiedzialania();

    return 0;
}
