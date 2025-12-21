/*Crea una classe derivata Cerchio dalla classe Figura con un membro privato raggio e un metodo pubblico calcolaArea che calcola e restituisce l'area del cerchio.*/
#include <iostream>
#include <string>
using namespace std;
class Figura{
    private:
        string nome;
    public:
        Figura(){
            nome = "";
        }
        Figura(string n){
            nome = n;
        }          
        void stampa(){
            cout << "La figura si chiama: " << nome << endl;
        }
};

class Cerchio : public Figura{
    private:
        float raggio;
    public:
        Cerchio(string n, float r) : Figura(n){
            raggio = r;
        }   
        float CalcoloArea(){
            return 3.14*(raggio*raggio);
        }
        void stampa(){
            cout << "L'area del cerchio e': " << CalcoloArea() << " cm2" << endl;
        }

};

int main(){
    Figura quadrato("quadrato_regolare");
    quadrato.stampa();

    Cerchio cerchio1("cerchio_regolare", 7.5);
    cerchio1.stampa();


    return 0;

}