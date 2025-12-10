/*Una classe Solido consente di rappresentare una
figura solida e di calcolarne il volume; derivare da
essa la classe Bilancia che consente di modificare il
metodo per il calcolo, in modo da ottenere anche
il peso del solido conoscendone il peso specifico
(peso = volume x peso specifico).*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solido{ //cubo
    protected:
        int lunghezza_lato;
    public:
        Solido(){
            lunghezza_lato = 0;
        }
        Solido(int ll){
            lunghezza_lato = ll;
        }
        void Stampa(){
            cout << "Il volume del solido e': " << pow(lunghezza_lato, 3) << "cm3";
        }
    
};

class Bilancia : public Solido{
    private:
        float peso_specifico;
    public:
        Bilancia() : Solido(0){
            lunghezza_lato = 0;
            peso_specifico = 0;
        }

        Bilancia(int ll, float pp) : Solido(ll){
            lunghezza_lato = ll;
            peso_specifico = pp;
        }

        void Stampa(){
            cout << "Il peso del cubo e': " << (pow(lunghezza_lato, 3) * peso_specifico) << "N";
        }
};

int main(){
    Bilancia cubo1(4, 1.05);
    cubo1.Stampa();


    return 0;
}