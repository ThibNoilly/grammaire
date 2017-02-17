#include "etat5.h"

Etat5::Etat5(string name) : Etat(name)
{
   return;
}

Etat5::print()
{}

Etat5::transition(Automate & automate, Symbole * s)
{
    switch(*s)
    {
    case ENTIER:
        automate.decalage(s, new Etat3);
        break;
    case PLUS:
    case MULT:
    case OUVRE:
        automate.decalage(s, new Etat2);
        break;
    case FERME:
    case EXPR:
        automate.decalage(s, new Etat8);
        break;
    }
    return false;
}
