#include <iostream> // Uključivanje knjižnice za ulazno/izlazne operacije (unos i ispis)
using namespace std; // Korištenje standardnog imenskog prostora za olakšavanje upotrebe objekata iz standardne knjižnice

float a, b; // Definiranje dviju varijabli 'a' i 'b' tipa float (decimalni brojevi) za unos brojeva

int main() // Glavna funkcija programa
{
    //cout << "Unesite prvi broj: "; // Komentarirani redak, bio je korišten za ispis poruke prije unosa prvog broja
    //cin >> a; // Komentarirani redak, omogućava unos prvog broja i pohranu u varijablu 'a'
    //cout << "Unesite drugi broj: "; // Komentarirani redak, bio je korišten za ispis poruke prije unosa drugog broja
    //cin >> b; // Komentarirani redak, omogućava unos drugog broja i pohranu u varijablu 'b'

    cout << "Unesite dva broja: "; // Ispis poruke na ekranu za unos dva broja
    cin >> a >> b; // Unos dva broja od korisnika koji se pohranjuju u varijable 'a' i 'b'

    cout << "Zbroj unesenih brojeva je " << a + b << endl; // Ispis zbroja dvaju brojeva
    cout << "Razlika unesenih brojeva je " << a - b << endl; // Ispis razlike između dvaju brojeva
    cout << "Umnozak unesenih brojeva je " << a * b << endl; // Ispis umnoška dvaju brojeva
    cout << "Količnik unesenih brojeva je " << a / b << endl; // Ispis količnika dvaju brojeva

    return 0; // Završetak funkcije main, vraća 0 kao signal da je program uspješno završio
}
