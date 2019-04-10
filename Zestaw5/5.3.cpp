#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string file1;
string file2;

int porownaj()
{
    ifstream f1;
    ifstream f2;

    char ch1;
    char ch2;
    const char* c_str();

    int linia = 1;

    f1.open(file1.c_str());
    f2.open(file2.c_str());

    while (!f1.eof() && !f2.eof())
    {
        f1.get(ch1);
        f2.get(ch2);

        if (ch1 != ch2)
        {
            cout << linia;
            return 0;
        }
        if (ch1 == '\n')
        {
            linia++;
        }
    }

    cout << 0;
    return 0;
}

int main()
{
    ifstream f1;
    ifstream f2;


    while (1)
    {
        cout<<"Prosze podac nazwe pierwszego pliku"<<endl;
        cin>>file1;
        f1.open(file1.c_str());
        if (!f1.is_open())
        {
            cout << "Nie udalo sie otworzyc pliku" << endl;
            continue;
        }

        else
        {
            cout<<"Plik otwarty pomyslnie!"<<endl;
            break;
        }
    }
    while (1)
    {
        cout<<"Prosze podac nazwe drugiego pliku"<<endl;
        cin>>file2;
        f2.open(file1.c_str());
        if (!f2.is_open())
        {
            cout << "Nie udalo sie otworzyc pliku" << endl;
            continue;
        }

        else
        {
            cout<<"Plik otwarty pomyslnie!"<<endl;
            break;
        }
    }
        porownaj();

    return 0;
}
