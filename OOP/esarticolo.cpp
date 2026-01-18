#include <iostream>
#include <string>
using namespace std;

class Articolo{
    protected:
        string nome;
        double prezzo;

    public:
        Articolo(){
            nome = "";
            prezzo = 0;
        }
        Articolo(string n, double p){
            nome = n;
            prezzo = p;
        }

        virtual double CalcolaSconto() const{
            return prezzo;
        }

        virtual void stampa() const{
            cout << "Il nome dell'articolo e: " << nome << " Il prezzo e: " << prezzo << "\n";
        }

        
        ~Articolo(){}
};

class Elettronica : public Articolo{
        private:
            string marca;
        public:
            Elettronica(string n, double p, string m) : Articolo(n, p){
                marca = m;
            }
            double CalcolaSconto() const override{
                if(prezzo > 500){
                    return prezzo * 0.70;
                }
                else{
                    return prezzo;
                }
            }

            void stampa() const override{
                cout << "Il nome dell'articolo e: " << nome << " Il prezzo e: " << CalcolaSconto() << " La marca e: " << marca << "\n"; 
            }
};


class Abbigliamento : public Articolo{
    private:
        string taglia;
    public:
        Abbigliamento(string n, double p, string t) : Articolo(n,p){
            taglia = t;
        }
        double CalcolaSconto() const override{
            if(prezzo < 50){
                return prezzo * 0.90;
            }
            else{
                return prezzo * 0.85;
            }
        }
        void stampa() const override{
            cout << "Il nome dell'articolo e: " << nome << " Il prezzo e: " << CalcolaSconto() << " La taglia e: " << taglia << "\n"; 
        }

};


class Alimentari : public Articolo{
    private:
        string scadenza;
    public:
    Alimentari (string n, double p, string s) : Articolo (n,p){
        scadenza = s;
    }
    double CalcolaSconto() const override{
        return prezzo * 0.95;
    }
    void stampa() const override{
        cout << "Il nome dell'articolo e: " << nome << " Il prezzo e: " << CalcolaSconto() << " La scadenza e: " << scadenza << "\n"; 
    }


};


int main(){
    Elettronica e1("Microonde", 150.50, "Samsung");
    Abbigliamento a1("Felpa", 29.99, "L");
    Alimentari al1("Pollo", 3.75, "30 gennaio");
    double s1 = e1.CalcolaSconto();
    double s2 = a1.CalcolaSconto();
    double s3 = al1.CalcolaSconto();
    e1.stampa();
    a1.stampa();
    al1.stampa();

    double max = s1;
    string namemax = "Elettronica";

    if(s2 < max){
        max = s2;
        namemax = "Abbigliamento";
    }
    if(s3 < max){
        max = s3;
        namemax = "Alimentari";
    }
    cout << "Lo sconto maggiore e: " << max << " di categoria: " << namemax << "\n";

    return 0;
}