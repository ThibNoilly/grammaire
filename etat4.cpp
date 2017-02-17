#include "etat4.h"

Etat4::Etat4(string name) : Etat(name)
{
   return;
}

Etat4::print()
{}

Etat4::transition(Automate & automate, Symbole * s)
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
        automate.decalage(s, new Etat7);
        break;
    }
    return false;
}
