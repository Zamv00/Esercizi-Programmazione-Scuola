/*Derivare dalla classe Conto del Problema 5 una
nuova classe ContoCorrente: aggiungere i metodi
Preleva, che decrementa il saldo della cifra fornita
come parametro, Versa, che incrementa il saldo, e
Mostra, che visualizza il saldo attuale.*/

#include <iostream>
#include <string>
using namespace std;

class Conto{
    private:
        int saldo;

    public:
    Conto(){
        saldo = 0;
    }

    Conto(int s){
        saldo = s;
    }

    int getSaldo() const {
        return saldo;
    }

    void setSaldo(int s) {
        saldo = s;
    }
};

class ContoCorrente : public Conto {
public:
    ContoCorrente(int saldo_iniziale) : Conto(saldo_iniziale) {}

    void Preleva(int cifra) {
        setSaldo(getSaldo() - cifra);
    }

    void Versa(int cifra) {
        setSaldo(getSaldo() + cifra);
    }

    void Mostra() {
        cout << "Il saldo attuale e': " << getSaldo() << endl;
    }
};


int main() {
    ContoCorrente c(1000);
    c.Mostra();
    c.Versa(500);
    c.Mostra();
    c.Preleva(300);
    c.Mostra();

    return 0;
}