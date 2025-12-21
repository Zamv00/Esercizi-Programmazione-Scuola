/*Crea una classe base Animale con un membro protetto nome e un metodo pubblico impostaNome che imposta il nome dell'animale. Poi crea una classe derivata Cane dalla classe Animale con un membro privato razza e un metodo pubblico impostaRazza che imposta la razza del cane.*/
#include <iostream>
#include <string>
using namespace std;

class Animale{
    protected:
        string nome;
    public:
        Animale(){
            nome = "";
        }
        Animale(string n){
            nome = n;
        }
};

class Cane : public Animale{
    private:
        string razza;
    public:
        Cane(string n, string r) : Animale(n){
            razza = r;
        }
        
        void stampa(){
            cout << "Il cane si chiama: " << nome << "\nLa razza e': " << razza << endl;
        }
};

int main(){
    Animale animale1("lucky");
    Cane cane1("lucky", "cocker");
    cane1.stampa();

    return 0;
}