#include <iostream>

using namespace std;

class Pies
{
    private:
        string imie_psa;
        int wiek_psa;

    public:
        Pies(string imie_psa, int wiek_psa)
        {
            this -> imie_psa = imie_psa;
            this -> wiek_psa = wiek_psa;
        }

        void nadaj_imie(string imie)
        {
            this -> imie_psa = imie;
        }

        void wyswietl_imie()
        {
            cout << "Imie psa: " << imie_psa << endl;
        }

        void ustal_wiek(int wiek)
        {
            this -> wiek_psa = wiek;
        }
        void wyswietl_wiek()
        {
            cout << "Wiek psa= " << wiek_psa << endl;
        }
};

int main()
{
    string imie = "Koks";
    int wiek = 8;

    Pies *p = new Pies(imie, wiek);
    p -> wyswietl_imie();
    p -> wyswietl_wiek();

    cout << endl;

    p -> nadaj_imie("Kozak");
    p -> ustal_wiek(2);
    p -> wyswietl_imie();
    p -> wyswietl_wiek();

    delete p;

    return 0;
}
