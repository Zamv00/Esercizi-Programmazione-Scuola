/*Crea una classe "Cerchio" che rappresenti un cerchio nel piano cartesiano. Aggiungi i metodi per impostare il raggio del cerchio, calcolarne l'area e la circonferenza.*/

#include <iostream>
using namespace std;

class Cerchio{
    private:
        int raggio;
    public:
        void assegna_raggio(int r){
            raggio = r;
        }
        double circonferenza(){
            return (2*3.14*raggio);
        }
        double area(){
            return (3.14*raggio*raggio);
        }
};

int main(){
    
    Cerchio cerchio1;
    int r;

    cout << "Inserisci la dimensione del raggio: ";
    cin >> r;

    cerchio1.assegna_raggio(r);
    cout << "Area: " << cerchio1.area() << "\n";
    cout << "Cironferenza: " << cerchio1.circonferenza();
    
    
    return 0;
}