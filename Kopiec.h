#ifndef SDIZO1_KOPIEC_H
#define SDIZO1_KOPIEC_H

class Kopiec {
public:
    int *tablica;
    unsigned int rozmiar;

    Kopiec();

    ~Kopiec();

    void dodaj(int);

    void usun(int);

    bool sprawdzCzyIstnieje(int);

    void wydrukujKopiec();

    void poprawStrukture();

    //int iloscPoziomow();
};


#endif //SDIZO1_KOPIEC_H
