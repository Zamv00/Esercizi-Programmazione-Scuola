#include <iostream>
#include <string>
using namespace std;

class Solido{
    protected:
        string nome;
    public:
        Solido(){
            nome = "";
        }
        Solido(string n){
            nome = n;
        }
        virtual float CalcolaAreaSuperficie() const{
            return 0;
        }
        virtual void Stampa() const{
            cout << "Il solido si chiama: " << nome << " L'area e: " << CalcolaAreaSuperficie() << " cm2\n"; 
        }
};



class Cubo : public Solido{
    private:
        float lato;
    
    public:
        Cubo(string n, float l) : Solido(n){
            lato = l;
        }

        float CalcolaAreaSuperficie() const override{
            return 6*(lato*lato);
        }

        void Stampa() const override{
            cout << "Il solido si chiama: " << nome << ", Il lato misura: " << lato << " cm " <<", L'area : " << CalcolaAreaSuperficie() << " cm2\n"; 
        }

};

class Sfera : public Solido{
    private:
        float raggio;
    
    public:
        Sfera(string n, float r) : Solido(n){
            raggio = r;
        }

        float CalcolaAreaSuperficie() const override{
            return 4*3.14*(raggio*raggio);
        }

        void Stampa() const override{
            cout << "Il solido si chiama: " << nome << ", Il raggio misura: " << raggio << " cm " <<", L'area : " << CalcolaAreaSuperficie() << " cm2\n"; 
        }

};

class Cilindro : public Solido{
    private:
        float raggioBase, altezza;
    
    public:
        Cilindro(string n, float rB, float h) : Solido(n){
            raggioBase = rB;
            altezza = h;
        }

        float CalcolaAreaSuperficie() const override{
            return 2*3.14*raggioBase*(raggioBase + altezza);
        }

        void Stampa() const override{
            cout << "Il solido si chiama: " << nome << ", Il raggio misura: " << raggioBase << " cm, L'altezza:  "<< altezza << " cm, L'area : "<< CalcolaAreaSuperficie() << " cm2\n"; 
        }

    
};



int main(){
    Cubo cubo1("Cubo", 3);
    Sfera sfera1("Sfera", 2);
    Cilindro cilindro1("Cilindro", 5, 4);
    float a1 = cubo1.CalcolaAreaSuperficie();
    float a2 = sfera1.CalcolaAreaSuperficie();
    float a3 = cilindro1.CalcolaAreaSuperficie();

    cubo1.Stampa();
    sfera1.Stampa();
    cilindro1.Stampa();

    float max = a1;
    string nomemax = "Cubo";

    if(a2 > max){
        max = a2;
        nomemax = "Sfera";
    }

    if(a3 > max){
        max = a3;
        nomemax = "Cilindro";
    }

    cout << "L'area maggiore e' quella del: " << nomemax << " che misura: " << max << " cm2\n";

    

    return 0;
}