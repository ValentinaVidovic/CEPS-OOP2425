#include <iostream> // Uključivanje knjižnice za ulazno/izlazne operacije (unos i ispis)
using namespace std; // Korištenje standardnog imenskog prostora za olakšavanje upotrebe objekata iz standardne knjižnice

int ocjena; // Definiranje varijable 'ocjena' koja će pohraniti unesenu ocjenu

int main() // Glavna funkcija programa
{
    cout << "Unesite ocjenu "; // Ispis poruke korisniku da unese svoju ocjenu
    cin >> ocjena; // Unos ocjene koju korisnik unosi, a vrijednost se pohranjuje u varijablu 'ocjena'

    switch (ocjena) { // Započinje switch-case strukturu koja provodi uvjetno grananje na temelju unesene ocjene
    case 1: // Ako je unesena ocjena 1
        cout << "Nazalost niste polozili ispit. Pokusajte ponovno!"; // Ispisuje poruku za ocjenu 1
        break; // Prekid switch-case blokova, završava daljnje provjere
    case 2: // Ako je unesena ocjena 2
        cout << "Cestitam polozili ste ocjenom 2."; // Ispisuje poruku za ocjenu 2
        break; // Prekid switch-case blokova
    case 3: // Ako je unesena ocjena 3
        cout << "Cestitam polozili ste ocjenom 3."; // Ispisuje poruku za ocjenu 3
        break; // Prekid switch-case blokova
    case 4: // Ako je unesena ocjena 4
        cout << "Cestitam polozili ste ocjenom 4."; // Ispisuje poruku za ocjenu 4
        break; // Prekid switch-case blokova
    case 5: // Ako je unesena ocjena 5
        cout << "Cestitam polozili ste ocjenom 5."; // Ispisuje poruku za ocjenu 5
        break; // Prekid switch-case blokova
    default: // Ako unesena ocjena nije ni 1, 2, 3, 4, niti 5 (neispravan unos)
        cout << "Pogresan unos !"; // Ispisuje poruku u slučaju neispravnog unosa
        break; // Prekid switch-case blokova
    }
    return 0; // Završetak glavne funkcije i program završava s kodom 0
}
