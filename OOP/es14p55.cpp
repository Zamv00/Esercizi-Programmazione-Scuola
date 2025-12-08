/*Creare la classe Veicolo e derivare le classi Automo-
bile e Autobus: aggiungere gli attributi opportuni e
il metodo che consente di visualizzare i valori degli
attributi.*/
#include <iostream>
#include <string>
using namespace std;

class Veicolo{
    private:
        string casa_automobilistica;
        int cilindrata;
    public:
    Veicolo(){
        casa_automobilistica = "";
        cilindrata = 0;
    }
    Veicolo(string ca, int c){
        casa_automobilistica = ca;
        cilindrata = c;
    }
    void stampa(){
        cout << "Casa automobilistica: " << casa_automobilistica << endl;
        cout << "Cilindrata: " << cilindrata << endl;
    }
};

class Automobile : public Veicolo{
    private:
        bool cambio_automatico;
    
    public:
    Automobile(string ca, int c, bool cambio) : Veicolo(ca, c){
        cambio_automatico = cambio;
    }

    void stampa(){
        Veicolo :: stampa();
        if (cambio_automatico == false){
            cout << "Cambio automatico: no" << endl;
        }
        else{
            cout << "Cambio automatico: si" << endl;
        }
    }
};

class Autobus : public Veicolo{
    private:
        bool scolastico;
    
    public:
    Autobus(string ca, int c, bool scol) : Veicolo(ca, c){
        scolastico = scol;
    }

    void stampa(){
        Veicolo :: stampa();
        if (scolastico == false){
            cout << "Il bus non e' scolastico" << endl;
        }
        else{
            cout << "Il bus e' scolastico" << endl;
        }
    }

};


int main(){
    Automobile Panda("Fiat", 1200, false);
    Autobus Pullman("Iveco", 12800, true);

    Panda.stampa();
    Pullman.stampa();

    return 0;
}