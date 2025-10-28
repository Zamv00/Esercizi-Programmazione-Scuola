/*Esercizio 5
Crea una classe Poligono che rappresenti un poligono regolare con n lati.
Aggiungi i metodi per:
- impostare il numero di lati e la lunghezza di ciascun lato,
- calcolare perimetro e area (usa la formula per i poligoni regolari).*/

#include <iostream>
#include <cmath>
using namespace std;

class Poligono{
    private:
        int numero_lati;
        double lunghezza_lato;
    
    public:
        void assegna_dati(int n_lati, double lung){
            numero_lati = n_lati;
            lunghezza_lato = lung;
        }
        double perimetro(){
            return numero_lati * lunghezza_lato;
        }
        double area(){
            //(n * l^2) / (4 * tan(pi / n))
            return (numero_lati * pow(lunghezza_lato, 2)) / (4 * tan(3.14 / numero_lati));
        }

        void stampa(){
            cout << "Lati: " << numero_lati << ", Lunghezza: " << lunghezza_lato << "\n";
            cout << "Perimetro: " << perimetro() << "\n";
            cout << "Area: " << area() << "\n";
        }
};

int main() {
    Poligono p;
    int n_lati;
    double lung;
    cout << "Inserisci il numero di lati: \n";
    cin >> n_lati;
    cout << "Inserisci la lunghezza dei lati: \n";
    cin >> lung;
    p.assegna_dati(n_lati, lung);
    p.stampa();
}
  
