// ZADATAK 4: Napiši program koji će tražiti podatak 
// Koliko imaš godina ? , a potom ispisati rečenicu Ti imaš 
// a godina.

#include <iostream> // Uključujemo biblioteku iostream koja omogućuje unos i ispis podataka

using namespace std; // Koristimo standardni prostor imena kako bismo pojednostavili pristup funkcijama iz biblioteke

int main() { // Definiramo glavnu funkciju programa, gdje počinje izvršavanje koda

    cout << "Koliko imas godina? "; // Postavljamo pitanje korisniku
    int godine; // Definiramo varijablu za unos godina
    cin >> godine; // Učitavamo unos korisnika i pohranjujemo ga u varijablu "godine"

    cout << "Ti imas " << godine << " godina." << endl; // Ispisujemo poruku s unesenim godinama

    return 0; // Vraćamo vrijednost 0 kako bismo označili uspješan završetak programa
}
