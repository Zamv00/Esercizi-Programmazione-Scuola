/*Durante un referendum una società specializzata
nei sondaggi raccoglie i dati all’uscita di un seggio
elettorale. In qualunque momento la società deve
essere in grado di fornire una statistica delle opi-
nioni raccolte: numero degli intervistati, numero
dei sì, numero dei no e relative percentuali. Creare
la classe per il sondaggio al referendum e derivare
poi una nuova classe per poter effettuare operazioni
analoghe nel caso in cui il sondaggio riguardi le
elezioni con scelta tra 4 liste.*/

#include <iostream>
#include <string>
using namespace std;

class DatiReferendum{
    private:
        int numero_intervistati, numero_si, numero_no, siperc, noperc;

    public:
        DatiReferendum(){
            numero_intervistati = 0;
            numero_si = 0;
            numero_no = 0;
        }
        DatiReferendum(int ni, int ns, int nn){
            numero_intervistati = ni;
            numero_si = ns;
            numero_no = nn;
        }
        void CalcoloStatistiche(){
            siperc = (numero_si * 100) / numero_intervistati;
            noperc = (numero_no * 100) / numero_intervistati;
        }

        void stampa(){
            cout << "Il numero dei votanti e': " << numero_intervistati << "\nLa percentuale di si e' " << siperc << "% con " << numero_si << " voti\n" << "La percentuale di no e': " << noperc << "% con " << numero_no << " voti" << endl;
        }
};


class DatiElezioni : public DatiReferendum{
    private:
        int voti1, voti2, voti3, voti4;
        int p1,p2,p3,p4;
    public:
        DatiElezioni(int v1, int v2,int v3,int v4){
            voti1 = v1;
            voti2 = v2;
            voti3 = v3;
            voti4 = v4;
        }

        void CalcoloStatistiche(){
            int tot = voti1 + voti2 + voti3 + voti4;

            p1 = (voti1 * 100) / tot;
            p2 = (voti2 * 100) / tot;
            p3 = (voti3 * 100) / tot;
            p4 = (voti4 * 100) / tot;
        }

        void stampa() {
            cout << "\nElezioni\n";
            cout << "Lista 1: " << p1 << "% (" << voti1 << ")\n";
            cout << "Lista 2: " << p2 << "% (" << voti2 << ")\n";
            cout << "Lista 3: " << p3 << "% (" << voti3 << ")\n";
            cout << "Lista 4: " << p4 << "% (" << voti4 << ")\n";
        }


};



int main(){
    DatiReferendum referendum1(150, 95, 55);
    referendum1.CalcoloStatistiche();
    referendum1.stampa();

    DatiElezioni elezioni1(200, 150, 450, 25);
    elezioni1.CalcoloStatistiche();
    elezioni1.stampa();
    return 0;
}