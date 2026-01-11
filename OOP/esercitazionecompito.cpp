/*calcolare costo di un progetto edilizio. 
Ciasun operaio viene specializzato e pagato in base alle ore di lavoro e alle regole della propria specializzazione. Usa erediterità e polimorfismo:
classi richieste:
-OperaioEdile nome cognome orelavorate. Metodi calcolacompenso, virtuale, stampa distruttore
derivate:
-muratore 30 euro/ora
-elettricista 35 euro/ora + bonus 50 se ore >8 
-Imbianchino, 25 euro/ora, compenso minimo 125 se ore < 5
nel main fare 3 istanze, calcola costo totale progetto e vedi chi guadagna di piu*/

#include <iostream>
#include <string>
using namespace std;

class OperaioEdile{
    protected:
        string nome, cognome;
        int ore_lavorate;
    public:
        OperaioEdile(){ //Costruttore
            nome = "";
            cognome = "";
            ore_lavorate = 0;
        }
        OperaioEdile(string n, string c, int o_l){
            nome = n;
            cognome = c;
            ore_lavorate = o_l;
        }
        virtual int CalcolaCompenso() const{
            return 0;
        }
        virtual void stampa() const{
            cout << "L'operaio si chiama: " << nome << " " << cognome << " Ha lavorato: " << ore_lavorate << " ore, e ha guadagnato: " << CalcolaCompenso() << " euro" << "\n";
        }
        
        virtual ~OperaioEdile(){}

};

class Muratore : public OperaioEdile{
    public:
        Muratore(string n, string c, int o_l) : OperaioEdile(n, c, o_l){}
        int CalcolaCompenso() const override{
            return 30*ore_lavorate;
        }
};

class Elettricista : public OperaioEdile{
    public:
        Elettricista(string n, string c, int o_l) : OperaioEdile(n, c, o_l){}
        int CalcolaCompenso() const override{
            if(ore_lavorate > 8){
                return 35*ore_lavorate + 50;
            }
            else{
                return 35*ore_lavorate;
            }
        }
};

class Imbianchino : public OperaioEdile{
    public:
        Imbianchino(string n, string c, int o_l) : OperaioEdile(n, c, o_l){}
        int CalcolaCompenso() const override{
            if(ore_lavorate < 5){
                return 125;
            }
            else{
                return 25*ore_lavorate;
            }
        }
};

int main(){
    Elettricista Elettricista1("Mario", "Rossi", 40);
    Muratore Muratore1("Pasquale", "Rossi", 35);
    Imbianchino Imbianchino1("Giovanni", "Rossi", 4);
    int c2 = Muratore1.CalcolaCompenso();
    int c1 = Elettricista1.CalcolaCompenso();
    int c3 = Imbianchino1.CalcolaCompenso();
    Elettricista1.stampa();
    Muratore1.stampa();
    Imbianchino1.stampa();

    //calcolo del massimo
    int max = c1;
    string namemax = "Elettricista";

    if(c2 > max){
        max = c2;
        string namemax = "Muratore";
    }

    if (c3 > max){
        max = c3;
        string namemax = "Imbianchino";
    }

    cout << "Ha guadagnato piu di tutti il " << namemax << " con " << max << " euro" << "\n";
}