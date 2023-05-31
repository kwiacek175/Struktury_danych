#ifndef SDIZO1_ELEMENTDRZEWA_H
#define SDIZO1_ELEMENTDRZEWA_H

class ElementDrzewa {

public:
    ElementDrzewa *rodzic;
    ElementDrzewa *lewo;
    ElementDrzewa *prawo;

    char kolor;
    int wartosc;

};

#endif //SDIZO1_ELEMENTDRZEWA_H
