#include <iostream>
#include <random>

using namespace std;

//  Creato: 01/12/22
//  Da: swampkewe
//  riempire un array con dei valori veramente atraverso un loop e random header

int main() {
	setlocale(LC_ALL, "italian"); //  per potere utilizzare gli accenti

    int aNumeri [10], //  creiamo un array di tipo int e con "10 elementi"
    sQuanti = sizeof(aNumeri)/sizeof(aNumeri[0]); //  troviamo quanti elementi ci sono nel array

    //  random copiatelo e cambiatelo al vostro piacere
    random_device rd;
    mt19937 rNumeri(rd()); //  rNumeri è il nome che abbiamo "associato" a questo meccanismo
    uniform_int_distribution<int> dist(sQuanti-sQuanti,sQuanti); //  potete cambiare il tipo tra i <>,
                                                                       // il dist(dal_numero, al_numero) in questo caso da 0 a 10

    for (int i = 0; i < sQuanti; ++i) { //  ciclo for per riempire il nostro array

        aNumeri[i] = dist(rNumeri);  //  associamo il nostro valore casuale alla posizione del elemento i nel array

    }


	return 0;
}