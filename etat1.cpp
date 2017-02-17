#include "etat1.h"

Etat1::Etat1(string name) : Etat(name)
{
   return;
}

Etat1::print()
{}

Etat1::transition(Automate & automate, Symbole * s)
{
    switch(*s)
    {
    case ENTIER:
    case PLUS:
        automate.decalage(s, new Etat4);
        break;
    case MULT:
        automate.decalage(s, new Etat5);
        break;
    case OUVRE:
    case FERME:
    case EXPR:
        return true;
    }
    return false;
}
