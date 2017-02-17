#ifndef AUTOMATE_H
#define AUTOMATE_H

#include "Symbole.h"
#include "Etat.h"
#include <deque>

typedef deque<Symbole*> PileSymb;
typedef deque<Etat*> PileEtat;

class Automate
{
protected:
	PileSymb symbolstack;
	PileEtat statestack;

public:
    Automate();
    void prochSymbole();
    void lireSymbole();
    void decalage(Symbole * s, Etat * e);
    void reduction(int n, Symbole * s);
};

#endif // AUTOMATE_H
