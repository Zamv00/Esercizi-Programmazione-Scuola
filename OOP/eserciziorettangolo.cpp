#include <iostream>
using namespace std;

class Rettangolo {
    //attributi
    double base, altezza;
    
    //metodi
    public:
        void Assegna(double b, double h) {
            base = b;
            altezza = h;
        }

        double Area() {
            return base*altezza;
        }
        double Perimetro(){
            return (base*2) + (altezza*2);
        }
};


int main(){
    Rettangolo tovaglia;
    int b, h;
    
    cout << "Inserisci la base: ";
    cin >> b;
    
    cout << "Inserisci l'altezza: ";
    cin >> h;
    
    tovaglia.Assegna(b, h);
    cout << "Area = " << tovaglia.Area() << "\n" ;
    cout << "Perimetro = "<< tovaglia.Perimetro();
    return 0;
}