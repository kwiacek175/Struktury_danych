#ifndef SDIZO1_ELEMENTLISTY_H
#define SDIZO1_ELEMENTLISTY_H

class ElementListy {

public:
    ElementListy *nastepny;
    ElementListy *poprzedni;
    int wartosc;

    ElementListy(int, ElementListy *, ElementListy *);
};

#endif //SDIZO1_ELEMENTLISTY_H
