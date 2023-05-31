#ifndef SDIZO1_LISTA_H
#define SDIZO1_LISTA_H

#include <iostream>
#include "ElementListy.h"

using namespace std;

class Lista {

public:

    int rozmiar;

    Lista();

    ~Lista();

    ElementListy *pierwszyElement;
    ElementListy *ostatniElement;
    ElementListy *aktualnyElement;

    void dodajNaPoczatek(int wartosc);

    void dodajGdziekolwiek(int wartosc, int pozycja);

    void dodajNaKoniec(int wartosc);

    void wydrukujListe();

    void usunPierwszy();

    void usunOstatni();

    void usunKtorys(int);

    bool sprawdzCzyIstnieje(int wartosc);
};

#endif //SDIZO1_LISTA_H
