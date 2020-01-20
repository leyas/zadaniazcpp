#include <iostream>

using namespace std;

int main()
{
    // Zad.1. Napisz program, który wypisuje liczby od 1 do 50, a nastêpnie od 50 do 1.
    for(int i = 1; i <= 50; i++){
        cout << i << endl;
    }

    for(int i = 50; i >= 1; i--){
        cout << i << endl;
    }

    // Zad.2. Napisz program, który obliczy sumê n kolejnych liczb naturalnych (pocz¹wszy od 1)
    int n = 10, sum = 0;
    for(int i = 1; i <= n; i++){
        sum+=i;
    }
    cout<<"Suma kolejnych "<<n<<" cyfr jest rowna "<<sum<<"\n";

    // Zad.3. Napisz program, który pobierze 6 liczb wpisanych z klawiatury i:
    int liczby[6];
    for(int i = 0; i < 6; i++){
        cout << "Podaj liczbe: ";
        cin >> liczby[i];
    }

    // A) policzy sumê tych liczb
    sum = 0;
    for(int i = 0; i < 6; i++){
        sum+=liczby[i];
    }
    cout<<"Suma: "<<sum<<"\n";


    // B) œredni¹ tych liczb
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


    // Zad.4. Napisz program, który wyprowadzi znaki od A do Z.
    // a = 97
    // z = 122
    for(int i = 97; i <= 122; i++){
        char c = i;
        cout<<c;
    }


    /*
    Zad.5. Napisz program który sprawdza, która z podanych 2 liczb przez u¿ytkownika jest najmniejsza.
    Zad.6. Napisz program który obliczy pole prostok¹ta. Zastosuj w programie warunek sprawdzaj¹cy d³ugoæ boku prostok¹ta.
    Zad.7. Napisz program znajduj¹cy rozwi¹zanie równania Ax+b=c. Zrób w nim za³o¿enie, ¿e A nie mo¿e byæ równe zero.
    Zad.8. Napisz program, który sprawdza czy podana liczba jest liczba dodatnia, ujemna czy równa zero
    */

    return 0;
}
