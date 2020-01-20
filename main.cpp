#include <iostream>

using namespace std;

int main()
{
    // Zad.1. Napisz program, kt�ry wypisuje liczby od 1 do 50, a nast�pnie od 50 do 1.
    for(int i = 1; i <= 50; i++){
        cout << i << endl;
    }

    for(int i = 50; i >= 1; i--){
        cout << i << endl;
    }

    // Zad.2. Napisz program, kt�ry obliczy sum� n kolejnych liczb naturalnych (pocz�wszy od 1)
    int n = 10, sum = 0;
    for(int i = 1; i <= n; i++){
        sum+=i;
    }
    cout<<"Suma kolejnych "<<n<<" cyfr jest rowna "<<sum<<"\n";

    // Zad.3. Napisz program, kt�ry pobierze 6 liczb wpisanych z klawiatury i:
    int liczby[6];
    for(int i = 0; i < 6; i++){
        cout << "Podaj liczbe: ";
        cin >> liczby[i];
    }

    // A) policzy sum� tych liczb
    sum = 0;
    for(int i = 0; i < 6; i++){
        sum+=liczby[i];
    }
    cout<<"Suma: "<<sum<<"\n";


    // B) �redni� tych liczb
    cout<<"Srednia: "<<sum/6<<"\n";

    // C) znajdzie maksimum
    int maximum = liczby[0];
    for(int i = 1; i < 6; i++){
        if(maximum < liczby[i]){
            maximum = liczby[i];
        }
    }
    cout<<"Najwieksza liczba: "<<maximum<<"\n";

    // D) znajdzie minimum
    int minimum = liczby[0];
    for(int i = 1; i < 6; i++){
        if(minimum > liczby[i]){
            minimum = liczby[i];
        }
    }
    cout<<"Najmniejsza liczba: "<<minimum<<"\n";

    // E) odpowie ile wprowadzono liczb dodatnich
    int ileDodatnich = 0;
    for(int i = 0; i < 6; i++){
        if(liczby[i] >= 0){
            ileDodatnich++;
        }
    }
    cout<<"Wprowadzono "<<ileDodatnich<<" liczb dodatnich.\n";

    // F) odpowie ile wprowadzono liczb podzielnych przez 2
    int ilePodzielnychPrzez2 = 0;
    for(int i = 0; i < 6; i++){
        if(liczby[i] %2 == 0){
            ilePodzielnychPrzez2++;
        }
    }
    cout<<"Wprowadzono "<<ilePodzielnychPrzez2<<" liczb podzielnych przez 2.\n";


    // Zad.4. Napisz program, kt�ry wyprowadzi znaki od A do Z.
    // a = 97
    // z = 122
    for(int i = 97; i <= 122; i++){
        char c = i;
        cout<<c;
    }


    /*
    Zad.5. Napisz program kt�ry sprawdza, kt�ra z podanych 2 liczb przez u�ytkownika jest najmniejsza.
    Zad.6. Napisz program kt�ry obliczy pole prostok�ta. Zastosuj w programie warunek sprawdzaj�cy d�ugo� boku prostok�ta.
    Zad.7. Napisz program znajduj�cy rozwi�zanie r�wnania Ax+b=c. Zr�b w nim za�o�enie, �e A nie mo�e by� r�wne zero.
    Zad.8. Napisz program, kt�ry sprawdza czy podana liczba jest liczba dodatnia, ujemna czy r�wna zero
    */

    return 0;
}
