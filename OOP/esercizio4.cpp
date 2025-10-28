/*Crea una classe Professore che rappresenti un docente universitario.
Aggiungi gli attributi:
- nome,
- cognome,
- dipartimento,
- corsi tenuti (array di stringhe).
Aggiungi i metodi per:
- aggiungere e rimuovere corsi,
- visualizzare le informazioni del professore.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Professore{
    private:
        string nome, cognome, dipartimento;
        vector<string> corsi;
    
    public:
        void set_dati(string n, string c, string d) {
            nome = n; cognome = c; dipartimento = d;
        }

        void aggiungi_corso(string corso) {
            corsi.push_back(corso); // aggiunge il corso alla fine del vettore
        }

        void rimuovi_corso(string corso) {
                for (auto it = corsi.begin(); it != corsi.end(); ++it) //iteratore al primo elemento del vettore fino a quando non arriva alla fine del vettore
                    if (*it == corso){ 
                        corsi.erase(it); break; 
                    } // se il contenuto dell'elemento dell'iteratore è uguale alla stringa inserita nel corso viene rimosso
            }

        void stampa_informazioni() const {
            cout << nome << " " << cognome << " (" << dipartimento << ")\n Corsi:\n";
            for (auto& c : corsi) cout << "- " << c << "\n"; //auto fa capire automaticamente il tipo di elementi in corsi, li stampa a lista
        }
};

int main() {
    Professore p;
    p.set_dati("Mario", "Rossi", "Informatica");
    p.aggiungi_corso("Programmazione");
    p.aggiungi_corso("Algoritmi");
    p.aggiungi_corso("Strutture dati");
    p.rimuovi_corso("Programmazione");
    p.stampa_informazioni();
}