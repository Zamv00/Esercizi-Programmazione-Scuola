/*Scrivere una classe C (cronometro) che svolga operazioni di cronometraggio del tempo. Deve essere dotata
di metodi start(), stop(), per far partire e fermare il cronometro. Deve poi, esserci un metodo print() per
stampare l'intervallo di tempo misurato. Usare la funzione time(0)*/
#include <iostream>
#include <ctime>
using namespace std;


class C{
    private:
        time_t start_time{0};
        time_t stop_time{0};
        bool running{false};
    public:
        void start(){
            start_time = time(0); //memorizza tempo di inizio
            running = true;
        }

        void stop(){
            stop_time = time(0); //memorizza tempo di fine
            running = false;
        }

        void print(){
            time_t end = running ? std::time(0) : stop_time; // se running == true, end = tempo attuale, altrimenti stop_time
            double elapsed = difftime(end, start_time); // secondi trascorsi tra inizio e fine
            int sec = static_cast<int>(elapsed) % 60;
            int min = static_cast<int>(elapsed) / 60 % 60;
            int hrs = static_cast<int>(elapsed) / 3600;
            cout << "Intervallo: " << elapsed << " secondi";
            cout << " (" << hrs << "h " << min << "m " << sec << "s)\n";
    }
};


int main(){
    C cronometro;
    cout << "Avvio cronometro. Premi invio per fermare...\n";
    cronometro.start();
    cin.get(); // attende invio
    cronometro.stop();
    cronometro.print();
    return 0;
}