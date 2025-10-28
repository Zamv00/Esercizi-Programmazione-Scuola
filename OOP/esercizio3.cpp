/*Crea una classe Studente che rappresenti uno studente universitario. Aggiungi i membri necessari per
memorizzare il nome dello studente, il numero di matricola e l'anno di iscrizione. Implementa i metodi per
impostare e ottenere le informazioni dello studente.*/
#include <iostream>
#include <string>
using namespace std;

class Studente{
    private:
        string nome;
        int n_matricola;
        int anno_iscrizione;

    public:
        void assegna_dati(string n, int n_m, int a_i){
            nome = n;
            n_matricola = n_m;
            anno_iscrizione = a_i;
        }

        void stampa_dati(){
            cout << "Il nome dello studente e': " << nome << "\n";
            cout << "Il numero di matricola dello studente e': " << n_matricola << "\n";
            cout << "L'anno di iscrizione dello studente e': " << anno_iscrizione << "\n";
        }
};

int main(){
    //esempio
    Studente studente1;
    string n;
    int n_m, a_i;


    cout << "Inserisci il nome dello studente?: " << "\n";
    cin >> n;
    cout << "Inserisci il numero di matricola dello studente?: " << "\n";
    cin >> n_m;
    cout << "Inserisci l'anno d'iscrizione dello studente?: " << "\n";
    cin >> a_i;
    
    studente1.assegna_dati(n,n_m,a_i);
    studente1.stampa_dati();
    
    return 0;
}