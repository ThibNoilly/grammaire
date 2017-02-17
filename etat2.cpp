#include "etat2.h"

Etat2::Etat2(string name) : Etat(name)
{
   return;
}

Etat2::print()
{}

Etat2::transition(Automate & automate, Symbole * s)
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
        automate.decalage(s, new Etat6);
        break;
    }
    return false;
}
