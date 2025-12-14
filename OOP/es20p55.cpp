/*Data una figura e il suo colore di sfondo, derivare
una nuova figura caratterizzata anche dal colore del
bordo. Modificare il metodo che assegna il colore
di sfondo nella classe base, aggiungendo anche
l’assegnazione del colore del bordo.*/

#include <iostream>
#include <string>
using namespace std;
class Figura{
    private:
        string nome, colore_sfondo;
    public:
        Figura(){
            nome = "";
            colore_sfondo = "";
        }
        Figura(string n, string cs){
            nome = n;
            colore_sfondo = cs;
        }
        void stampa(){
            cout << "La figura e' un: " << nome << "\nIl colore del suo sfondo e': " << colore_sfondo << endl;
        }
};

class FiguraBordi : public Figura{
    private:
        string colore_bordi;
    public:
        FiguraBordi(string n, string cs, string cb) : Figura(n, cs){
            colore_bordi = cb;
        }

        void stampa(){
            Figura :: stampa();
            cout << "Il colore dei bordi e': " << colore_bordi << endl;
        }
};

int main(){
    Figura Quadrato("quadrato", "rosso");
    Quadrato.stampa();

    FiguraBordi Rettangolo("rettangolo", "blu", "nero");
    Rettangolo.stampa();

    return 0;
}
