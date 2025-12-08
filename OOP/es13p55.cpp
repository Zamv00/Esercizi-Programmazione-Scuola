/*Creare una classe Libro con titolo, editore, prezzo
e derivare la classe Rivista aggiungendo l’attributo
sulla periodicità (settimanale, mensile, trimestrale).*/
#include <iostream>
#include <string>
using namespace std;

class Libro{
    private:
        string titolo, editore;
        float prezzo;
    
    public:
    
    Libro(){
        titolo = "";
        editore = "";
        prezzo = 0.0;
    }
    
    Libro(string t, string e, float p) {
        titolo = t;
        editore = e;
        prezzo = p;
    }

    void stampa() const {
        cout << "Titolo: " << titolo << endl;
        cout << "Editore: " << editore << endl;
        cout << "Prezzo: " << prezzo << " euro" << endl;
    }
};

class Rivista : public Libro {
    private:
        string periodicita;

    public:
        Rivista(string t, string e, float p, string per) : Libro(t, e, p) 
        {
            periodicita = per;
        }

        void stampa(){
            Libro::stampa();
            cout << "Periodicita: " << periodicita << endl;
        }
    };


int main() {
    
    Rivista r("Focus", "Mondadori", 4.99, "Mensile");
    r.stampa();

    return 0;
}

