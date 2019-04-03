#include <iostream>
#include <algorithm>
#include <vector>
int tab1[100];
int tab2[100];
int element=9999999999999;
char parametr;
using namespace std;
int licznik1=0,licznik2=0,i=0;
void czescwspolna()
{
    vector<int> v(100);
    vector<int>::iterator it;

    sort (tab1,tab1+licznik1);
    sort (tab2,tab2+licznik2);

    it=set_intersection (tab1, tab1+licznik1, tab2, tab2+licznik2, v.begin());

    v.resize(it-v.begin());

    cout << "Maja wspolne " << (v.size()) << " elementy"<<endl<<"Sa to: ";
    for (it=v.begin(); it!=v.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}

void elementytab1()
{
    vector<int> v(100);
    vector<int>::iterator it;

    sort (tab1,tab1+licznik1);
    sort (tab2,tab2+licznik2);

    it=set_difference (tab1, tab1+licznik1, tab2, tab2+licznik2, v.begin());

    v.resize(it-v.begin());

    cout << "Elementy ktore wystepuja tylko w tablicy 1(a) "<<endl;
    for (it=v.begin(); it!=v.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}

void elebezpowt()
{
    vector<int> v(100);
    vector<int>::iterator it;

    sort (tab1,tab1+licznik1);
    sort (tab2,tab2+licznik2);

    it=set_union  (tab1, tab1+licznik1, tab2, tab2+licznik2, v.begin());

    v.resize(it-v.begin());

    cout << "Elementy ktore wystepuja w obu tablicach bez powtorzen "<<endl;
    for (it=v.begin(); it!=v.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

}

int main()
{

    while (licznik1<100 && element!=-0)
    {
        cout << "Podaj element tablicy 1, pozostalo jeszcze "<<100-licznik1<<" miejsc"<<endl;
        cout<<"Mozna przerwac wpisujac '-0'"<<endl;
        cin >> element;
        if(element!=-0)
        {
            tab1[i] = element;
            licznik1++;
            i++;
        }
    }
    cout<<"#############################"<<endl<<licznik1<< " - elementow w tablicy 1" << endl;
    cout<<"###### ELEMENTY TABLICY 1 ######"<<endl;
    for(int i =0;i<licznik1;i++) cout<< tab1[i]<< " ";
    cout<<endl<<"#############################"<<endl;
    element = 10; i=0;
    //##########################################//

    while (licznik2<100 && element!=-0)
    {
        cout << "Podaj element tablicy 2, pozostalo jeszcze "<<100-licznik2<<" miejsc"<<endl;
        cout<<"Mozna przerwac wpisujac '-0'"<<endl;
        cin >> element;
        if(element!=-0)
        {
            tab2[i] = element;
            licznik2++;
            i++;
        }
    }
    cout<<"#############################"<<endl<<licznik2<< " - elementow w tablicy 1" << endl;
    i=0;
    cout<<"###### ELEMENTY TABLICY 2 ######"<<endl;
    for(int i =0;i<licznik1;i++) cout<< tab2[i]<< " ";
    cout<<endl<<"#############################"<<endl;

    while ((parametr != 'a') && (parametr != 'b') && (parametr != 'c'))
    {
        cout<< "Podaj parametr"<< endl<<"a - czêœæ wspóln¹ obu tablic"<<endl
        <<"b - elementy które wystêpuj¹ tylko w tablicy 1"<<endl
        <<"c - wszystkie elementy obu tablic bez powtórzeñ."<<endl;;
        cin >> parametr;
    }
    if(parametr == 'a'){czescwspolna();}
    if(parametr == 'b'){elementytab1();}
    if(parametr == 'c'){elebezpowt();}

    return 0;


}
