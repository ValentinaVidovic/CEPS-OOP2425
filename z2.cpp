// ZADATAK 2:  Napiši prethodni zadatak tako da svaka rečenica 
// bude u novom redu.

#include <iostream> // Uključujemo biblioteku iostream koja omogućuje korištenje funkcije za unos i ispis podataka

using namespace std; // Koristimo standardni prostor imena (namespace) kako bismo pojednostavili pristup funkcijama iz biblioteke

int main() { // Definiramo glavnu funkciju programa, koja je točka početka izvršavanja programa

    // Ispisujemo prvu rečenicu na ekran
    cout << "Ucim programirati." << endl; // Funkcija cout ispisuje tekst unutar navodnika. endl prelazi u novi redak

    // Ispisujemo drugu rečenicu na ekran
    cout << "Koristim C++." << endl; // Opet koristimo cout i endl kako bismo ispisali rečenicu i prešli u novi redak

    // Ispisujemo treću rečenicu na ekran
    cout << "Zdravo svima!" << endl; // Završni ispis rečenice s prijelazom u novi redak

    return 0; // Vraćamo vrijednost 0 kako bismo označili da je program uspješno završio
}
