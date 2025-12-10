/*Derivare, da una classe Anagrafica, la classe Cliente
aggiungendo gli attributi per il telefono e la Partita
IVA e modificando il metodo di registrazione della
classe base con l’assegnazione della Partita IVA.*/
#include <iostream>
using namespace std;

class Anagrafica{
    protected:
    string nome, cognome;

    public:
    Anagrafica(){
        nome = "";
        cognome = "";
    }

    Anagrafica(string n, string c){
        nome = n;
        cognome = c;
    }

    void Registrazione(){
        cout << "Nome: " << nome << endl;
        cout << "Cognome: " << cognome << endl;
    }
};

class Cliente : public Anagrafica{
    private:
        string telefono, partitaIVA;
    
    public:
        Cliente() : Anagrafica("", "") {
            telefono = "";
            partitaIVA = "";
        }

        Cliente(string n, string c, string tel): Anagrafica(n, c)
        {
            telefono = tel;
            partitaIVA = "";
        }

        void Registrazione(){
            cout << "Nome: " << nome << endl;
            cout << "Cognome: " << cognome << endl;
            cout << "Telefono: " << telefono << endl;

            cout << "Inserisci Partita IVA: ";
            cin >> partitaIVA;
        }



};

int main(){
    Cliente cliente1("Mario", "Rossi", "3857450912");
    cliente1.Registrazione();
    
    return 0;
}

