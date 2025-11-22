/*Creare una classe Squadra che rappresenta una squadra di calcio e ha come attributi il numero di partite vinte, il numero di partite perse e il numero di partite pareggiate e i gol fatti e subiti.
Ha opportuni metodi per impostare i parametri e farli visualizzare, inoltre ha:

● il metodo punti() che restituisce quanti punti ha in campionato (ogni partita vinta vale 3 punti, ogni partita pareggiata 1, quelle perse 0)
● un metodo inizioanno() che resetta il numero di partite vinte, pareggiate e perse portandole a zero.
● il metodo goalFatto()
● il motodo goalSubito()

Creare un main per provare la classe creando due istanze Juventus e Milan e si provino ad utilizzare facendo inserire all’utente per entrambe le squadre il numero di partite vinte, perse e pareggiate e quanti gol fatti e subiti e poi confrontando quale delle due ha più punti in campionato e quale delle due ha subito più goal e quale ne ha fatti di più.
NB: si sviluppi usando il paradigma della programmazione ad oggetti ed in particolare rispettando l’information hiding: parametri privati, metodi pubblici.*/
#include <iostream>
using namespace std;

class Squadra{
    private:
        int partite_vinte, partite_perse, partite_pareggiate;

    public:
        int gol_fatti, gol_subiti;
        Squadra(){
            partite_vinte = 0;
            partite_perse = 0;
            partite_pareggiate = 0;
            gol_fatti = 0;
            gol_subiti = 0;
        }

        void imposta_dati(int pv, int ppe, int ppa, int gf, int gs){
            partite_vinte = pv;
            partite_perse = ppe;
            partite_pareggiate = ppa;
            gol_fatti = gf;
            gol_subiti = gs;
        }

        void inizioAnno(){
            partite_vinte = 0;
            partite_perse = 0;
            partite_pareggiate = 0;
            gol_fatti = 0;
            gol_subiti = 0;
        }

        void goalFatto(){
            gol_fatti += 1;
        }

        void goalSubito(){
            gol_subiti += 1;
        }

        int punti(){
            return 3 * partite_vinte + partite_pareggiate;
        }
};


int main(){
    int pv,ppe,ppa,gf,gs;
    Squadra Juventus;
    Squadra Milan;

    cout << "Inserisci partite vinte per la Juventus: \n";
    cin >> pv;
    cout << "Inserisci partite perse per la Juventus: \n";
    cin >> ppe;
    cout << "Inserisci partite pareggiate per la Juventus: \n";
    cin >> ppa;
    cout << "Inserisci gol fatti per la Juventus: \n";
    cin >> gf;
    cout << "Inserisci gol subiti per la Juventus: \n";
    cin >> gs;
    Juventus.imposta_dati(pv,ppe,ppa,gf,gs);

    cout << "Inserisci partite vinte per il Milan: \n";
    cin >> pv;
    cout << "Inserisci partite perse per il Milan: \n";
    cin >> ppe;
    cout << "Inserisci partite pareggiate per il Milan: \n";
    cin >> ppa;
    cout << "Inserisci gol fatti per il Milan: \n";
    cin >> gf;
    cout << "Inserisci gol subiti per il Milan: \n";
    cin >> gs;
    Milan.imposta_dati(pv,ppe,ppa,gf,gs);

    int puntiJ = Juventus.punti();
    int puntiM = Milan.punti();

    cout << "Punti Juventus: " << puntiJ << "\n";
    cout << "Punti Milan: " << puntiM << "\n";

    if (puntiJ > puntiM) cout << "La Juventus ha piu' punti.\n";
    else if (puntiM > puntiJ) cout << "Il Milan ha piu' punti.\n";
    else cout << "Hanno gli stessi punti.\n";

    if (Juventus.gol_fatti > Milan.gol_fatti) cout << "La Juventus ha fatto piu' gol.\n";
    else if (Milan.gol_fatti > Juventus.gol_fatti) cout << "Il Milan ha fatto piu' gol.\n";
    else cout << "Hanno segnato lo stesso numero di gol.\n";

    if (Juventus.gol_subiti > Milan.gol_subiti) cout << "La Juventus ha subito piu' gol.\n";
    else if (Milan.gol_subiti > Juventus.gol_subiti) cout << "Il Milan ha subito piu' gol.\n";
    else cout << "Hanno subito lo stesso numero di gol.\n";


    return 0;
}