/*Crea una classe base Veicolo con membri protetti marca e annoProduzione e un metodo pubblico impostaMarca che imposta la marca del veicolo. Poi crea una classe derivata Automobile dalla classe Veicolo con un membro privato modello e un metodo pubblico impostaModello che imposta il modello dell'automobile*/
#include <iostream>
#include <string>
using namespace std;

class Veicolo{
    protected:
        string marca;
        int annoProduzione;
    public:
        Veicolo(){
            marca = "";
            annoProduzione = 0;
        }
        Veicolo(string m, int aP){
            marca = m;
            annoProduzione = aP;
        }
};

class Automobile : public Veicolo{
    private:
        string modello;
    public:
        Automobile(string m, int aP, string mod) : Veicolo(m, aP){
            modello = mod;
        }
        
        void stampa(){
            cout << "marca: " << marca << "\nanno di produzione: " << annoProduzione << "\nmodello: " << modello << endl;
        }
};

int main(){
    Veicolo veicolo1("fiat", 2020);

    Automobile automobile1("fiat", 2020, "500e");
    automobile1.stampa();

    return 0;
}