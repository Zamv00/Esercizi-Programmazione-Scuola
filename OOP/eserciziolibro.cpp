/******************************************************************************

DATA LA CLASSE LIBRO CON NOME LIBRO, EDITORE, STRINGE, NUMERO DI PAGINE (INT), CREARE
DUE OGGETTI CHE RAPPRESENTANO DUE LIBRI TROVARE IL LIBRO CON PIC9 PAGINE

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;
class Libri {

    private:
        string titolo;
        string editore;
        int n_pagine;

    public:
    //costruttore
        Libri() {
            titolo = "";
            editore = "";
            n_pagine = 0;
        }

        void set_Nome(string Nome) {
            titolo=Nome;
        }
        void set_Editore(string edi) {
            editore=edi;
        }
        void set_Pagine(int np) {
            n_pagine=np;
        }

        string get_Nome() {
            return titolo;
        }
        string get_Editore() {
            return editore;
        }
        int get_Pagine() {
            return n_pagine;
        }

};


int main()
{
	string titolo, casa_editrice;
	int n_pagine;

	Libri libro1, libro2;

	cout << "Inserire il titolo del primo libro: ";
	getline(cin, titolo);
	libro1.set_Nome(titolo);
	cout << endl;


	cout << "Inserire la casa editrice del primo libro: ";
	getline(cin, casa_editrice);
	libro1.set_Editore(casa_editrice);
	cout << endl;


	cout << "Inserire il numero di pagine del primo libro: ";
	cin >> n_pagine;
	libro1.set_Pagine(n_pagine);
	cout << endl;
    cin.ignore();


	cout << "Inserire il titolo del secondo libro: ";
	getline(cin, titolo);
	libro2.set_Nome(titolo);
    cout << endl;

	cout << "Inserire la casa editrice del secondo libro: ";
	getline(cin, casa_editrice);
	libro2.set_Editore(casa_editrice);
    cout << endl;

	cout <<"Inserire il numero di pagine del secondo libro: ";
	cin >> n_pagine;
	libro2.set_Pagine(n_pagine);
	cout<<endl;


	if(libro1.get_Pagine()>libro2.get_Pagine()) {
		cout<<"Il libro "<<libro1.get_Nome()<< " con editore "<<libro1.get_Editore()<<" ha un numero maggiore di pagine con "<<libro1.get_Pagine();
	} else {
		cout<<"Il libro "<<libro2.get_Nome()<< " con editore "<<libro2.get_Editore()<<" ha un numero maggiore di pagine con "<<libro2.get_Pagine();
	}
	
	return 0;
}